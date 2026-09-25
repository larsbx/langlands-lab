# Dossier: three Langlands entry points, executed

Status vocabulary: **COMPUTED** = both sides produced by exact arithmetic in this
repo and compared; **IMPORTED** = a theorem quoted to interpret a match, not
verified here.  Every COMPUTED line is a pytest assertion.

## Branch 2 — Brandt matrices, trace formulas, Jacquet–Langlands, Ramanujan

### 2.1 Supersingular locus (COMPUTED)
Roots of the Hasse polynomial H_p(λ) = Σ C(m,i)² λ^i in 𝔽_{p²}, pushed to j.
Counts agree with ⌊p/12⌋ + {0,1,1,2}[p mod 12] and with Eichler's mass formula
tr B(1) = (p−1)/12 + ¼(1−(−4/p)) + ⅓(1−(−3/p)) for all p ∈ [11, 73].

### 2.2 Brandt matrices (COMPUTED)
B(ℓ)_{ij} = multiplicity of j_j as a root of Φ_ℓ(j_i, Y) in 𝔽_{p²}[Y].  Checked:
row sums ℓ+1; B(2)B(3) = B(3)B(2); B(ℓ)·diag|Aut E_j| symmetric (dual isogeny).

Example, p = 11 (j = 0, 1728, |Aut| = 6, 4):
```
B(2) = [[0, 3], [2, 1]]      B(3) = [[1, 3], [2, 2]]
```

### 2.2b Brandt matrices by Vélu (COMPUTED; `velu.py`)
For odd ℓ ≠ p: twist each supersingular j to the model over 𝔽_{p²} with
#E = (p ∓ 1)², so Frobenius is the scalar ±p and every ℓ-subgroup is rational;
factor the division polynomial f_ℓ over 𝔽_{p²} into its degree-k Frobenius-orbit
factors (k = ord of ±p mod ℓ up to sign), lift each to 𝔽_{p^{2k}}, group the
x-coordinates into the ℓ+1 subgroups by x-only multiplication, and apply Vélu.
B(3) by Vélu equals B(3) by Φ₃ for all p ≤ 31; B(5), B(7) commute with B(2), B(3).

### 2.3 Eichler's trace formula (COMPUTED, both sides)
Spectral side: tr B(n) for n ∈ {1,2,3,4,6,8,9,12} and, with Vélu, n ∈
{5,7,10,14,15,21,25,35,49}, from adjacency and the Hecke relations
B(ℓ²) = B(ℓ)² − ℓ, B(mn) = B(m)B(n).
Geometric side, class numbers only:

    tr B(n) = [n = □]·(p−1)/12 + Σ_{s² < 4n} Σ_{f: p∤f} h(d)/w(d) · (1 − (d/p)),  d = (s²−4n)/f².

Equal for every p ∈ {11,…,53} and every n above.  Derivation used (IMPORTED for
the *derivation*, but the equality itself is COMPUTED): Deuring's correspondence
between optimal embeddings O_d ↪ End(E_i) and CM lifts; the local condition at
p kills orders with p | f.

Sample traces (p: n → tr):

| p | 1 | 2 | 3 | 4 | 6 | 8 | 9 | 12 |
|---|---|---|---|---|---|---|---|---|
| 11 | 2 | 1 | 3 | 9 | 14 | 15 | 11 | 26 |
| 37 | 3 | 1 | 2 | 7 | 18 | 15 | 17 | 20 |
| 53 | 5 | 1 | 4 | 7 | 12 | 15 | 21 | 26 |

