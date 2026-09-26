"""Images of rho_ell forced from point counts: 37a1 is surjective mod 3, 5, 7; 11a1 (rational 5-torsion)
is not forced mod 5; and the criterion refuses to conclude from too little data."""
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
    """The classes lean/LanglandsOracles/ImageMod5.lean certifies: x^2 - 3x + 2 (rho_5(Frob_2), 30 elements,
    a single conjugacy class of diag(1, 2)) and x^2 - 2x + 3 (rho_5(Frob_3), 20 elements); every pair
    generates GL_2(F_5), and the first representative in Lean's enumeration order has code 455."""
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
