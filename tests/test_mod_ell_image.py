"""Images of rho_ell forced from point counts: 37a1 is surjective mod 3, 5, 7; 11a1 (rational 5-torsion)
is not forced mod 5; and the criterion refuses to conclude from too little data."""
from pathlib import Path

import pytest

from langlands.mod_ell_image import GL2, forced_full, forced_full_classes, frobenius_charpolys
from langlands.newforms import CREMONA_PRIME_LEVEL, newforms_of_level

E37 = newforms_of_level(37)[0]
E11 = newforms_of_level(11)[0]


@pytest.mark.parametrize("ell", [5, 7])
def test_37a1_mod_ell_image_is_forced_full(ell):
    """Every subgroup of GL_2(F_ell) meeting the Frobenius charpoly classes of 37a1 (p <= 60) is the whole group."""
    polys = frobenius_charpolys(E37, ell, 60)
    assert forced_full(ell, polys), (ell, polys)


def test_37a1_mod_3_needs_a_matrix():
    """Mod 3, characteristic polynomials alone cannot force surjectivity: (x-1)^2 is shared by the identity
    and the unipotents, and the normaliser of the non-split Cartan (order 16) meets every observed charpoly
    class.  Refining (x-1)^2 to its non-scalar part -- what the computed matrix at p = 7 supplies, and what
    lean/LanglandsOracles/ImageMod3.lean certifies -- forces GL_2(F_3)."""
    polys = frobenius_charpolys(E37, 3, 60)
    assert (2, 1) in polys and not forced_full(3, polys)
    G = GL2(3)
    one = G.index[(1, 0, 0, 1)]
    classes = [tuple(i for i in G.with_charpoly(chi) if not (chi == (2, 1) and i == one)) for chi in dict.fromkeys(polys)]
    assert forced_full_classes(G, classes)


@pytest.mark.parametrize("ell", [5, 7])
def test_all_cremona_curves_mod_ell(ell):
    """From point counts p <= 60: every curve's mod-ell image is forced full except 11a1 mod 5 (rational 5-torsion)."""
    not_forced = [f.label for f in CREMONA_PRIME_LEVEL if not forced_full(ell, frobenius_charpolys(f, ell, 60))]
    assert not_forced == (["11a1"] if ell == 5 else []), not_forced


def test_11a1_mod_5_is_not_forced():
    """11a1 has a rational 5-torsion point, so its mod-5 image lies in a Borel: the recursion must find
    a proper subgroup meeting every observed class (a genuine obstruction, not a failure of data)."""
    polys = frobenius_charpolys(E11, 5, 200)
    assert all((1 - t + d) % 5 == 0 for t, d in polys)  # eigenvalue 1 on the rational point
    assert not forced_full(5, polys)


def test_too_little_data_is_not_forced():
    """Classes lying in a common Borel never force GL_2(F_5)."""
    assert not forced_full(5, ((0, 4),))           # x^2 - 1: diag(1, -1) type
    assert not forced_full(5, ((2, 1), (0, 4)))    # unipotent charpoly and diag(1, -1): both inside a Borel


def test_group_orders():
    assert GL2(3).n == 48 and GL2(5).n == 480 and GL2(7).n == 2016


def test_mod5_certificate_classes_of_37a1():
    """The Frobenius classes of 37a1 at p = 2, 3: x^2 - 3x + 2 (30 elements, a single conjugacy class of
    diag(1, 2)) and x^2 - 2x + 3 (20 elements); every pair generates GL_2(F_5), and the first representative
    in Lean's enumeration order has base-5 code 455 (the mod-5 certificate in ImageModL.lean uses this class
    as B of its first certified pair)."""
    from langlands.newforms import newforms_of_level
    E37 = newforms_of_level(37)[0]
    assert (E37.a(2) % 5, E37.a(3) % 5) == (3, 2)
    G = GL2(5)
    A, B = G.with_charpoly((3, 2)), G.with_charpoly((2, 3))
    assert (len(A), len(B)) == (30, 20)
    assert len(G.conjugacy_class_representatives(A)) == 1 and len(G.conjugacy_class_representatives(B)) == 1
    full = frozenset(range(G.n))
    assert all(G.generated(frozenset({g, h})) == full for g in A for h in B)
    code = lambda m: m[0] + 5 * (m[1] + 5 * (m[2] + 5 * m[3]))
    assert code(G.elements[A[0]]) == 455


