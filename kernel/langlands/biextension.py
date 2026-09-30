"""Branch 1: the Poincaré biextension of 37a1 in the monic Miller frame, over Q, exactly.

E: y^2 + y = x^3 - x (37a1, minimal model), P0 = (0, 0) generates E(Q).  Uniformiser t = x/y at O:
x = t^-2(1 + O(t)), y = t^-3(1 + O(t)), so the chord y - lam x - nu (ord -3), the vertical x - x0
(ord -2) and the Miller function g_{A,B} = chord / vertical (ord -1) all have t-leading coefficient 1
("tame-monic").  With every piece monic, the regularised value at O is the leading coefficient, 1.

Factor systems in the frame s of P^x over E x E^v = E x E (principal polarisation):
    first law   kappa(c; a1, a2)  = g_{a1,a2}(c)
    second law  kappa'_a(c1, c2)  = g_{c1,c2}(a)            (the naive swap)
Exchange compares the two ways of combining the four fibres over (a_i, c_j); by tame Weil reciprocity
for f = g_{a1,a2}, h = g_{c1,c2} (divisors meeting only at O) the naive pair misses it by the Deligne
sign (-1)^{ord_O f * ord_O h} (Law B).  ord_O g_{a,b} is -1 on the generic stratum (a, b, a+b != O),
-2 on the vertical one (a + b = O != a) and 0 when an argument is O, so its parity is the coboundary of
u(a) = [a != O]; the second law in the frame s is therefore
    beta_2:  kappa''_a(c1, c2) = (-1)^{u(a) * du(c1, c2)} * g_{c1,c2}(a),
a rigidified symmetric-coboundary twist that cancels the sign on every stratum (`BiextensionSign.lean`
proves the sign algebra for any group).  No frame change can do this: the exchange defect is
frame-invariant.
"""
from __future__ import annotations

from dataclasses import dataclass
from fractions import Fraction

Point = tuple[Fraction, Fraction] | None  # None = O


@dataclass(frozen=True)
class Weierstrass:
    """y^2 + a1 xy + a3 y = x^3 + a2 x^2 + a4 x + a6 over Q."""

    a1: Fraction
    a2: Fraction
    a3: Fraction
    a4: Fraction
    a6: Fraction

    def on_curve(self, P: Point) -> bool:
        if P is None:
            return True
        x, y = P
        return y * y + self.a1 * x * y + self.a3 * y == x**3 + self.a2 * x * x + self.a4 * x + self.a6

    def neg(self, P: Point) -> Point:
        return None if P is None else (P[0], -P[1] - self.a1 * P[0] - self.a3)

    def slope(self, P: Point, Q: Point) -> tuple[Fraction, Fraction] | None:
        """(lam, nu) of the chord/tangent through P, Q (both finite, Q != -P); None if vertical."""
        (x1, y1), (x2, y2) = P, Q
        if x1 != x2:
            lam = (y2 - y1) / (x2 - x1)
        elif y1 == y2 and 2 * y1 + self.a1 * x1 + self.a3 != 0:
            lam = (3 * x1 * x1 + 2 * self.a2 * x1 + self.a4 - self.a1 * y1) / (2 * y1 + self.a1 * x1 + self.a3)
        else:
            return None
        return lam, y1 - lam * x1

    def add(self, P: Point, Q: Point) -> Point:
        if P is None:
            return Q
        if Q is None:
            return P
        line = self.slope(P, Q)
        if line is None:
            return None
        lam, nu = line
        x3 = lam * lam + self.a1 * lam - self.a2 - P[0] - Q[0]
        return self.neg((x3, lam * x3 + nu))

    def mul(self, n: int, P: Point) -> Point:
        R, B = None, (P if n >= 0 else self.neg(P))
        for _ in range(abs(n)):
            R = self.add(R, B)
        return R

    # ------------------------------------------------------ Miller functions --
    def ord_O(self, A: Point, B: Point) -> int:
        """ord_O g_{A,B}: -1 generic, -2 vertical (A + B = O != A), 0 if A or B is O."""
        if A is None or B is None:
            return 0
        return -2 if self.add(A, B) is None else -1

    def miller(self, A: Point, B: Point, c: Point) -> Fraction:
        """g_{A,B}(c), div g = (A) + (B) - (A+B) - (O), tame-monic at O; g(O) = 1 (regularised).
        Raises ZeroDivisionError when c lies on the support (the value is 0 or oo there)."""
        if A is None or B is None or c is None:
            return Fraction(1)
        x, y = c
        line = self.slope(A, B)
        if line is None:  # A + B = O: g = x - x_A
            v = x - A[0]
            if v == 0:
                raise ZeroDivisionError("c on the support of the vertical")
            return v
        lam, nu = line
        num = y - lam * x - nu
        den = x - self.add(A, B)[0]
        if num == 0 or den == 0:
            raise ZeroDivisionError("c on the support of the chord or vertical")
        return num / den


E37A = Weierstrass(*map(Fraction, (0, 0, 1, -1, 0)))
P0: Point = (Fraction(0), Fraction(0))


def u(P: Point) -> int:
    return 0 if P is None else 1


def du(E: Weierstrass, a: Point, b: Point) -> int:
    """(u(a) + u(b) + u(a+b)) mod 2: 1 exactly on the generic stratum."""
    return (u(a) + u(b) + u(E.add(a, b))) % 2


# ------------------------------------------------------------ the two laws --
def first_law(E: Weierstrass, c: Point, a1: Point, a2: Point) -> Fraction:
    return E.miller(a1, a2, c)


def second_law_naive(E: Weierstrass, a: Point, c1: Point, c2: Point) -> Fraction:
    return E.miller(c1, c2, a)


def second_law(E: Weierstrass, a: Point, c1: Point, c2: Point) -> Fraction:
    """beta_2 in the frame s: the naive swap twisted by (-1)^{u(a) du(c1, c2)}."""
    return (-1) ** (u(a) * du(E, c1, c2)) * second_law_naive(E, a, c1, c2)


def exchange_ratio(E: Weierstrass, a1: Point, a2: Point, c1: Point, c2: Point, second=second_law) -> Fraction:
    """[beta_1 at c1, c2 then beta_2 at a1+a2] / [beta_2 at a1, a2 then beta_1 at c1+c2]; 1 iff exchange holds."""
    lhs = first_law(E, c1, a1, a2) * first_law(E, c2, a1, a2) * second(E, E.add(a1, a2), c1, c2)
    rhs = second(E, a1, c1, c2) * second(E, a2, c1, c2) * first_law(E, E.add(c1, c2), a1, a2)
    return lhs / rhs


def deligne_sign(E: Weierstrass, a1: Point, a2: Point, c1: Point, c2: Point) -> int:
    """(-1)^{ord_O g_{a1,a2} * ord_O g_{c1,c2}}: the tame symbol at O of two monic functions."""
    return (-1) ** (E.ord_O(a1, a2) * E.ord_O(c1, c2))
