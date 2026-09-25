"""Branch 1, ramified: class field theory of F_p(E) with modulus 2 P_0 (generalized Jacobian), executed."""
import pytest

from langlands import cyclotomic as cyc
from langlands.gl1 import closed_points, zeta_coefficients
from langlands.newforms import newforms_of_level
from langlands.ramified_cft import RayClassGroup, all_characters, conjugate, l_series

E37 = newforms_of_level(37)[0]


def setup(p: int, order: int):
    E = E37.reduction(p)
    P0 = E.points[1]
    T = next(P for P in E.points[1:] if P != P0 and P != E.neg(P0))
    return E, RayClassGroup(E, P0, T), closed_points(E, order)


@pytest.mark.parametrize("p", [5, 7])
def test_ray_class_group_is_an_extension_of_E_by_the_additive_group(p):
    E, G, _ = setup(p, 1)
    assert len(G.elements) == p * E.order
    # abelian and associative: the 2-cocycle is symmetric and satisfies the cocycle identity
    for S1 in E.points:
        for S2 in E.points:
            assert G.cocycle[(S1, S2)] == G.cocycle[(S2, S1)]
    pts = E.points[:4]
    for S1 in pts:
        for S2 in pts:
            for S3 in pts:
                a, b = G.add(G.add((S1, 1), (S2, 2)), (S3, 3)), G.add((S1, 1), G.add((S2, 2), (S3, 3)))
                assert a == b
    # the inertia subgroup {(O, a)} is F_p with the additive law (cocycle vanishes on it)
    assert all(G.add((None, a), (None, b)) == (None, (a + b) % p) for a in range(p) for b in range(p))
    assert len(G.log_table) == p * E.order


@pytest.mark.parametrize("p, order", [(5, 4), (7, 3)])
def test_l_functions_of_ray_class_characters(p, order):
    """L_m(chi, T) = prod_{x != P0} (1 - chi(x) T^{deg x})^{-1}:
       ramified chi (conductor 2 P0): a polynomial of degree 2g - 2 + 2 = 2 with |c_2|^2 = q^2 and
         |c_1|^2 <= 4q in every embedding (Weil / Riemann hypothesis);
       unramified nontrivial chi: 1 - chi(P0) T (the Euler factor at P0 removed from L = 1);
       trivial chi: Z(E, T) (1 - T)."""
    E, G, pts = setup(p, order)
    chars = all_characters(G)
    assert len(chars) == p * E.order
    ramified = [chi for chi in chars if chi.is_ramified]
    assert len(ramified) == p * E.order - E.order
    zeta = zeta_coefficients(E, order)
    P0_class = (G.P0, 0)  # (P0) is not prime to m; an unramified chi sees only the image in E(F_p)
    for chi in chars:
        L = l_series(G, chi, order, pts)
        N = chi.N
        if chi.is_trivial:
            assert tuple(sum(c) for c in L) == tuple(zeta[n] - (zeta[n - 1] if n else 0) for n in range(order + 1))
        elif not chi.is_ramified:
            assert cyc.equal_in_cyclotomic_field(L[1], cyc.scale(-1, cyc.unit(N, chi.exponent(P0_class))))
            assert all(cyc.is_zero_in_cyclotomic_field(c) for c in L[2:])
        else:
            assert all(cyc.is_zero_in_cyclotomic_field(c) for c in L[3:])
            assert not cyc.is_zero_in_cyclotomic_field(L[2])
            assert cyc.equal_in_cyclotomic_field(cyc.mul(L[2], conjugate(L[2])), cyc.scale(p * p, cyc.unit(N, 0)))
            assert cyc.all_conjugates_at_most(cyc.mul(L[1], conjugate(L[1])), 4 * p)
