# langlands-lab

Exact, finite-field instrumentation of three entry points into the Langlands
correspondence, sequenced **2 → 1 → 3**.  Everything is computed with exact
arithmetic (Python ints, immutable tuples, sympy over ℤ); theorems enter only in
the *interpretation* of a match, and each test docstring says which side is
computed and which theorem the match instantiates.

| branch | object | what is computed | what the match instantiates |
|---|---|---|---|
| 2 | supersingular ℓ-isogeny graphs mod p | Brandt matrices B(2), B(3) from Φ₂, Φ₃ over 𝔽_{p²}, and B(ℓ) for any odd ℓ by Vélu on a scalar-Frobenius model (no modular polynomial); traces of B(n), n ≤ 49; Hecke polynomials; exact Sturm root counts | Eichler's trace formula (spectral = class numbers), Jacquet–Langlands + Eichler–Shimura (eigenvalues = point counts at ℓ = 2, 3, 5, 7), Ramanujan–Petersson |
| 2 | modular symbols for Γ₀(N) | Manin symbols, boundary map, Hecke via Heilbronn matrices; cuspidal Hecke polynomials for N ≤ 60 | Jacquet–Langlands between two automorphic computations (= Brandt² at prime level), modularity at composite level |
| 2 | S_k(SL₂(ℤ)) and S₂(Γ₀(N)) | Zagier's form of Eichler–Selberg from Hurwitz class numbers; τ(n) from Δ's q-expansion; the level-N formula (class numbers, local factors) against modular-symbol traces for N ≤ 40 at weight 2 and N ≤ 12 at weights 4 to 12 | the simplest fully explicit Arthur–Selberg instances, geometric side = class numbers |
| 1 | E = 37a1 mod p, p ∈ {5, 7} | Lang-isogeny fibers; χ∘N on Pic⁰(𝔽_{pᵏ}); Abel sums of lines; tame symbols from Laurent expansions; L(χ, T) as an Euler product in ℤ[ζ][[T]] | unramified geometric CFT for GL₁: L_χ ↔ character sheaf A_χ, L(E, L_χ) = 1 ≠ Z(E, T), Weil reciprocity with the Deligne sign |
| 1 | E = 37a1 mod p, modulus 2P₀ | generalized Jacobian J_𝔪(𝔽_p) as pairs with its 2-cocycle; ray class characters; L_𝔪(χ, T) as Euler products | ramified geometric CFT for GL₁ (Rosenlicht–Serre): conductor-2 Artin–Schreier characters have L of degree 2 satisfying the Riemann hypothesis |
| 3 | Carlitz module over 𝔽_p[t] | C_P ≡ x^{|P|} (mod P); Frob_P = C_P on C[M]; splitting degrees = ord of P in (A/ann λ)^× | function-field CFT for GL₁ (Carlitz–Hayes) |
| 3 | excursion algebra (Lean) | Lafforgue's relations (E1)–(E3) as a structure; `ofHom` proves every ρ: Γ → Ĝ gives excursion data; Hecke = excursion at (Frob, 1); Procesi identity proved over every commutative semiring (kernel cross-checks on GL₂(𝔽₂), GL₂(𝔽₃)); mod-3 parameter of 37a1 at Frob_p vs Brandt/point-count a_p; images of ρ̄₃ (37a1: GL₂(𝔽₃)) and ρ̄₂ (all 15 curves: S₃ or C₂) certified; pseudocharacter ⇒ representation found by kernel search on GL₂(𝔽₃), unique up to conjugacy; mod-5, mod-7 images of all 15 curves forced from point counts | the shape "Galois side = commutative algebra of operators on automorphic functions"; the converse proved for GL₁ and, up to "pseudocharacter ⇒ parameter", for GL₂ |
| 3 | Bruhat–Tits tree of PGL₂(𝔽_q((1/t))) | GL₂(𝔽_q[t]) reduction (Serre's half-line computed), Γ₀(𝔫)\𝒯 via ℙ¹(A/𝔫), cuspidal harmonic cochains, Hecke operators T_𝔭; elliptic curves over 𝔽₂(t) with a_𝔭 by point counts and L(E,T) by Euler product | Gekeler's genus, Drinfeld's Ramanujan bound, Drinfeld's dictionary for GL₂: the level-t³ and level-t⁴ eigenforms over 𝔽₂(t) are y² + txy = x³ + x and y² + txy + t²y = x³ + x + t³ + t² + t |

**Lean 4 in the oracle loop** (`lean/`): core Lean, no Mathlib, no `native_decide`,
no `sorry`.  Lean independently recomputes the arithmetic side (reduced forms and
class numbers, Hurwitz numbers, Eichler–Selberg at level 1, τ(n) from Δ, Eichler's
Brandt trace formula, Φ_N, Z(E, T), the Carlitz module) and the kernel certifies by
`decide` the identities on data exported from Python (`tools/export_lean_data.py`
→ `lean/LanglandsOracles/Data.lean`): Brandt row sums, commutation, Aut-weighted
symmetry, 12·tr B(n) = Eichler's formula for n ∈ {1, ℓ, ℓ², ℓℓ'}, and the
branch-1 L-series vanishing in ℤ[ζ_N] versus Z(E, T), and the level-N Eichler–Selberg
formula against modular-symbol traces.  `pytest` runs `lake build`
as a gate that fails, never skips, when Lean is missing.

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
  velu.py               B(ℓ) for odd ℓ by Vélu: scalar-Frobenius twist, division polynomials, x-only kernels
  ec.py                 y² = x³ + ax + b: group law, enumeration, structure with basis, Frobenius
  newforms.py           Cremona models of prime conductor ≤ 101; a_ℓ by point count
  modular_symbols.py    Manin symbols for Gamma_0(N), weight 2 and weight k: relations, cusps, boundary, Hecke operators
  cyclotomic.py         ℤ[ℤ/N] → ℤ[ζ_N] zero test via Φ_N
  laurent.py            Laurent series; local expansions at every point incl. O; tame symbols
  gl1.py                branch 1: Lang fibers, characters, closed points, L(χ,T), Abel, Weil reciprocity
  ramified_cft.py       branch 1, ramified: generalized Jacobian with modulus 2P_0, ray class characters, L_m(chi, T)
  abelian.py            invariant-factor decomposition of a small finite abelian group (recursive, no complement search)
  carlitz.py            branch 3: Carlitz module, Fermat–Carlitz, reciprocity, annihilators
  local_field.py        F_q((1/t)) as exact Laurent polynomials with truncated division
  bruhat_tits.py        branch 3: tree, reduction, Gamma_0(n)\T, harmonic cochains, Hecke operators
  ec_function_field.py  elliptic curves over F_q(t): reduction types, a_p by point count, L(E,T)
  excursion.py          third act: GL_2 pseudocharacter identity, mod-ell excursion checks, finite excursion data
  mod2_image.py         image of rho_2 exactly (S_3 / C_2) from the 2-division cubic; Frobenius witnesses
  pseudochar.py         pseudocharacters of finite groups; search for a representation with given trace
  mod_ell_image.py      image of rho_ell forced from point counts (rigorous subgroup recursion; ell = 5, 7)
  tate.py               Tate's algorithm over an exact DVR (Z_(p), F_p[t]_(pi), oo): Kodaira type, conductor exponent, Tamagawa
  galois_rep.py         rho_ell(Frob_p) on E[ell] as a matrix over the splitting field; Weil pairing by Miller (biextension commutator)
