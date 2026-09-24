from hypothesis import given, settings
from hypothesis import strategies as st

from langlands.gf import GF, irreducible_polynomial, is_irreducible, poly_gcd, poly_mul

FIELDS = [GF.of_order(5, 1), GF.of_order(5, 2), GF.of_order(7, 3), GF.of_order(2, 4), GF.of_order(3, 3)]


def test_irreducible_search_is_deterministic_and_irreducible():
    for p, k in [(2, 1), (2, 7), (3, 4), (5, 2), (7, 3), (11, 2)]:
        f = irreducible_polynomial(p, k)
        assert len(f) == k + 1 and f[-1] == 1 and is_irreducible(f, p)


def test_reducible_detected():
    assert not is_irreducible(poly_mul((1, 1), (1, 1), 3), 3)
    assert poly_gcd(poly_mul((1, 1), (2, 1), 5), (1, 1), 5) == (1, 1)


@given(st.data())
@settings(max_examples=60)
def test_field_axioms(data):
    F = data.draw(st.sampled_from(FIELDS))
    elems = list(F.elements())
    a, b, c = (data.draw(st.sampled_from(elems)) for _ in range(3))
    assert F.mul(a, F.add(b, c)) == F.add(F.mul(a, b), F.mul(a, c))
    assert F.mul(F.mul(a, b), c) == F.mul(a, F.mul(b, c))
    if a != F.zero:
        assert F.mul(a, F.inv(a)) == F.one
    assert F.frobenius(F.add(a, b)) == F.add(F.frobenius(a), F.frobenius(b))
    assert F.frobenius(a, F.k) == a


def test_norm_lands_in_prime_field_and_is_multiplicative():
    F = GF.of_order(7, 3)
    for a in list(F.elements())[1:40]:
        assert F.is_prime_field_element(F.norm(a))
        assert F.norm(F.mul(a, F.gen)) == F.mul(F.norm(a), F.norm(F.gen))


def test_sqrt_table_and_roots():
    F = GF.of_order(5, 2)
    squares = {F.mul(a, a) for a in F.elements()}
    assert len(squares) == (25 + 1) // 2
    for s in squares:
        r = F.sqrt(s)
        assert r is not None and F.mul(r, r) == s
    # (Y - 2)^2 (Y - 3) over F_25
    two, three = F.from_int(2), F.from_int(3)
    poly = (F.neg(F.from_int(12)), F.from_int(16), F.neg(F.from_int(7)), F.one)
    assert dict(F.poly_roots(poly)) == {two: 2, three: 1}
