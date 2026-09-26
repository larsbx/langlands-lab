"""Export exact Python-side data as Lean literals: lean/LanglandsOracles/Data.lean.

Lean re-derives the arithmetic side (class numbers, Eichler's formula, zeta) and certifies
the exported spectral data (Brandt matrices, L-series coefficient vectors) against it.
Deterministic: the test suite regenerates the file and requires it to be unchanged.
"""
from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from langlands.brandt import SupersingularLocus  # noqa: E402
from langlands.gl1 import all_characters, closed_points, l_series  # noqa: E402
from langlands.newforms import newforms_of_level  # noqa: E402
from langlands.ec_function_field import FunctionFieldCurve, monic_irreducibles  # noqa: E402

BRANDT_PRIMES = (11, 13, 17, 19, 23, 29, 31, 37)
BRANDT_ELLS = (2, 3, 5, 7)
GL1_PRIMES = (5, 7)


def lean_list(xs) -> str:
    return "[" + ", ".join(str(x) for x in xs) + "]"


def lean_matrix(M) -> str:
    return "[" + ", ".join(lean_list(M.row(i)) for i in range(M.rows)) + "]"


def brandt_block() -> list[str]:
    out = ["/-- (p, |Aut E_i|, [(ell, B(ell))]) for supersingular loci; B(2), B(3) by Phi_ell, B(5), B(7) by Vélu. -/",
           "def brandtData : List (Nat × List Nat × List (Nat × IMat)) := ["]
    for p in BRANDT_PRIMES:
        L = SupersingularLocus.of(p)
        mats = ", ".join(f"({ell}, {lean_matrix(L.brandt_matrix(ell))})" for ell in BRANDT_ELLS if ell != p)
        out.append(f"  ({p}, {lean_list(L.aut_orders)}, [{mats}]),")
    out[-1] = out[-1].rstrip(",")
    out.append("]")
    return out


def gl1_block() -> list[str]:
    E37 = newforms_of_level(37)[0]
    out = ["/-- (p, a_p, N, [(trivial?, coefficients c_0..c_D of L(chi, T) in Z[Z/N])]) for 37a1 mod p. -/",
           "def lSeriesData : List (Nat × Int × Nat × List (Bool × List (List Int))) := ["]
    for p in GL1_PRIMES:
        E = E37.reduction(p)
        order = 4 if p == 5 else 3
        pts = closed_points(E, order)
        chars = []
        for chi in all_characters(E.structure):
            L = l_series(E, chi, order, pts)
            chars.append(f"({'true' if chi.is_trivial else 'false'}, {lean_list(lean_list(c) for c in L)})")
        out.append(f"  ({p}, {E.trace_of_frobenius}, {E.structure.exponent}, [{', '.join(chars)}]),")
    out[-1] = out[-1].rstrip(",")
    out.append("]")
    return out


FUNCTION_FIELD_CURVES = (
    ("E_t3", FunctionFieldCurve(2, ((0, 1), (), (), (1,), ())), 5),
    ("E_t4", FunctionFieldCurve(2, ((0, 1), (), (0, 0, 1), (1,), (0, 1, 1, 1))), 5),
    ("E3_A", FunctionFieldCurve(3, ((), (0, 0, 1), (), (0, 1), (1,))), 4),
    ("E3_B", FunctionFieldCurve(3, ((), (0, 0, 1), (), (0, 2), (1,))), 4),
)


def function_field_block() -> list[str]:
    """(q, order, [(degree, kind, a)]) per curve: kind 0 good, 1 multiplicative, 2 additive (oo included)."""
    kinds = {"good": 0, "split": 1, "nonsplit": 1, "additive": 2}
    out = ["/-- Local data of elliptic curves over F_q(t): (q, order, [(deg v, kind, a_v)]) for all places of degree <= order. -/",
           "def functionFieldLocalData : List (Nat × Nat × List (Nat × Nat × Int)) := ["]
    for _, E, order in FUNCTION_FIELD_CURVES:
        places = [(f, len(f) - 1) for f in monic_irreducibles(E.p, order)] + [(None, 1)]
        rows = ", ".join(f"({d}, {kinds[E.reduction_type(f)]}, {E.trace_at(f)})" for f, d in places)
        out.append(f"  ({E.p}, {order}, [{rows}]),")
    out[-1] = out[-1].rstrip(",")
    out.append("]")
    return out


def brandt_eigenvector_block() -> list[str]:
    L = SupersingularLocus.of(37)
    v = L.common_eigenvector({2: -2, 3: -3, 5: -2, 7: -1})
    ints = [int(x) for x in v]
    return ["/-- A joint eigenvector of B(2), B(3), B(5), B(7) at p = 37 with eigenvalues (-2, -3, -2, -1): the form 37a. -/",
            f"def brandt37Eigenvector : List Int := {lean_list(ints)}"]


def galois_mod3_block() -> list[str]:
    """rho_3(Frob_p) on 37a1[3] as (a, b, c, d) in GL_2(F_3), for the good primes of ExcursionInstance.lean."""
    from langlands.galois_rep import frobenius_matrix
    E37 = newforms_of_level(37)[0]
    rows = []
    for p in (5, 7, 11, 13, 17, 19, 23, 29, 31, 41, 43, 47, 53, 59, 61):
        M = frobenius_matrix(E37.reduction(p), 3)
        rows.append(f"({p}, {lean_list(M.matrix)})")
    return ["/-- (p, [a, b, c, d]) with rho_3(Frob_p) = [[a, b], [c, d]] on a basis of 37a1[3] over F_{p^k}: computed by Python. -/",
            "def galoisMod3Data : List (Nat × List Nat) := [" + ", ".join(rows) + "]"]