### 2.4 Eichler–Selberg at level 1 (COMPUTED, both sides)
Zagier's form, tr T_n | S_k = −½ Σ_{t²≤4n} P_k(t,n) H(4n−t²) − ½ Σ_{dd'=n} min(d,d')^{k−1},
reproduces τ(n) for n ≤ 30 (τ from Δ = q∏(1−qⁿ)²⁴, independently), dim S_k for
k ≤ 36, and a₂ = 216, −528, 456 for k = 16, 18, 20, tr T₂ = 1080 for k = 24.

### 2.5 Jacquet–Langlands as an integer oracle (COMPUTED; modularity IMPORTED)
For each rational newform of prime level p ≤ 101 (Cremona model, discriminant
checked to be ±p^k), a₂, a₃ are point counts over 𝔽₂, 𝔽₃.  A common eigenvector
of B(2), B(3) with exactly these eigenvalues exists and the joint eigenspace has
dimension = number of such forms (multiplicity one).  For levels ≤ 37 the joint
eigenvector of B(2), B(3), B(5), B(7) with eigenvalues a₂, a₃, a₅, a₇ exists too.
Hecke polynomials:

| p | H₂(x) |
|---|---|
| 23 | x² + x − 1 |
| 29 | x² + 2x − 1 |
| 31 | x² − x − 1 |
| 37 | x(x + 2)  ← 37a (a₂ = −2), 37b (a₂ = 0) |
| 43 | (x + 2)(x² − 2) |
| 47 | x⁴ − x³ − 5x² + 5x − 1 |

For p ∈ {11, 17, 19, 37} (all forms rational) the class-number side gives
tr B(ℓ) − (ℓ+1) = Σ_E a_ℓ(E) for ℓ ≤ 31 — Eichler's formula against point counts at
primes where no Φ_ℓ is available.

### 2.5b Modular symbols: an independent automorphic oracle (COMPUTED)
`modular_symbols.py`: Manin symbols (c : d) ∈ ℙ¹(ℤ/N) with the S- and T-relations,
H₁(X₀(N), cusps; ℚ) as an exact quotient, the boundary map through Cremona's cusp
equivalence criterion, and Hecke operators through Merel's Heilbronn matrices.  For every
N ≤ 60: dim = 2g + c − 1 and the cuspidal part has dimension 2g (genus and cusp formulas
IMPORTED as the reference).  For prime p ≤ 53 and ℓ ∈ {2,3,5,7}: the characteristic
polynomial of T_ℓ on cuspidal modular symbols equals the square of the Brandt Hecke
polynomial — Jacquet–Langlands checked between two independent automorphic
computations, with no elliptic curve involved.  At the composite genus-one levels
14, 15, 20, 27, 32, 36 the point counts of the curves used in the Tate tests are the
T_p-eigenvalues for p ≤ 13 (modularity at composite level).

### 2.6 Ramanujan–Petersson (COMPUTED; Deligne IMPORTED as the reason)
For p ≤ 71 and ℓ ∈ {2,3}, and p ≤ 37 and ℓ ∈ {5,7}: the Hecke polynomial is real-rooted and no root has
λ² > 4ℓ (Sturm counts on H and on the resultant G(y) = ∏(y − λᵢ²)).  So each
graph is Ramanujan.  The Apollonian λ₂ measurements are *not* this theorem:
there the spectral gap for congruence quotients comes from Selberg's 3/16 and
Kim–Sarnak θ₇ = 7/64 bounds on Maass forms, which are weaker than RP for
holomorphic weight-2 forms (Deligne = Weil for the Jacobian).  RP is the
statement that Frobenius traces are as small as the Weil bound allows, so a
"floor via Frobenius trace" cannot hide below 2√ℓ.

## Branch 1 — GL₁ geometric CFT on E = 37a1 (y² = x³ − 1296x + 11664) mod p

a_p(37a1) by point count: p ↦ −2, −1, −5, −2, 0, 0, 2 for p = 5, 7, 11, 13, 17, 19, 23.
E(𝔽₅) ≅ ℤ/8, E(𝔽₇) ≅ ℤ/9 (cyclic in both cases).

### 1.1 Galois side: the Lang isogeny (COMPUTED)
L(P) = Frob(P) − P.  Among E(𝔽_{pⁿ}), the fiber over x ∈ E(𝔽_p) is nonempty iff
n·x = O, has exactly #E(𝔽_p) points, and Frob acts on it as translation by x
(n = 2, 3, 4).  On the χ-isotypic line of ℚ̄_ℓ[fiber], Frob acts by χ(x): checked
for all 8 (resp. 9) characters and all fibers.  This is tr(Frob_x | L_χ) = χ(x).

### 1.2 Character sheaf traces (COMPUTED)
tr(Frob_{pᵏ} | A_χ) on Pic⁰(𝔽_{pᵏ}) = E(𝔽_{pᵏ}) is χ∘N (N = Frobenius trace to
E(𝔽_p)); it is a character of E(𝔽_{pᵏ}) for k = 2, 3, and restricts to χᵏ on E(𝔽_p).

### 1.3 Descent along Abel–Jacobi (COMPUTED)
For every line y = λx + μ and x = c over 𝔽_p, the zeros (found in 𝔽_{p⁶},
including tangencies, e.g. x − 2 is tangent at the 2-torsion point (2,0) over 𝔽₅)
sum to O in E: χ(div f) = 1, so χ is a character of Pic, i.e. A_χ is multiplicative.

### 1.4 Weil reciprocity with the Deligne sign (COMPUTED)
Tame symbols (f,g)_P = (−1)^{v(f)v(g)} (f^{v(g)}/g^{v(f)})(P) from Laurent
expansions in a uniformizer at every P (u = x − x_P, u = y at 2-torsion,
t = −x/y at O).  For two non-vertical lines, (f,g)_O = (−1)⁹ = −1 and the product
over finite points is −1, total 1.  This sign is the (−1)^{ord·ord} of the
rigidified biextension law.

### 1.5 The L-function (COMPUTED; cohomological prediction IMPORTED)
L(χ, T) = ∏_x (1 − χ(Nx) T^{deg x})⁻¹ in ℤ[ℤ/N][[T]] over closed points to
degree 4 (p = 5: 8, 12, 32, 152 closed points of degree 1..4) and 3 (p = 7).
- χ ≠ 1: every coefficient of T^n, n ≥ 1, is 0 in ℤ[ζ_N] — but not termwise —
  matching dim H¹(Ē, L_χ) = 2g − 2 = 0.
- χ = 1: coefficients 1, 8, 48, 248, 1248 (p = 5) = those of
  Z(E,T) = (1 + 2T + 5T²)/((1−T)(1−5T)); the a_p = −2 here is the Frobenius trace on
  H¹, and it is the same 37a1 eigenvalue Brandt sees at level 37.
The degree twist χ·α^{deg} gives L(χ, αT); nothing new.

## Lean 4 in the oracle loop (`lean/`, core Lean 4.34, no Mathlib)

Status vocabulary extension: **KERNEL** = the statement is a `theorem` closed by
`decide` or `decide +kernel`; the Lean kernel evaluated both sides.  No
`native_decide`, no `sorry`, no axioms beyond Lean's core.

| certificate | statement | side recomputed in Lean |
|---|---|---|
| `class_numbers` | Gauss's table for 23 discriminants | reduced-form enumeration |
| `eichler_selberg_tau` | tr T_n | S₁₂ = τ(n), n ≤ 20, division by 24 exact | Hurwitz numbers, Zagier's formula, Δ's product |
| `eichler_selberg_dims` | dim S_k for k ≤ 26 | same |
| `fermat_carlitz_small` | C_P ≡ x^{|P|} (mod P), 8 cases | Carlitz p-polynomials over 𝔽_p[t] |
| `brandt_certificates` | for p ≤ 37 and ℓ ∈ {2,3,5,7}: row sums ℓ+1, commutation, B·diag(w) symmetric, 12·tr B(n) = Eichler's formula for n ∈ {1, ℓ, ℓ², ℓℓ'} | class numbers, Legendre symbols, Eichler's formula, Hecke relations (data: Python) |
| `lseries_certificates` | 37a1 mod 5, 7: every L(χ,T) coefficient vanishes mod Φ_N for χ ≠ 1 (not termwise); χ = 1 gives Z(E,T) | Φ_N by divisor recursion, polynomial remainder over ℤ, zeta recursion (data: Python) |

