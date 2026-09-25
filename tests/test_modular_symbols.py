"""Manin symbols for Gamma_0(N): dimensions, Jacquet–Langlands vs modular symbols, modularity at composite level."""
import pytest
import sympy as sp

from langlands.brandt import SupersingularLocus, ramanujan_violations
from langlands.modular_symbols import ManinSymbols, cusp_count, genus_X0
from langlands.newforms import point_count_general

x = sp.Symbol("x")


@pytest.mark.parametrize("N", list(range(2, 61)))
def test_dimensions_match_genus_and_cusps(N):
    """dim H_1(X_0(N), cusps; Q) = 2g + c - 1 and the cuspidal part has dimension 2g."""
    M = ManinSymbols(N)
    g, c = genus_X0(N), cusp_count(N)
    assert M.dimension == 2 * g + c - 1
    assert M.cuspidal_basis.cols == 2 * g


def test_known_genera():
    assert [genus_X0(N) for N in (11, 13, 14, 15, 17, 19, 20, 23, 27, 32, 36, 37, 43, 53, 59, 61, 101)] == \
        [1, 0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 3, 4, 5, 4, 8]


@pytest.mark.parametrize("p", (11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53))
def test_jacquet_langlands_modular_symbols_agree_with_brandt(p):
    """Two independent automorphic computations: char poly of T_ell on cuspidal modular symbols of level p
    equals the square of the Brandt Hecke polynomial (H_1 = S_2 ⊕ S_2-bar), for ell in {2, 3, 5, 7}."""
    M = ManinSymbols(p)
    L = SupersingularLocus.of(p)
    for ell in (2, 3, 5, 7):
        if ell == p:
            continue
        ms = M.cuspidal_hecke_polynomial(ell)
        brandt = L.hecke_polynomial(ell)
        assert sp.expand(ms.as_expr() - brandt.as_expr() ** 2) == 0, (p, ell)


COMPOSITE_CURVES = {  # conductor: minimal model (from the Tate tests)
    14: (1, 0, 1, 4, -6), 15: (1, 1, 1, -10, -10), 20: (0, 1, 0, 4, 4),
    27: (0, 0, 1, 0, -7), 32: (0, 0, 0, -1, 0), 36: (0, 0, 0, 0, 1),
}


@pytest.mark.parametrize("N", list(COMPOSITE_CURVES))
def test_modularity_at_composite_level(N):
    """genus 1 levels: a_p(E) by point count is the T_p-eigenvalue on the 2-dimensional cuspidal space."""
    M = ManinSymbols(N)
    assert M.cuspidal_basis.cols == 2
    for p in (2, 3, 5, 7, 11, 13):
        if N % p == 0:
            continue
        a_p = p + 1 - point_count_general(COMPOSITE_CURVES[N], p)
        assert sp.expand(M.cuspidal_hecke_polynomial(p).as_expr() - (x - a_p) ** 2) == 0, (N, p, a_p)


@pytest.mark.parametrize("N", (23, 29, 31, 41, 43, 47))
def test_hecke_operators_commute_and_are_ramanujan(N):
    M = ManinSymbols(N)
    mats = {ell: M.cuspidal_hecke_matrix(ell) for ell in (2, 3, 5, 7) if N % ell}
    for a in mats.values():
        for b in mats.values():
            assert (a * b - b * a).is_zero_matrix
    for ell, T in mats.items():
        assert ramanujan_violations(sp.Poly(T.charpoly(x).as_expr(), x), ell) == (0, 0)
