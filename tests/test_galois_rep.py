"""Mod-ell Galois representations as computed matrices; the Weil pairing as the biextension commutator."""
import pytest

from langlands.galois_rep import _basis, frobenius_matrix, torsion_points, weil_pairing
from langlands.newforms import CREMONA_PRIME_LEVEL, newforms_of_level

E37 = newforms_of_level(37)[0]
PRIMES = [5, 7, 11, 13, 17, 19, 23, 29, 31]


@pytest.mark.parametrize("ell", [2, 3])
@pytest.mark.parametrize("f", CREMONA_PRIME_LEVEL, ids=lambda f: f.label)
def test_eichler_shimura_mod_ell_as_a_matrix_identity(f, ell):
    """rho_ell(Frob_p) on E[ell] over the splitting field: trace = a_p, det = p (mod ell)."""
    for p in PRIMES:
        if p == f.conductor:
            continue
        E = f.reduction(p)
        M = frobenius_matrix(E, ell)
        assert M.trace == E.trace_of_frobenius % ell and M.det == p % ell, (f.label, p, ell, M)
        assert (M.matrix[0] * M.matrix[3] - M.matrix[1] * M.matrix[2]) % ell != 0


def test_splitting_degree_is_the_order_of_the_frobenius_matrix():
    """Frob^k = 1 on E[ell] exactly when k is the splitting degree, so the matrix has that order."""
    for p in PRIMES:
        for ell in (2, 3):
            M = frobenius_matrix(E37.reduction(p), ell)
            a, b, c, d = M.matrix
            X, k = (1, 0, 0, 1), 0
            while True:
                X = ((X[0] * a + X[1] * c) % ell, (X[0] * b + X[1] * d) % ell, (X[2] * a + X[3] * c) % ell, (X[2] * b + X[3] * d) % ell)
                k += 1
                if X == (1, 0, 0, 1):
                    break
            assert k == M.splitting_degree, (p, ell, M)


@pytest.mark.parametrize("p", [7, 11, 13, 19])
@pytest.mark.parametrize("ell", [2, 3])
def test_weil_pairing_is_the_biextension_commutator(p, ell):
    """e_ell is bilinear, alternating, nondegenerate, of exact order ell, and Galois-equivariant:
    e(Frob P, Frob Q) = e(P, Q)^p, i.e. det rho_ell(Frob_p) = p (mod ell) — the cyclotomic character."""
    EK, pts = torsion_points(E37.reduction(p), ell)
    P, Q = _basis(EK, ell, pts)
    F = EK.F
    e = weil_pairing(EK, ell, P, Q)
    assert e != F.one and F.pow(e, ell) == F.one
    assert weil_pairing(EK, ell, P, P) == F.one and weil_pairing(EK, ell, Q, Q) == F.one
    assert weil_pairing(EK, ell, Q, P) == F.inv(e)
    assert weil_pairing(EK, ell, EK.add(P, Q), Q) == e  # bilinear with e(Q, Q) = 1
    assert weil_pairing(EK, ell, EK.mul(2, P), Q) == F.mul(e, e)
    assert weil_pairing(EK, ell, EK.frobenius(P), EK.frobenius(Q)) == F.pow(e, p)
    M = frobenius_matrix(E37.reduction(p), ell)
    assert F.pow(e, M.det) == F.pow(e, p)  # det rho = p mod ell, read off the pairing
