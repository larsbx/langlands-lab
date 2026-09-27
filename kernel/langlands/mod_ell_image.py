"""Forcing the image of rho_ell from Frobenius characteristic polynomials alone.

For a good prime p, rho_ell(Frob_p) in GL_2(F_ell) has characteristic polynomial
x^2 - a_p x + p (mod ell), with a_p from a point count; its conjugacy class is determined up to
the scalar/non-scalar ambiguity for repeated roots.  So the image H is a subgroup meeting, for each
observed polynomial chi, the set C_chi of elements with characteristic polynomial chi.

`forced_full(ell, polys)` decides rigorously whether every subgroup meeting all C_chi is GL_2(F_ell),
by a recursion that needs no classification of maximal subgroups: H contains some x_1 in C_1, hence
<x_1>; branching over x_2 in C_2 it contains <x_1, x_2>; and so on.  H is forced to be everything
iff along every branch the generated subgroup reaches GL_2(F_ell) (branches whose subgroup is
already all of G stop; a branch that exhausts the classes without reaching G is a counterexample:
a proper subgroup meeting every observed class, which the image might be).  The first element may
be taken up to conjugacy (the property is conjugation-invariant); subsequent ones range over the
whole class.  Elements are indices into a multiplication table.
"""
from __future__ import annotations

from functools import lru_cache
from itertools import product

from .newforms import RationalNewform

Mat = tuple[int, int, int, int]


class GL2:
    """GL_2(F_ell) with a multiplication table on indices."""

    def __init__(self, ell: int) -> None:
        self.ell = ell
        self.elements: list[Mat] = [m for m in product(range(ell), repeat=4) if (m[0] * m[3] - m[1] * m[2]) % ell]
        self.index = {m: i for i, m in enumerate(self.elements)}
        self.table = [[self.index[self._mul(x, y)] for y in self.elements] for x in self.elements]
        self.one = self.index[(1, 0, 0, 1)]
        self.n = len(self.elements)

    def _mul(self, x: Mat, y: Mat) -> Mat:
        p = self.ell
        return ((x[0] * y[0] + x[1] * y[2]) % p, (x[0] * y[1] + x[1] * y[3]) % p,
                (x[2] * y[0] + x[3] * y[2]) % p, (x[2] * y[1] + x[3] * y[3]) % p)

    def _inv(self, m: Mat) -> Mat:
        u = pow((m[0] * m[3] - m[1] * m[2]) % self.ell, -1, self.ell)
        return tuple((u * e) % self.ell for e in (m[3], -m[1], -m[2], m[0]))

    def charpoly(self, i: int) -> tuple[int, int]:
        a, b, c, d = self.elements[i]
        return ((a + d) % self.ell, (a * d - b * c) % self.ell)  # (trace, det): x^2 - t x + d

    def with_charpoly(self, chi: tuple[int, int]) -> tuple[int, ...]:
        return tuple(i for i in range(self.n) if self.charpoly(i) == chi)

    def generated(self, gens: frozenset[int]) -> frozenset[int]:
        seen = {self.one, *gens}
        frontier, gl = list(seen), list(gens)
        while frontier:
            new = [z for x in frontier for g in gl if (z := self.table[x][g]) not in seen]
            seen.update(new)
            frontier = new
        return frozenset(seen)

    def conjugates(self, x: int) -> frozenset[int]:
        inv = [self.index[self._inv(m)] for m in self.elements]
        return frozenset(self.table[self.table[c][x]][inv[c]] for c in range(self.n))

    def conjugacy_class_representatives(self, elements: tuple[int, ...]) -> list[int]:
        seen, reps = set(), []
        for x in elements:
            if x in seen:
                continue
            reps.append(x)
            seen.update(self.conjugates(x))
        return reps

    def is_conjugation_invariant(self, elements: tuple[int, ...]) -> bool:
        S = frozenset(elements)
        return all(self.conjugates(x) <= S for x in S)


def forced_full_classes(G: GL2, classes: list[tuple[int, ...]]) -> bool:
    """True iff every subgroup of G meeting each of the given element sets is G.  Branches carry the
    small list of generators chosen so far; the subgroup they generate is the state.

    The first set is reduced to conjugacy-class representatives only when *every* set is closed under
    conjugation (then "H meets all sets" is invariant under H -> cHc^-1); otherwise every element of the
    first set is tried, which is always sound."""
    full = frozenset(range(G.n))

    @lru_cache(maxsize=None)
    def forced(H: frozenset[int], gens: tuple[int, ...], k: int) -> bool:
        if H == full:
            return True
        if k == len(classes):
            return False
        # distinct next states only: many x give the same subgroup
        nxt = {}
        for x in classes[k]:
            if x in H:
                nxt.setdefault(H, gens)
            else:
                nxt.setdefault(G.generated(frozenset(gens + (x,))), gens + (x,))
        return all(forced(H2, g2, k + 1) for H2, g2 in nxt.items())

    if not classes:
        return False
    firsts = (G.conjugacy_class_representatives(classes[0]) if all(G.is_conjugation_invariant(c) for c in classes)
              else list(classes[0]))
    return all(forced(G.generated(frozenset({x})), (x,), 1) for x in firsts)


def forced_full(ell: int, polys: tuple[tuple[int, int], ...]) -> bool:
    """True iff every subgroup of GL_2(F_ell) meeting each class {charpoly = chi}, chi in polys, is GL_2(F_ell).
    Classes are visited in decreasing order of the element order (large cyclic subgroups first): the
    answer does not depend on the order, the running time does."""
    G = GL2(ell)
    classes = [G.with_charpoly(chi) for chi in dict.fromkeys(polys)]
    classes.sort(key=lambda c: -len(G.generated(frozenset({c[0]}))))
    return forced_full_classes(G, classes)


def frobenius_charpolys(f: RationalNewform, ell: int, bound: int) -> tuple[tuple[int, int], ...]:
    """(a_p mod ell, p mod ell) for the good primes p <= bound, p != ell."""
    primes = [p for p in range(2, bound + 1) if all(p % d for d in range(2, int(p**0.5) + 1))]
    return tuple((f.a(p) % ell, p % ell) for p in primes if p not in (ell, f.conductor))
