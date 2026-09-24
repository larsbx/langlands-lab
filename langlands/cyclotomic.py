"""Exact arithmetic in the group ring Z[Z/N] and its quotient Z[zeta_N].

A character value zeta_N^r is the exponent r (mod N).  A sum of character values
is an integer vector c of length N (c[r] = number of terms equal to zeta^r).
Such a vector is zero in Z[zeta_N] iff sum c[r] x^r is divisible by the
cyclotomic polynomial Phi_N(x): the only theorem used is that Phi_N is the
minimal polynomial of zeta_N, i.e. Z[Z/N] -> Z[zeta_N] has kernel (Phi_N).
"""
from __future__ import annotations

import sympy as sp

Vec = tuple[int, ...]


def unit(N: int, r: int) -> Vec:
    return tuple(1 if i == r % N else 0 for i in range(N))


def zero(N: int) -> Vec:
    return (0,) * N


def add(a: Vec, b: Vec) -> Vec:
    return tuple(x + y for x, y in zip(a, b))


def scale(n: int, a: Vec) -> Vec:
    return tuple(n * x for x in a)


def mul(a: Vec, b: Vec) -> Vec:
    N = len(a)
    out = [0] * N
    for i, x in enumerate(a):
        if x:
            for j, y in enumerate(b):
                if y:
                    out[(i + j) % N] += x * y
    return tuple(out)


def is_zero_in_cyclotomic_field(c: Vec) -> bool:
    N = len(c)
    x = sp.Symbol("x")
    poly = sp.Poly(sum(v * x**r for r, v in enumerate(c)), x)
    return sp.rem(poly, sp.Poly(sp.cyclotomic_poly(N, x), x)).is_zero


def equal_in_cyclotomic_field(a: Vec, b: Vec) -> bool:
    return is_zero_in_cyclotomic_field(tuple(x - y for x, y in zip(a, b)))