The bridge is `tools/export_lean_data.py`; the gate `tests/test_lean_gate.py`
regenerates the data (must be byte-identical), runs `lake build`, and runs
`lean/Audit.lean` (`#print axioms`): every certificate depends on at most `propext`
and `Quot.sound` — no `sorryAx`, no `Lean.ofReduceBool`.

## Branch 3 — Carlitz module, seed of the function-field act

C_t(x) = tx + x^p over A = 𝔽_p[t].  COMPUTED for p ∈ {2,3,5}, deg P ≤ 3:
- Fermat–Carlitz: C_P(x) ≡ x^{p^{deg P}} (mod P) as p-polynomials.
- Reciprocity: for P ∤ M, in 𝔽_P = 𝔽_p(θ), θ a root of P, and the extension of
  degree ord_M(P) that splits C_M: every λ ∈ C[M] satisfies λ^{|P|} = C_P(λ).
- Decomposition: the 𝔽_P-degree of λ is the order of P in (A/ann λ)^× — P splits
  in K(C[M]) exactly as p splits in ℚ(ζ_m).
- C[M] ≅ A/M (|M| distinct roots, a generator exists).

## Branch 3, second act — Bruhat–Tits tree and Drinfeld's dictionary (`bruhat_tits.py`, `ec_function_field.py`)

