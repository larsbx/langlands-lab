"""Branch 1: the Poincaré biextension of 37a1 in the monic Miller frame (exact Q arithmetic).

Rebuilds the Dossier II measurements (T1, T3, T4, T6, T8, T8v) independently and runs the acceptance
test it fixed in advance: with beta_2 twisted by (-1)^{u(a) du(c1,c2)} (`biextension.second_law`), the
exchange ratio is +1 on every stratum.  The sign algebra is PROVED in `BiextensionSign.lean`; tame Weil
reciprocity, which produces the sign, is the IMPORTED input measured here.
"""
from collections import Counter
from fractions import Fraction as F
from itertools import product

import pytest

from langlands.biextension import (
    E37A, P0, deligne_sign, du, exchange_ratio, first_law, second_law, second_law_naive,
)

E = E37A
N = 4
PTS = {n: E.mul(n, P0) for n in range(-2 * N - 1, 2 * N + 2)}
IDX = range(-N, N + 1)


def sampled(fn, arity):
    """fn over all index tuples, skipping samples on a support (reported, never counted as passes)."""
    out = []
    for ns in product(IDX, repeat=arity):
        try:
            out.append((ns, fn(*(PTS[n] for n in ns))))
        except ZeroDivisionError:
            pass
    return out


def test_T1_multiples_of_the_generator():
    assert all(E.on_curve(P) for P in PTS.values())
    assert [PTS[n] for n in (1, 2, 3, 4, 5)] == [(0, 0), (1, 0), (-1, -1), (2, -3), (F(1, 4), F(-5, 8))]
    assert E.add(PTS[3], PTS[-3]) is None and E.add(PTS[4], PTS[-7]) == PTS[-3]


def test_T3_rigidification():
    for a in PTS.values():
        for c in PTS.values():
            assert first_law(E, c, None, a) == first_law(E, c, a, None) == 1
            assert second_law(E, a, None, c) == second_law(E, a, c, None) == 1
            assert second_law(E, None, a, c) == 1


def test_T4_T6_both_laws_are_symmetric_2_cocycles():
    """kappa(c; a1, a2) kappa(c; a1+a2, a3) = kappa(c; a1, a2+a3) kappa(c; a2, a3), exactly, and symmetry —
    for beta_1 and for the twisted beta_2 (the twist is a symmetric coboundary, `twist_cocycle`)."""
    def cocycle(law):
        def check(x, a1, a2, a3):
            lhs = law(E, x, a1, a2) * law(E, x, E.add(a1, a2), a3)
            rhs = law(E, x, a1, E.add(a2, a3)) * law(E, x, a2, a3)
            return lhs == rhs and law(E, x, a1, a2) == law(E, x, a2, a1)
        return check
    beta1 = lambda E_, c, a1, a2: first_law(E_, c, a1, a2)  # noqa: E731
    for law in (beta1, second_law):
        results = sampled(cocycle(law), 4)
        assert len(results) > 1000 and all(ok for _, ok in results)


def strata_of(ns):
    a1, a2, c1, c2 = (PTS[n] for n in ns)
    return E.ord_O(a1, a2), E.ord_O(c1, c2)


def test_T8_law_B_naive_exchange_fails_by_the_deligne_sign():
    """Naive swap: exchange ratio = (-1)^{ord_O g_{a1,a2} ord_O g_{c1,c2}} on every sample; -1 exactly on
    chord/chord, +1 on the vertical and O strata.  Every one of the nine strata is populated."""
    results = sampled(lambda a1, a2, c1, c2: (exchange_ratio(E, a1, a2, c1, c2, second_law_naive),
                                              deligne_sign(E, a1, a2, c1, c2)), 4)
    by_stratum = Counter()
    for ns, (ratio, sign) in results:
        assert ratio == sign, ns
        by_stratum[(strata_of(ns), ratio)] += 1
    assert set(k for k, _ in by_stratum) == set(product((0, -1, -2), repeat=2))
    assert all(r == (-1 if s == (-1, -1) else 1) for s, r in by_stratum)
    assert by_stratum[((-1, -1), -1)] >= 80 and by_stratum[((-2, -1), 1)] >= 40  # Dossier II's sample sizes


def test_acceptance_strict_second_law_satisfies_exchange_on_every_stratum():
    """The acceptance test of Dossier II §8, fixed before the construction: T8 and T8v return +1."""
    results = sampled(lambda a1, a2, c1, c2: exchange_ratio(E, a1, a2, c1, c2, second_law), 4)
    strata = Counter(strata_of(ns) for ns, _ in results)
    assert len(strata) == 9 and min(strata.values()) >= 40
    assert {r for _, r in results} == {1}


def test_generic_stratum_is_the_coboundary_of_u():
    """du(a, b) = [a, b, a+b != O] (`generic_eq_du`), and ord_O g_{a,b} is odd exactly there (`ordO_odd_iff`)."""
    for a, b in product(PTS.values(), repeat=2):
        assert du(E, a, b) == (E.ord_O(a, b) % 2)
