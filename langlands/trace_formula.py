"""Two explicit trace formulas, both with geometric side = class numbers.

eichler_selberg_level1(k, n): tr T_n on S_k(SL_2(Z)) (Zagier's form).
eichler_brandt_trace(p, n):   tr B(n) on the definite quaternion algebra B_{p,oo},
                              i.e. tr T_n on M_2(Gamma_0(p)), gcd(n, p) = 1.
Each is an exact rational computed from class numbers alone; the spectral side is
computed elsewhere (q-expansions, isogeny-graph adjacency) and compared in tests.
"""
from __future__ import annotations

from fractions import Fraction
from math import isqrt

from .qforms import class_number, hurwitz, kronecker, square_divisors_of_discriminant, unit_count


def _P(k: int, t: int, n: int) -> int:
    """(rho^{k-1} - rhobar^{k-1}) / (rho - rhobar) where rho + rhobar = t, rho*rhobar = n:
    the Chebyshev-type recursion P_m = t P_{m-1} - n P_{m-2}, P_0 = 0, P_1 = 1."""
    a, b = 0, 1  # P_0, P_1
    for _ in range(k - 2):
        a, b = b, t * b - n * a
    return b


def eichler_selberg_level1(k: int, n: int) -> Fraction:
    """tr T_n | S_k(SL_2(Z)) = -1/2 sum_{t^2 <= 4n} P_k(t, n) H(4n - t^2)
                             - 1/2 sum_{d d' = n} min(d, d')^{k-1}     (k >= 4 even)."""
    if k < 4 or k % 2:
        raise ValueError("weight must be even and >= 4")
    tmax = isqrt(4 * n)
    elliptic = sum((_P(k, t, n) * hurwitz(4 * n - t * t) for t in range(-tmax, tmax + 1)), Fraction(0))
    hyperbolic = sum(min(d, n // d) ** (k - 1) for d in range(1, n + 1) if n % d == 0)
    return -elliptic / 2 - Fraction(hyperbolic, 2)


def _is_square(n: int) -> bool:
    return n >= 0 and isqrt(n) ** 2 == n


def eichler_brandt_trace(p: int, n: int) -> Fraction:
    """Geometric side of Eichler's trace formula for B(n) on B_{p,oo}, p > 3 prime, p ∤ n:

        tr B(n) = [n square] (p-1)/12
                + sum_{s^2 < 4n} sum_{f: p ∤ f, d = (s^2-4n)/f^2 a discriminant}
                      h(d)/w(d) * (1 - (d/p)).

    Derivation (Deuring): (E_i, alpha) with tr alpha = s, N alpha = n, counted with weight
    1/|Aut E_i|, grouped by the order O_d = End(E_i) ∩ Q(alpha) optimally containing alpha;
    the s^2 = 4n term is alpha = ±sqrt(n) in Z and uses the mass formula sum 1/|O_i^x| = (p-1)/24."""
    if p <= 3 or n % p == 0:
        raise ValueError("need p > 3 prime and gcd(n, p) = 1")
    total = Fraction(p - 1, 12) if _is_square(n) else Fraction(0)
    smax = isqrt(4 * n - 1)
    for s in range(-smax, smax + 1):
        for f, d in square_divisors_of_discriminant(s * s - 4 * n):
            if f % p == 0:
                continue
            total += Fraction(class_number(d), unit_count(d)) * (1 - kronecker(d, p))
    return total


def supersingular_count(p: int) -> int:
    """Number of supersingular j-invariants in char p > 3 (Deuring / Eichler mass):
    (p-1)/12 + (1/4)(1 - (-4/p)) + (1/3)(1 - (-3/p))  = tr B(1)."""
    return int(eichler_brandt_trace(p, 1))


def ramanujan_tau(nmax: int) -> tuple[int, ...]:
    """tau(1..nmax) from Delta = q prod (1 - q^n)^24, computed exactly (independent of any trace formula)."""
    series = [0] * (nmax + 1)
    series[0] = 1
    for m in range(1, nmax + 1):
        for _ in range(24):  # multiply by (1 - q^m)
            for i in range(nmax, m - 1, -1):
                series[i] -= series[i - m]
    return tuple(series[i - 1] for i in range(1, nmax + 1))  # shift by q