### 3.1 The tree and Serre's half-line (COMPUTED)
𝒯 = tree of PGL₂(𝔽_q((1/t))) in the chart (k, u), u ∈ K_∞/π^k𝒪_∞: (q+1)-regular,
symmetric adjacency (random vertices, q ∈ {2,3,5}).  GL₂(𝔽_q[t]) acts through the
Iwasawa normal form.  The continued-fraction reduction returns γ ∈ GL₂(A) (polynomial
entries, unit determinant) with γ·v = v_n = [𝒪 ⊕ π^n𝒪]: Serre's quotient
GL₂(A)\𝒯 = v₀ — v₁ — v₂ — ⋯ is exhibited on every vertex tried, not quoted.
Stab(v_n) = {[[a,b],[0,d]] : deg b ≤ n} fixes v_n and identifies all q down-neighbours
of v_n with v_{n−1} (n ≥ 1); GL₂(𝔽_q) is transitive on the neighbours of v₀.
IMPORTED: that these are the *full* stabilisers (Aut(𝒪 ⊕ 𝒪(n)), Weil's dictionary).

### 3.2 Γ₀(𝔫)\𝒯 and cusp forms (COMPUTED; genus formula IMPORTED as the reference)
Γ₀(𝔫)\Γ = ℙ¹(A/𝔫) by the bottom row; quotient vertices over v_n are the
Stab(v_n)-orbits, quotient oriented edges are labelled by reducing the origin.  A
cochain is a function on positive-oriented quotient edges below a truncation depth;
harmonicity is imposed at every quotient vertex through the q+1 tree edges at a
representative.  The nullspace dimension equals Gekeler's genus and the first
Betti number of the quotient core, independently of the depth:

| q | 𝔫 | genus | cusps |
|---|---|---|---|
| 2 | t, t²+t+1 | 0 | 2 |
| 2 | t³+t+1, t³+t²+1 | 2 | 2 |
| 2 | t⁴+t+1 | 4 | 2 |
| 3 | t²+1 | 0 | 2 |
| 3 | t³+2t+1 | 3 | 2 |
| 5 | t³+t+1 | 5 | 2 |
| 2 | t³ | 1 | 4 |
| 2 | t⁴ | 3 | – |
| 3 | t³ | 2 | – |

### 3.3 Hecke operators (COMPUTED; Drinfeld's Ramanujan bound IMPORTED as the reason)
T_𝔭 from the q^{deg 𝔭}+1 representatives [[1,b],[0,𝔭]], [[𝔭,0],[0,1]]; T_𝔭 preserves the
cusp forms (asserted), the T_𝔭 commute, and every characteristic polynomial is
real-rooted with |λ| ≤ 2q^{deg 𝔭/2} (exact Sturm counts).
- 𝔫 = t³+t+1 over 𝔽₂: T_t: x²+2x−1, T_{t+1}: x²−2, T_{t²+t+1}: x²−2x−1 — irreducible,
  so no rational eigenform; the exhaustive search over a_i of degree ≤ i (2²¹ models)
  finds no elliptic curve of conductor 𝔫∞, consistently.
- 𝔫 = t³+2t+1 over 𝔽₃: T_t = T_{t+1} = T_{t+2} up to conjugacy (𝔫 is invariant under
  t ↦ t+c): x³+x²−4x+1, irreducible.
- 𝔫 = t³ over 𝔽₂: genus 1, eigenvalues a_{t+1} = −1, a_{t²+t+1} = 1, a_{t³+t+1} = 1,
  a_{t³+t²+1} = −3.
- 𝔫 = t⁴ over 𝔽₂: genus 3 = the t³ form twice + one newform with a_{t+1} = 1,
  a_{t²+t+1} = −1, a_{t³+t+1} = 1, a_{t³+t²+1} = 3.

### 3.4 Drinfeld's dictionary executed (COMPUTED; the theorem IMPORTED as the interpretation)
Galois side: elliptic curves over 𝔽₂(t) found by exhaustive search among models with
bad reduction only at t and ∞ and split multiplicative reduction at ∞ (tangent cone
of the node split over the residue field, computed):

| curve | a-invariants | a_𝔭 at t+1, t²+t+1, t³+t+1, t³+t²+1 | L(E,T) | level |
|---|---|---|---|---|
| E_{t³}: y² + txy = x³ + x | (t, 0, 0, 1, 0) | −1, 1, 1, −3 | 1 | t³ |
| E_{t⁴}: y² + txy + t²y = x³ + x + t³+t²+t | (t, 0, t², 1, t³+t²+t) | 1, −1, 1, 3 | 1 + 2T | t⁴ |

The traces are point counts over 𝔽_𝔭 = GF(2, 𝔭); they coincide with the Hecke
eigenvalues above at every 𝔭 ∤ t of degree ≤ 3, and the L-functions (Euler products
over all places of degree ≤ 5, ∞ included) are polynomials of degree deg N − 4
(Grothendieck), with the functional-equation coefficient ±q in the degree-1 case.

**Conductors by Tate's algorithm** (`tate.py`, COMPUTED; Ogg–Saito IMPORTED for f):
Tate's algorithm over an exact DVR in every residue characteristic, validated over
ℤ_(p) on ten Cremona curves (Kodaira types, conductor exponents, Tamagawa numbers,
split/nonsplit consistent with the root numbers of 11a1, 37a1, 37b1, 43a1).  At the
wild place t it gives type III, f = 3 for E_{t³} and type II, f = 4 for E_{t⁴} over 𝔽₂,
and type II, f = 3 for both 𝔽₃ curves; at ∞ split I₈, I₈, I₉, I₉.  So the conductors
are t³∞, t⁴∞, t³∞, t³∞: the Galois-side conductor equals the level found on the tree,
deg Δ_min = 12 in each case, and deg N − 4 = deg L.
KERNEL: `function_field_l_functions` recomputes both Euler products in Lean from the
exported local data.
Over 𝔽₃(t), level t³ has genus 2 with two rational eigensystems; the search (with
deg a₂ = 2, forced by c₄ = a₂² in characteristic 3) finds them:

| curve | a_𝔭 at t+1, t+2, t²+1, t²+t+2, t²+2t+2 | L(E,T) |
|---|---|---|
| y² = x³ + t²x² + tx + 1 | 1, −2, 1, 4, −2 | 1 |
| y² = x³ + t²x² + 2tx + 1 | −2, 1, 1, −2, 4 | 1 |

Each is a joint eigenvector of the five T_𝔭 on the cusp forms; the two are swapped
by t ↦ 2t, as are t+1 and t+2.

## Branch 3, third act — the excursion algebra in Lean (`lean/LanglandsOracles/Excursion*.lean`, `Pseudocharacter.lean`, `excursion.py`)

Status vocabulary: **PROVED** = a Lean theorem with a term-level proof (no `decide`);
**KERNEL** as before.

### 3.5 The excursion relations, abstractly (PROVED, core Lean, no Mathlib)
`Grp`, `Hom`, and `LRInvariant g f` (functions on Ĝ^I invariant under left and right
diagonal multiplication: 𝒪(Ĝ\Ĝ^I/Ĝ)).  `ExcursionData gΓ gĜ k` packages V. Lafforgue's
relations for a character of the excursion algebra with values in k:
- (E1) `functorial`: Θ_J(f^ζ)(γ) = Θ_I(f)(γ∘ζ) for ζ: I → J;
- (E2) `map_mul`, `map_add`: f ↦ Θ_I(f)(γ) is a ring homomorphism;
- (E3) `compose`: Θ_I(f)(γ_iγ'_i) = Θ_{I⊔I⊔I}(f̃)(γ ⊔ γ' ⊔ 1), f̃(x⊔x'⊔x'') = f(x_i x''_i⁻¹ x'_i).

Theorems: `lrInvariant_pullback`, `lrInvariant_tilde` (the constructions stay in
𝒪(Ĝ\Ĝ^I/Ĝ)); `ExcursionData.ofHom ρ` — every homomorphism ρ: Γ → Ĝ gives excursion data
Θ_I(f)(γ) = f(ρ∘γ) satisfying (E1)–(E3) (the Galois-to-excursion direction);
`ofHom_const` — on constant tuples the value is f(1,…,1); `heckeFun`, `lrInvariant_heckeFun`,
and `hecke_eq_character`: the unramified Hecke operator is the excursion operator of
f_V(g₀,g₁) = χ_V(g₀g₁⁻¹) at (Frob_v, 1), with value χ_V(ρ(Frob_v)) on ρ-data;
`excursion_comm`.  IMPORTED (not formalised): Lafforgue's converse, excursion data ⇒
Ĝ-pseudocharacter ⇒ semisimple parameter.

### 3.6 GL₂-pseudocharacters (KERNEL)
`procesi_GL2_F2`, `procesi_GL2_F3`: Σ_{σ∈S₃} sgn(σ) T_σ(g₁,g₂,g₃) = 0 for T = trace on every
triple of GL₂(𝔽₂) (6³) and GL₂(𝔽₃) (48³ = 110 592 triples; ≈ 3 min in the kernel), the
defining relation of a 2-dimensional pseudocharacter.  Python checks the same (`procesi_identity_holds`).

### 3.7 An arithmetic excursion instance: the mod-3 parameter of 37a1 (KERNEL + COMPUTED)
- `brandt_eigenvector_37a1`: the exported v = (−1, 1, 0) on the supersingular locus at p = 37
  satisfies B(ℓ)v = a_ℓ v for ℓ ∈ {2,3,5,7} with (a₂,a₃,a₅,a₇) = (−2,−3,−2,−1) (automorphic
  side: the JL form of 37a1); `brandt_eigenvalues_match_point_counts`: a₅, a₇ agree with
  Lean's own point counts on y² = x³ − 1296x + 11664; `ap_37a1_table` for all good p ≤ 61.
- `mod3_excursion_37a1`: for every good p ≤ 61, [ψ₃ has an 𝔽_p-root] ⇔ [x² − a_p x + p has a
  root ±1 mod 3].  Galois side: ρ̄₃(Frob_p) has an eigenvector in E[3] with eigenvalue ±1 iff
  some 3-torsion point has rational x-coordinate; automorphic side: the Hecke eigenvalue a_p.
  The class function "has eigenvalue ±1" is the excursion evaluation used.
- Python (`test_branch3_excursion.py`): the same equivalence for all 15 Cremona curves and
  all good p < 400, and the mod-2 version: the class of Frob_p in Gal(ℚ(E[2])/ℚ) ⊆ GL₂(𝔽₂) = S₃
  read from the factorisation of the 2-division cubic has trace a_p mod 2 — the mod-2
  Langlands correspondence for these curves, fully explicit.
- `ExcursionData.of_hom` on GL₂(𝔽₂) with (E1)–(E3) checked exhaustively for |I| = 2 on the
  Hecke functions: the finite shadow of the Lean structure.

### 3.8 The mod-ℓ parameter as a computed matrix; the Weil pairing as biextension commutator (COMPUTED + KERNEL)
`galois_rep.py`: E[ℓ] is found over its splitting field 𝔽_{p^k} (division-polynomial roots
and square roots by the generic root finder, no enumeration), a basis is chosen, and
Frob_p is written in it: ρ̄_ℓ(Frob_p) ∈ GL₂(𝔽_ℓ).  For all 15 Cremona curves, all good
p ≤ 31 and ℓ ∈ {2, 3}: tr ≡ a_p and det ≡ p (mod ℓ) — Eichler–Shimura mod ℓ as a matrix
identity — and the splitting degree k equals the order of the matrix.
KERNEL (`frobenius_matrices_mod3_37a1`): the exported matrices for 37a1 at all good p ≤ 61
have trace a_p (Lean's point counts) and determinant p mod 3.

The Weil pairing e_ℓ(P, Q) = f_P(D_Q)/f_Q(D_P) by Miller's algorithm is the commutator
pairing of the Poincaré biextension (the same tame-symbol bookkeeping as §1.4); checked
bilinear, alternating, antisymmetric, of exact order ℓ, and Galois-equivariant
e(Frob P, Frob Q) = e(P, Q)^p, which is det ρ̄_ℓ = cyclotomic character read off the
biextension rather than the matrix.