def test_conjugacy_pruning_only_for_invariant_sets():
    """Reducing the first set to conjugacy representatives is sound only when every set is closed under
    conjugation.  In GL_2(F_2) the sets [(0, 3), (3,)] are not: element 3 alone generates a proper subgroup
    meeting both, so the answer must be False (a pruned search would wrongly certify the full image)."""
    G = GL2(2)
    assert not G.is_conjugation_invariant((3,)) or len(G.conjugates(3)) == 1
    sets = [(0, 3), (3,)]
    if G.is_conjugation_invariant((3,)):
        pytest.skip("element 3 is central in this enumeration; pick a non-invariant set")
    assert not forced_full_classes(G, sets)
    # with every element of the first set tried, the proper subgroup <3> is found; invariant sets are still pruned
    assert G.is_conjugation_invariant(G.with_charpoly((1, 1)))


def _parse_cert(ell):
    """The exported mod-ell certificate from Data.lean: S, pairs (tA, dA, tB, dB, gRep, witnesses, words), curves."""
    import re
    text = (Path(__file__).resolve().parents[1] / "lean" / "LanglandsOracles" / "Data.lean").read_text()
    block = text.split(f"def mod{ell}Cert")[1].split("\n/--")[0]
    S = [int(v) for v in re.search(r"S := \[([^\]]*)\]", block).group(1).split(",")]
    pairs = []
    for m in re.finditer(r"tA := (\d+), dA := (\d+), tB := (\d+), dB := (\d+), gRep := (\d+),\s*witnessesA := \[(.*?)\],\s*wordsB := \[(.*?)\] \}", block, re.S):
        tA, dA, tB, dB, gRep = (int(m.group(i)) for i in range(1, 6))
        wit = [tuple(int(v) for v in w) for w in re.findall(r"\((\d+), (\d+), (\d+)\)", m.group(6))]
        words = [(int(h), [(int(s), [b == "true" for b in bs.split(", ") if b])
                           for s, bs in re.findall(r"\((\d+), \[([^\]]*)\]\)", ws)])
                 for h, ws in re.findall(r"\((\d+), \[((?:\(\d+, \[[^\]]*\]\)(?:, )?)+)\]\)", m.group(7))]
        pairs.append((tA, dA, tB, dB, gRep, wit, words))
    curves = re.findall(r'label := "([^"]+)", ainvs := \[([^\]]*)\], pair := (\d+), p1 := (\d+), p2 := (\d+)', block)
    return S, pairs, curves


@pytest.mark.parametrize("ell,zeta", [(5, 2), (7, 3), (11, 2), (13, 2)])
def test_word_certificates_are_valid(ell, zeta):
    """Mirror of lean/LanglandsOracles/ImageModL.lean: S = {E12(1), E21(1), diag(1, zeta)} generates GL_2(F_ell);
    for every certified pair, the conjugators send gRep onto every element of class A, the words in {gRep, h}
    evaluate to S for every h in class B, and the classes are single conjugacy classes without scalars; for
    ell <= 7 additionally every (g, h) in A x B generates (the fact the words certify)."""
    G = GL2(ell)
    full = frozenset(range(G.n))
    code = lambda i: (lambda m: m[0] + ell * (m[1] + ell * (m[2] + ell * m[3])))(G.elements[i])
    decode = {code(i): i for i in range(G.n)}
    S, pairs, curves = _parse_cert(ell)
    assert [G.elements[decode[s]] for s in S] == [(1, 1, 0, 1), (1, 0, 1, 1), (1, 0, 0, zeta)]
    assert G.generated(frozenset(decode[s] for s in S)) == full
    assert pairs and curves
    assert len(pairs) == block_pair_count(ell)
    for tA, dA, tB, dB, gRep, wit, words in pairs:
        A, B = G.with_charpoly((tA, dA)), G.with_charpoly((tB, dB))
        assert decode[gRep] == A[0]
        assert {g for g, _, _ in wit} == {code(g) for g in A} and {h for h, _ in words} == {code(h) for h in B}
        for g, C, Ci in wit:
            assert G.mul(decode[C], decode[Ci]) == G.one and G.mul(G.mul(decode[C], decode[gRep]), decode[Ci]) == decode[g]
        for h, ws in words:
            assert [s for s, _ in ws] == S
            for s, w in ws:
                gens = [decode[gRep], decode[h]]
                val = gens[w[0]]
                for b in w[1:]:
                    val = G.mul(val, gens[b])
                assert val == decode[s]
        if ell <= 7:
            assert len(G.conjugacy_class_representatives(A)) == 1 and len(G.conjugacy_class_representatives(B)) == 1
            assert all(G.generated(frozenset({g, h})) == full for g in A for h in B)
    labels = [c[0] for c in curves]
    assert labels == ([l for l in ALL_LABELS if l != "11a1"] if ell == 5 else ALL_LABELS)


ALL_LABELS = [f.label for f in CREMONA_PRIME_LEVEL]


def block_pair_count(ell):
    import re
    text = (Path(__file__).resolve().parents[1] / "lean" / "LanglandsOracles" / "Data.lean").read_text()
    return int(re.search(rf"Mod-{ell} image certificates: S, (\d+) certified class pairs", text).group(1))
