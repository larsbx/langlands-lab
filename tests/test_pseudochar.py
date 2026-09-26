"""Pseudocharacter => representation for a finite group, by search: GL_2(F_3) = Gal(Q(37a1[3])/Q)."""
import pytest

from langlands.galois_rep import frobenius_matrix
from langlands.newforms import newforms_of_level
from langlands.pseudochar import (are_conjugate, det, find_all_representations, find_representation, gl2,
                                  is_homomorphism, is_pseudocharacter, mat_mul, trace)

P = 3
G = gl2(P)
ONE = (1, 0, 0, 1)
MUL = lambda x, y: mat_mul(x, y, P)
G0, G1 = (0, 1, 1, 1), (1, 2, 0, 1)  # rho_3(Frob_5), rho_3(Frob_7) of 37a1: order 8 and unipotent, generate GL_2(F_3)

TRACE = lambda g: trace(g, P)
TWIST = lambda g: (det(g, P) * trace(g, P)) % P            # trace of rho (x) det: p a_p mod 3 on Frob_p
CONTRA = lambda g: trace((g[3], -g[1] % P, -g[2] % P, g[0]), P)  # trace of the contragredient g^{-T}
BAD = lambda g: (trace(g, P) + det(g, P) - 1) % P            # tr + (det - 1): T(1) = 2, central, not Procesi


@pytest.mark.parametrize("T", [TRACE, TWIST, CONTRA], ids=["trace", "twist", "contragredient"])
def test_search_realises_pseudocharacters(T):
    assert is_pseudocharacter(T, G, MUL, ONE, P)
    rho = find_representation(T, G, MUL, ONE, (G0, G1), P)
    assert rho is not None and len(rho) == 48
    assert is_homomorphism(rho, G, MUL, P)
    assert all(trace(rho[g], P) == T(g) for g in G)


def test_non_pseudocharacter_is_rejected_and_unrealisable():
    """tr + det - 1 has T(1) = 2 and is central but fails Procesi; no representation has this trace."""
    assert BAD(ONE) == 2 and all(BAD(MUL(x, y)) == BAD(MUL(y, x)) for x in G for y in G)
    assert not is_pseudocharacter(BAD, G, MUL, ONE, P)
    assert find_representation(BAD, G, MUL, ONE, (G0, G1), P) is None


def test_twist_is_the_pseudocharacter_of_rho3_tensor_cyclotomic():
    """On Frobenius elements TWIST reads p a_p mod 3: the trace of rho_3(37a1) (x) chi_cyc."""
    E37 = newforms_of_level(37)[0]
    for p in (5, 7, 11, 13, 17, 19, 23):
        M = frobenius_matrix(E37.reduction(p), 3).matrix
        assert TWIST(M) == (p * E37.reduction(p).trace_of_frobenius) % 3


def test_found_representation_is_the_twist_up_to_conjugacy():
    """The search recovers g -> det(g) g: same trace and det everywhere, and the found rho is conjugate to it."""
    rho = find_representation(TWIST, G, MUL, ONE, (G0, G1), P)
    twist = {g: tuple((det(g, P) * e) % P for e in g) for g in G}
    assert all(trace(rho[g], P) == trace(twist[g], P) and det(rho[g], P) == det(twist[g], P) for g in G)
    inv = lambda c: tuple((pow(det(c, P), -1, P) * e) % P for e in (c[3], -c[1], -c[2], c[0]))
    assert any(all(MUL(MUL(c, twist[g]), inv(c)) == rho[g] for g in G) for c in G)


@pytest.mark.parametrize("T", [TRACE, TWIST], ids=["trace", "twist"])
def test_representation_is_unique_up_to_conjugacy(T):
    """Taylor's uniqueness: every solution of the search is conjugate to the first; there are exactly
    |GL_2(F_3)| / |centre| = 24 of them (the conjugates of one absolutely irreducible rho)."""
    sols = find_all_representations(T, G, MUL, ONE, (G0, G1), P)
    assert len(sols) == 24
    assert all(are_conjugate(sols[0], rho, G, P) for rho in sols)