tests/                  one file per branch + the Lean gate; all exact, no floating point
tools/export_lean_data.py  Python → Lean data bridge (deterministic; checked by the gate)
lean/                   lake project LanglandsOracles: oracles + kernel-checked certificates
docs/dossier.md         results ledger
```

## Run

```
pip install -e '.[test]'
curl -sSf https://raw.githubusercontent.com/leanprover/elan/master/elan-init.sh | sh -s -- -y   # Lean gate
pytest                      # all branches + Lean gate, 597 tests (~40 s with a warm lake cache; first Lean build ~2 min)
pytest tests/test_branch2_trace_formula.py
pytest tests/test_branch1_gl1.py
pytest tests/test_branch3_carlitz.py
```

## Boundaries

- B(2), B(3) come from the hard-coded Φ₂, Φ₃; B(ℓ) for odd ℓ comes from Vélu and
  agrees with Φ₃ at ℓ = 3 for every p tested (an independent check of Φ₃).  JL is
  checked at ℓ ∈ {2, 3, 5, 7} against point counts for levels ≤ 37 and at ℓ = 2, 3
  for levels ≤ 101; the class-number side is checked against point counts at
  ℓ ≤ 31 for the levels 11, 17, 19, 37 where S₂(Γ₀(p)) is spanned by rational newforms.
- Lean certifies *identities on exported data*, recomputes the class-number
  side itself, and (since `Isogeny.lean`) recomputes the supersingular isogeny
  graphs at ℓ = 2, 3 for p ≤ 37 from 𝔽_{p²} arithmetic and Φ₂, Φ₃; point counts
  beyond 37a1 and the Vélu graphs at ℓ ≥ 5 stay in Python.  Certificates use
  `decide` / `decide +kernel` only.
- The identification "eigenvalue of B(ℓ) = a_ℓ of a newform" is *checked*; the
  identification "newform ↔ Cremona curve" is imported (modularity).
- L(χ, T) is computed as an Euler product to order 4 (p = 5) or 3 (p = 7); its
  vanishing is verified in ℤ[ζ_N] (not termwise, which fails), and its prediction
  dim H¹(Ē, L_χ) = 2g − 2 = 0 is the imported cohomological statement.
- The Ramanujan check is exact root isolation of the Hecke polynomial; the
  Apollonian λ₂ universality lives in a different regime (Selberg / Kim–Sarnak θ₇
  for congruence quotients of hyperbolic space), see the dossier.
- The tree side imports two elementary facts as the *full* stabilisers of v_n
  (Aut(𝒪 ⊕ 𝒪(n))) and checks everything else.  Conductors of the Drinfeld curves,
  wild places included, come from Tate's algorithm (`tate.py`, validated over ℤ_(p)
  on Cremona curves) and equal the levels found on the tree.
- The excursion formalisation proves the Galois-to-excursion direction, the Hecke
  identification, Lafforgue's converse for GL₁ (any excursion datum satisfying
  (E0)–(E3) yields a character, `gl1_character`), and the first step of the converse
  for GL₂ (any excursion datum yields a 2-dimensional pseudocharacter,
  `gl2_pseudocharacter`, instantiated on GL₂(R) for every commutative semiring R
  via the Procesi identity proved in `M2.procesi`); the remaining step,
  pseudocharacter ⇒ parameter, is imported, and the
  finite instances certify the mod-ℓ parameters at Frobenius elements (as matrices up to
  conjugacy, with trace a_p and determinant p), not the ℓ-adic parameter itself.
