# langlands-lab

A laboratory for the Langlands program in which every claim is either computed exactly or
checked by a proof assistant, and the repository says which.

## The Langlands program in one paragraph

The Langlands program predicts a dictionary between two worlds that look unrelated. On one side
are **automorphic objects**: modular forms, and more generally functions on symmetric spaces,
together with the Hecke operators that act on them. On the other side are **Galois
representations**: the ways the symmetries of the algebraic numbers act on finite-dimensional
vector spaces, for example on the torsion points of an elliptic curve. The dictionary should
match the eigenvalues of Hecke operators with the traces of Frobenius elements, so that
counting points on a curve modulo p and computing a modular form produce the same numbers.
Parts of this are theorems: class field theory (the case GL₁), modularity of elliptic curves
over ℚ, and, over function fields such as 𝔽_q(t), Drinfeld's theorem for GL₂, L. Lafforgue's
for GL_n and V. Lafforgue's construction of Langlands parameters for every reductive group.
Most of the program is still conjecture.

## What this lab does

The proofs of the known cases are long chains of deep theory, and it is hard to see the
dictionary itself at work. This lab makes it visible and checkable, one small instance at a
time.

- **Everything is exact.** Python computes both sides of each correspondence with integers,
  finite fields and exact polynomials, never floating point. When the two sides agree, the
  test that checks it names the theorem the agreement instantiates. A match is evidence only
  for that theorem.
- **Lean checks what it can.** A Lean 4 project (core Lean only: no Mathlib, no
  `native_decide`, no `sorry`) recomputes parts of the arithmetic independently and proves
  structural theorems. An axiom audit runs on every build: nothing may depend on more than
  `propext` and `Quot.sound`.
- **Assumptions are written down.** Every result in the [dossier](docs/dossier.md) is
  labelled COMPUTED, PROVED or IMPORTED. A deep theorem the lab relies on, such as
  modularity or the Eichler–Shimura relation, is stated as imported, never presented as checked.

## Three entry points

The lab enters the dictionary at three places, worked in the order 2 → 1 → 3: from the most
computational to the closest to current research.

**Branch 2: trace formulas and Jacquet–Langlands.** Supersingular elliptic curves modulo a
prime p form a finite set, and the ℓ-isogenies between them form a graph. Its adjacency
matrices, the Brandt matrices, are Hecke operators on a finite space. The lab computes them,
checks Eichler's trace formula (traces of Hecke operators equal sums of class numbers), and
checks that their eigenvalues are the point counts of elliptic curves, as Jacquet–Langlands and
Eichler–Shimura predict. Modular symbols give a second, independent automorphic computation of
the same numbers. This is the simplest place where the "automorphic = arithmetic" equality can
be watched as integers.

**Branch 1: geometric class field theory for GL₁.** On a curve over a finite field, here the
elliptic curve 37a1 reduced modulo 5 and 7, characters of the class group should correspond to
rank-one local systems, the simplest objects of geometric Langlands. The lab builds both from
the curve's Jacobian, checks Weil reciprocity and the vanishing of the twisted L-functions the
theory predicts, treats a ramified case through a generalized Jacobian, and studies the Poincaré
biextension, whose commutator is the Weil pairing.

**Branch 3: function fields and V. Lafforgue's construction.** Over 𝔽_q(t) the program is a
theorem for GL₂, and the lab follows it concretely. It covers the Carlitz module (class field
theory for 𝔽_p[t]), the Bruhat–Tits tree, and Drinfeld modular forms matched with elliptic
curves over 𝔽₂(t). It proves the Satake isomorphism for PGL₂, which identifies the local Hecke
algebra with representations of the dual group. Its last act formalizes V. Lafforgue's
excursion operators, the route from automorphic data to a Galois parameter.

## How this advances the Langlands program

The lab proves no new cases of the Langlands conjectures, and every theorem in it is already
known. What it adds is a different kind of access to them: instances one can run, inspect and
trust, plus a growing formal account of the steps that connect the two sides.

- **The dictionary as numbers.** Each correspondence is executed on explicit examples, and
  both sides are computed independently. When a prediction holds, the lab shows exactly which
  integers agree. When a naive version fails, the lab records that too: for example, an
  L-function vanishes in ℤ[ζ_N] but not term by term.
