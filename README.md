# langlands-lab

Exact, finite-field instrumentation of three entry points into the Langlands
correspondence, sequenced **2 → 1 → 3**.  Everything is computed with exact
arithmetic (Python ints, immutable tuples, sympy over ℤ); theorems enter only in
the *interpretation* of a match, and each test docstring says which side is
computed and which theorem the match instantiates.

| branch | object | what is computed | what the match instantiates |
|---|---|---|---|
| 2 | supersingular ℓ-isogeny graphs mod p | Brandt matrices B(2), B(3) from Φ₂, Φ₃ over 𝔽_{p²}; traces of B(n), n ≤ 12; Hecke polynomials; exact Sturm root counts | Eichler's trace formula (spectral = class numbers), Jacquet–Langlands + Eichler–Shimura (eigenvalues = point counts), Ramanujan–Petersson |
| 2 | S_k(SL₂(ℤ)) | Zagier's form of Eichler–Selberg from Hurwitz class numbers; τ(n) from Δ's q-expansion | the simplest fully explicit Arthur–Selberg instance |
| 1 | E = 37a1 mod p, p ∈ {5, 7} | Lang-isogeny fibers; χ∘N on Pic⁰(𝔽_{pᵏ}); Abel sums of lines; tame symbols from Laurent expansions; L(χ, T) as an Euler product in ℤ[ζ][[T]] | unramified geometric CFT for GL₁: L_χ ↔ character sheaf A_χ, L(E, L_χ) = 1 ≠ Z(E, T), Weil reciprocity with the Deligne sign |
| 3 | Carlitz module over 𝔽_p[t] | C_P ≡ x^{|P|} (mod P); Frob_P = C_P on C[M]; splitting degrees = ord of P in (A/ann λ)^× | function-field CFT for GL₁ (Carlitz–Hayes), the seed for Drinfeld's GL₂ dictionary |

See `docs/dossier.md` for the numbers and the PROVED / IMPORTED ledger.

## Layout

```
langlands/
  gf.py                 F_{p^k}: irreducible search (Rabin), log/exp tables, roots with multiplicity
  qforms.py             h(d) by reduced forms, w(d), Hurwitz H(N)
  trace_formula.py      Eichler–Selberg (level 1, Zagier form); Eichler's Brandt trace (level p); τ(n)
  modular_polynomial.py Φ₂, Φ₃
  supersingular.py      supersingular j in F_{p²} via the Hasse polynomial (Deuring)
  brandt.py             B(ℓ) as isogeny-graph adjacency, Hecke relations, Hecke polynomials, RP check
  ec.py                 y² = x³ + ax + b: group law, enumeration, structure with basis, Frobenius
  newforms.py           Cremona models of prime conductor ≤ 101; a_ℓ by point count
  cyclotomic.py         ℤ[ℤ/N] → ℤ[ζ_N] zero test via Φ_N
  laurent.py            Laurent series; local expansions at every point incl. O; tame symbols
  gl1.py                branch 1: Lang fibers, characters, closed points, L(χ,T), Abel, Weil reciprocity
  carlitz.py            branch 3: Carlitz module, Fermat–Carlitz, reciprocity, annihilators
tests/                  one file per branch; all exact, no floating point
docs/dossier.md         results ledger
```

## Run

```
pip install -e '.[test]'
pytest                      # ~40 s, all branches, 140 tests
pytest tests/test_branch2_trace_formula.py
pytest tests/test_branch1_gl1.py
pytest tests/test_branch3_carlitz.py
```

## Boundaries

- Brandt matrices exist only for ℓ ∈ {2, 3} (the hard-coded Φ_ℓ); JL is checked
  at ℓ = 2, 3 against point counts on the Cremona curves, and the class-number
  side is checked against point counts at ℓ ≤ 31 for the levels 11, 17, 19, 37
  where S₂(Γ₀(p)) is spanned by rational newforms.
- The identification "eigenvalue of B(ℓ) = a_ℓ of a newform" is *checked*; the
  identification "newform ↔ Cremona curve" is imported (modularity).
- L(χ, T) is computed as an Euler product to order 4 (p = 5) or 3 (p = 7); its
  vanishing is verified in ℤ[ζ_N] (not termwise, which fails), and its prediction
  dim H¹(Ē, L_χ) = 2g − 2 = 0 is the imported cohomological statement.
- The Ramanujan check is exact root isolation of the Hecke polynomial; the
  Apollonian λ₂ universality lives in a different regime (Selberg / Kim–Sarnak θ₇
  for congruence quotients of hyperbolic space), see the dossier.
- No Lean here yet; the excursion-algebra target (branch 3, second act) is a
  plan, not code.