def galois_mod2_block() -> list[str]:
    """Per Cremona curve: (label, [a1,a2,a3,a4,a6], type, rational roots of psi_2 as (num, den), Frobenius
    witnesses (p, [a,b,c,d]) for rho_2(Frob_p) on a computed basis of E[2]); type 0 = S_3, 1 = C_2."""
    from langlands.mod2_image import mod2_image
    from langlands.newforms import CREMONA_PRIME_LEVEL
    rows = []
    for f in CREMONA_PRIME_LEVEL:
        im = mod2_image(f)
        typ = {"S3": 0, "C2": 1}[im.group]
        roots = lean_list(f"({r.numerator}, {r.denominator})" for r in im.rational_roots)
        wits = lean_list(f"({p}, {lean_list(M)})" for cls, (p, M) in sorted(im.witnesses.items()) if cls != "id")
        rows.append(f'("{f.label}", {lean_list(f.a_invariants)}, {typ}, {roots}, {wits})')
    return ["/-- (label, a-invariants, image type (0 = S_3, 1 = C_2), rational roots of psi_2 as (num, den), Frobenius",
            "    witnesses (p, [a, b, c, d]) with rho_2(Frob_p) = [[a, b], [c, d]] on a basis of E[2] over F_{p^k}): Python. -/",
            "def galoisMod2Data : List (String × List Int × Nat × List (Int × Int) × List (Nat × List Nat)) := [",
            "  " + ",\n  ".join(rows) + "]"]


def mod5_witness_block() -> list[str]:
    """For ImageMod5.lean: gRep = the first element of GL_2(F_5) (in Lean's `gl 5` order) with charpoly
    x^2 - 3x + 2, and for every g in that class a conjugator C with C gRep C^-1 = g, as base-5 codes."""
    from itertools import product
    p = 5
    def code(m):
        return m[0] + p * (m[1] + p * (m[2] + p * m[3]))
    def mul(x, y):
        return ((x[0] * y[0] + x[1] * y[2]) % p, (x[0] * y[1] + x[1] * y[3]) % p,
                (x[2] * y[0] + x[3] * y[2]) % p, (x[2] * y[1] + x[3] * y[3]) % p)
    def inv(m):
        u = pow((m[0] * m[3] - m[1] * m[2]) % p, -1, p)
        return tuple((u * e) % p for e in (m[3], -m[1], -m[2], m[0]))
    gl = [m for m in product(range(p), repeat=4) if (m[0] * m[3] - m[1] * m[2]) % p]
    classA = [m for m in gl if (m[0] + m[3]) % p == 3 and (m[0] * m[3] - m[1] * m[2]) % p == 2]
    g_rep = classA[0]
    rows = []
    for g in classA:
        C = next(c for c in gl if mul(mul(c, g_rep), inv(c)) == g)
        rows.append(f"({code(g)}, {code(C)}, {code(inv(C))})")
    assert len(rows) == 30
    return ["/-- (code g, code C, code C⁻¹) with C·gRep·C⁻¹ = g for every g with charpoly x² − 3x + 2 in GL₂(𝔽₅); gRep is the first such. -/",
            f"def mod5GRep : Nat := {code(g_rep)}",
            "def mod5Witnesses : List (Nat × Nat × Nat) := " + lean_list(rows)]


def trace_block() -> list[str]:
    """(N, k, n, tr T_n on cuspidal weight-k Manin symbols) for gcd(n, N) = 1: weight 2 for N <= 20,
    weights 4 and 6 for N <= 6, weight 12 at level 1."""
    from math import gcd
    from langlands.modular_symbols import ManinSymbolsK
    rows = []
    grid = [(N, 2, 7) for N in range(2, 21)] + [(N, k, 5) for N in range(1, 7) for k in (4, 6)] + [(1, 12, 6)]
    for N, k, nmax in grid:
        M = ManinSymbolsK(N, k)
        for n in range(1, nmax + 1):
            if gcd(n, N) != 1:
                continue
            tr = M.cuspidal_hecke_matrix(n).trace() if M.cuspidal_basis.cols else 0
            assert tr == int(tr)
            rows.append(f"({N}, {k}, {n}, {int(tr)})")
    return ["/-- (N, k, n, tr T_n on cuspidal weight-k Manin symbols): computed by Python (modular_symbols.py). -/",
            "def traceData : List (Nat × Nat × Nat × Int) := [" + ", ".join(rows) + "]"]


def render() -> str:
    lines = ["-- GENERATED by tools/export_lean_data.py; do not edit.", "import LanglandsOracles.Matrix", "", "namespace Oracles", ""]
    lines += brandt_block() + [""] + brandt_eigenvector_block() + [""] + gl1_block() + [""] + function_field_block() + [""] + galois_mod3_block() + [""] + galois_mod2_block() + [""] + mod5_witness_block() + [""] + trace_block() + ["", "end Oracles", ""]
    return "\n".join(lines)


if __name__ == "__main__":
    target = ROOT / "lean" / "LanglandsOracles" / "Data.lean"
    text = render()
    if "--check" in sys.argv:
        sys.exit(0 if target.read_text() == text else 1)
    target.write_text(text)
    print(f"wrote {target}")