- **A machine-checked path from automorphic data to Galois parameters.** V. Lafforgue's
  construction runs in three steps: excursion data, then a pseudocharacter, then a
  representation. The lab proves in Lean that excursion data satisfying his relations give a
  character in the case GL₁, and a 2-dimensional pseudocharacter for GL₂ over every
  commutative semiring. It also proves that a 2-dimensional pseudocharacter is the trace of an
  explicit representation built from it alone. That last step, Rouquier's construction, holds
  for every group and every commutative ring with 2 invertible, whenever some element has
  distinct eigenvalues and the pseudocharacter is absolutely irreducible. Composed for GL₂(ℤ/n),
  these give a proved chain from excursion data to a representation in that case.
- **Galois images certified from point counts.** For the lab's 15 elliptic curves of prime
  conductor at most 101 (Cremona's 11a1 to 101a1), the Lean kernel certifies that the mod-ℓ
  Galois image is the whole of GL₂(𝔽_ℓ) for every prime ℓ from 7 to 31, and for ℓ = 5 on 14 of
  them. The only
  input is point counts modulo primes; Eichler–Shimura is the one imported step. Generation of
  GL₂(𝔽_ℓ), matrix inverses and conjugacy classes are proved, not enumerated, so the kernel
  checks only small certificates.
- **Formalization infrastructure.** Building this under a strict axiom audit required tools
  core Lean lacks, among them a ring normalizer whose soundness is itself a checked theorem.
  These are reusable for further formal work on the program.

The [dossier](docs/dossier.md) records every result with its status, the exact scope of each
certificate, and, in its last section, the open items and next steps. Among them: the reducible
case of pseudocharacter ⇒ representation, uniqueness up to conjugacy in general, and proving the
inputs to Satake for the abstract tree rather than computing them.

## How Python and Lean divide the work

Python under `kernel/langlands/` is the canonical executable: it computes, and its tests decide
acceptance. Lean under `proof/langlands/` holds claim state. It recomputes the arithmetic side
independently: reduced forms and class numbers, Hurwitz numbers, Eichler–Selberg at level 1,
τ(n) from Δ, Eichler's Brandt trace formula, Φ_N, Z(E, T) and the Carlitz module. It also
certifies, with `decide` or `decide +kernel`, identities on data exported from Python by
`tools/export_lean_data.py` into `proof/langlands/LanglandsOracles/Data.lean`, plus one module
per ℓ, `DataModLℓ.lean`. Among these are Brandt row sums, commutation and Aut-weighted symmetry,
12·tr B(n) against Eichler's formula, the branch-1 L-series vanishing, and the level-N
Eichler–Selberg formula against modular-symbol traces. `pytest` runs the Lean build as a gate
that fails, never skips, when Lean is missing.

## Run

```
pip install -e '.[test]'
curl -sSf https://raw.githubusercontent.com/leanprover/elan/master/elan-init.sh | sh -s -- -y   # Lean gate
pytest                      # all branches + Lean gate, 658 tests (~40 s with a warm lake cache; first Lean build ~7 min, 4 cores)
pytest tests/test_branch2_trace_formula.py
pytest tests/test_branch1_gl1.py
pytest tests/test_branch3_carlitz.py
```

Contributors: `AGENTS.md` and `CONTRIBUTING.md` list the gates to run before a pull request and
the standing rules (exact arithmetic only, no Mathlib, and the exported data is never edited by
hand).

## Detailed inventory

What each branch computes, and which theorem a match instantiates:

| branch | object | what is computed | what the match instantiates |
|---|---|---|---|
| 2 | supersingular ℓ-isogeny graphs mod p | Brandt matrices B(2), B(3) from Φ₂, Φ₃ over 𝔽_{p²}, and B(ℓ) for any odd ℓ by Vélu on a scalar-Frobenius model (no modular polynomial); traces of B(n), n ≤ 49; Hecke polynomials; exact Sturm root counts | Eichler's trace formula (spectral = class numbers), Jacquet–Langlands + Eichler–Shimura (eigenvalues = point counts at ℓ = 2, 3, 5, 7), Ramanujan–Petersson |
| 2 | modular symbols for Γ₀(N) | Manin symbols, boundary map, Hecke via Heilbronn matrices; cuspidal Hecke polynomials for N ≤ 60 | Jacquet–Langlands between two automorphic computations (= Brandt² at prime level), modularity at composite level |
| 2 | S_k(SL₂(ℤ)) and S₂(Γ₀(N)) | Zagier's form of Eichler–Selberg from Hurwitz class numbers; τ(n) from Δ's q-expansion; the level-N formula (class numbers, local factors) against modular-symbol traces for N ≤ 40 at weight 2 and N ≤ 12 at weights 4 to 12 | the simplest fully explicit Arthur–Selberg instances, geometric side = class numbers |
| 1 | E = 37a1 mod p, p ∈ {5, 7} | Lang-isogeny fibers; χ∘N on Pic⁰(𝔽_{pᵏ}); Abel sums of lines; tame symbols from Laurent expansions; L(χ, T) as an Euler product in ℤ[ζ][[T]] | unramified geometric CFT for GL₁: L_χ ↔ character sheaf A_χ, L(E, L_χ) = 1 ≠ Z(E, T), Weil reciprocity with the Deligne sign |
| 1 | E = 37a1 mod p, modulus 2P₀ | generalized Jacobian J_𝔪(𝔽_p) as pairs with its 2-cocycle; ray class characters; L_𝔪(χ, T) as Euler products | ramified geometric CFT for GL₁ (Rosenlicht–Serre): conductor-2 Artin–Schreier characters have L of degree 2 satisfying the Riemann hypothesis |
| 1 | Poincaré biextension of 37a1 over ℚ (minimal model) | monic Miller frame (t = x/y at O), both partial laws as factor systems, exchange ratio on all nine ord_O strata; the strict second law β₂ = (−1)^{u(a)δu(c)}·g_{c₁,c₂}(a) | Law B = Deligne tame-symbol sign, proved stratum-uniformly (sign algebra in Lean for any group); exchange holds strictly for the corrected β₂; over 𝔽_q the m-fold commutator is the Weil pairing on the nose, and E^∨(𝔽_p)[ℓ] parametrises the order-ℓ characters of Pic⁰ (geometric CFT duality); κ_tame and the Miller chain are elliptic-net (EDS) quotients |
| 3 | Carlitz module over 𝔽_p[t] | C_P ≡ x^{|P|} (mod P); Frob_P = C_P on C[M]; splitting degrees = ord of P in (A/ann λ)^× | function-field CFT for GL₁ (Carlitz–Hayes) |
| 3 | excursion algebra (Lean) | Lafforgue's relations (E1)–(E3) as a structure; `ofHom` proves every ρ: Γ → Ĝ gives excursion data; Hecke = excursion at (Frob, 1); Procesi identity proved over every commutative semiring (independent kernel cross-check on GL₂(𝔽₂), structural signed-form proof on GL₂(𝔽₃)); mod-3 parameter of 37a1 at Frob_p vs Brandt/point-count a_p; images certified in the kernel: ρ̄₂ (all 15 curves: S₃ or C₂), ρ̄₃ (37a1), ρ̄₅ (14 curves) and ρ̄₇, ρ̄₁₁, ρ̄₁₃, ρ̄₁₇, ρ̄₁₉, ρ̄₂₃, ρ̄₂₉, ρ̄₃₁ (all 15) full, by word certificates against a fixed generating set; pseudocharacter ⇒ representation found by kernel search on GL₂(𝔽₃), unique up to conjugacy, and constructed from T alone for every group in the split, absolutely irreducible case (Rouquier, `pseudochar_rep`); mod-5, mod-7 images of all 15 curves forced from point counts | the shape "Galois side = commutative algebra of operators on automorphic functions"; the converse proved for GL₁, and for GL₂ when some element has distinct eigenvalues in the coefficients and the pseudocharacter is absolutely irreducible |
| 3 | Satake for PGL₂ (Lean) | 𝒮(A_n) = horocycle profile of the sphere, closed form, twisted W-invariance, Hecke relation ↦ χ₁ = X + qX⁻¹, 𝒮(A_n) = χ_n − χ_{n−2}, q-Clebsch–Gordan, ball = χ_n, surjectivity onto the invariants — all PROVED for every q; the inputs computed on the lattice tree; T(𝔭ⁿ) on Drinfeld eigenforms vs point counts over 𝔽_{qⁿ} | Satake isomorphism H(G, K) ≅ ℤ[q][X^{±1}]^W with Ĝ = SL₂; unramified local L-factor 1/(1 − aY + qY²) |
| 3 | Bruhat–Tits tree of PGL₂(𝔽_q((1/t))) | GL₂(𝔽_q[t]) reduction (Serre's half-line computed), Γ₀(𝔫)\𝒯 via ℙ¹(A/𝔫), cuspidal harmonic cochains, Hecke operators T_𝔭; elliptic curves over 𝔽₂(t) with a_𝔭 by point counts and L(E,T) by Euler product | Gekeler's genus, Drinfeld's Ramanujan bound, Drinfeld's dictionary for GL₂: the level-t³ and level-t⁴ eigenforms over 𝔽₂(t) are y² + txy = x³ + x and y² + txy + t²y = x³ + x + t³ + t² + t |

## Layout

```
ESTATE.toml             estate manifest (audited from a pinned larsbx/estate-governance)
kernel/langlands/
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
  biextension.py        branch 1: Poincaré biextension of 37a1 over Q and F_q: monic Miller functions, both laws, the strict beta_2, Weil pairing as commutator, dual characters, Ward EDS closed forms
  ramified_cft.py       branch 1, ramified: generalized Jacobian with modulus 2P_0, ray class characters, L_m(chi, T)
  abelian.py            invariant-factor decomposition of a small finite abelian group (recursive, no complement search)
  carlitz.py            branch 3: Carlitz module, Fermat–Carlitz, reciprocity, annihilators
  local_field.py        F_q((1/t)) as exact Laurent polynomials with truncated division
  bruhat_tits.py        branch 3: tree, reduction, Gamma_0(n)\T, harmonic cochains, Hecke operators
  ec_function_field.py  elliptic curves over F_q(t): reduction types, a_p by point count, L(E,T)
  satake.py             Satake for PGL_2: horocycle profiles of spheres, Hecke structure constants, T(pi^n) = ball, Frobenius power traces
  excursion.py          third act: GL_2 pseudocharacter identity, mod-ell excursion checks, finite excursion data
  mod2_image.py         image of rho_2 exactly (S_3 / C_2) from the 2-division cubic; Frobenius witnesses
  pseudochar.py         pseudocharacters: search for a representation with given trace; Rouquier's construction from T alone
  mod_ell_image.py      image of rho_ell forced from point counts (rigorous subgroup recursion; ell = 5, 7)
  tate.py               Tate's algorithm over an exact DVR (Z_(p), F_p[t]_(pi), oo): Kodaira type, conductor exponent, Tamagawa
  galois_rep.py         rho_ell(Frob_p) on E[ell] as a matrix over the splitting field; Weil pairing by Miller (biextension commutator)
tests/                  one file per branch + the Lean gate; all exact, no floating point
tools/export_lean_data.py  Python → Lean data bridge (deterministic; checked by the gate)
proof/langlands/        lake project LanglandsOracles: oracles + kernel-checked certificates
docs/dossier.md         results ledger
```

## What is checked and what is assumed

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
  pseudocharacter ⇒ parameter, is proved for every group and every commutative ring with 2
  invertible when some element has distinct eigenvalues in the coefficients and the pairing
  B(x₀, y₀) is a unit (`pseudochar_rep`, composed with excursion data in `excursion_rep_Zmod`);
  the reducible case, extension of scalars and uniqueness in general remain imported, and the
  finite instances certify the mod-ℓ parameters at Frobenius elements (as matrices up to
  conjugacy, with trace a_p and determinant p), not the ℓ-adic parameter itself.
- Satake (`Satake.lean`) is proved for every q from two inputs stated as definitions: the tree seen
  from an end (the up-then-down walk) and the Hecke relation A₁A_n = A_{n+1} + qA_{n−1}; both are
  computed on the lattice tree for small q, not proved for the abstract tree.
