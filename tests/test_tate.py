"""Tate's algorithm over Z_(p) (known conductors, Kodaira types, root numbers) and over F_q[t] (Drinfeld levels)."""
from fractions import Fraction

import pytest

from langlands.ec_function_field import FunctionFieldCurve, monic_irreducibles
from langlands.tate import PolyLocal, ZLocal, tate

KODAIRA_COMPONENTS = {"I0": 1, "II": 1, "III": 2, "IV": 3, "I0*": 5, "IV*": 7, "III*": 8, "II*": 9}


def components(kodaira: str) -> int:
    if kodaira in KODAIRA_COMPONENTS:
        return KODAIRA_COMPONENTS[kodaira]
    n = int(kodaira.rstrip("*")[1:])
    return n + 5 if kodaira.endswith("*") else n


# label: a-invariants, {p: (Kodaira type, conductor exponent, Tamagawa number or None)}, analytic rank parity
CREMONA = {
    "11a1": ((0, -1, 1, -10, -20), {11: ("I5", 1, 5)}, 0),
    "14a1": ((1, 0, 1, 4, -6), {2: ("I6", 1, 2), 7: ("I3", 1, 3)}, 0),
    "15a1": ((1, 1, 1, -10, -10), {3: ("I4", 1, 2), 5: ("I4", 1, 4)}, 0),
    "20a1": ((0, 1, 0, 4, 4), {2: ("IV*", 2, 3), 5: ("I2", 1, 2)}, 0),
    "27a1": ((0, 0, 1, 0, -7), {3: ("IV*", 3, 3)}, 0),
    "32a2": ((0, 0, 0, -1, 0), {2: ("III", 5, 2)}, 0),
    "36a1": ((0, 0, 0, 0, 1), {2: ("IV", 2, 3), 3: ("III", 2, 2)}, 0),
    "37a1": ((0, 0, 1, -1, 0), {37: ("I1", 1, 1)}, 1),
    "37b1": ((0, 1, 1, -23, -50), {37: ("I3", 1, 3)}, 0),
    "43a1": ((0, 1, 1, 0, 0), {43: ("I1", 1, 1)}, 1),
}


@pytest.mark.parametrize("label", list(CREMONA))
def test_tate_over_Z_reproduces_kodaira_types_and_conductor_exponents(label):
    a, expected, _ = CREMONA[label]
    for p, (kodaira, f, c) in expected.items():
        res = tate(ZLocal(p), tuple(Fraction(x) for x in a))
        assert (res.kodaira, res.conductor_exponent, res.tamagawa) == (kodaira, f, c), (label, p, res)
        assert res.discriminant_valuation == f + components(res.kodaira) - 1  # Ogg's formula


@pytest.mark.parametrize("label", ["11a1", "37a1", "37b1", "43a1"])
def test_split_multiplicative_reduction_matches_the_root_number_at_prime_conductor(label):
    """Prime conductor p: the global root number is -w_p with w_p = -1 iff split; rank parity = (1 - w)/2."""
    a, expected, rank_parity = CREMONA[label]
    (p, _), = expected.items()
    res = tate(ZLocal(p), tuple(Fraction(x) for x in a))
    w_p = -1 if res.split else 1
    assert (1 - (-w_p)) // 2 == rank_parity


DRINFELD_CURVES = {
    "E_t3/F2": (FunctionFieldCurve(2, ((0, 1), (), (), (1,), ())), 3, "III"),
    "E_t4/F2": (FunctionFieldCurve(2, ((0, 1), (), (0, 0, 1), (1,), (0, 1, 1, 1))), 4, "II"),
    "E3_A/F3": (FunctionFieldCurve(3, ((), (0, 0, 1), (), (0, 1), (1,))), 3, "II"),
    "E3_B/F3": (FunctionFieldCurve(3, ((), (0, 0, 1), (), (0, 2), (1,))), 3, "II"),
}


@pytest.mark.parametrize("name", list(DRINFELD_CURVES))
def test_conductor_of_drinfeld_curves_equals_the_tree_level(name):
    """Galois-side conductor by Tate's algorithm (wild places included) = the Drinfeld level t^f,
    with split multiplicative reduction at oo, deg N - 4 = deg L, and deg Delta_min = 12."""
    E, f_t, kodaira = DRINFELD_CURVES[name]
    data = E.local_data(4)
    assert set(data) == {(0, 1), None}
    assert data[(0, 1)].kodaira == kodaira and data[(0, 1)].conductor_exponent == f_t
    assert data[None].kodaira.startswith("I") and data[None].split and data[None].conductor_exponent == 1
    assert E.conductor_degree(4) == f_t + 1
    assert data[(0, 1)].discriminant_valuation + data[None].discriminant_valuation == 12
    L = E.l_series(5)
    assert len([c for c in L if c]) - 1 == E.conductor_degree(4) - 4  # L = 1 or 1 + 2T: degree deg N - 4
