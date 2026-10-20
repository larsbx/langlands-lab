# Roadmap: from instances of known theorems to proofs of conjectural statements

Status: a plan. Nothing below is started unless it is marked done. Each stage names what would
become PROVED, what stays IMPORTED, and the Lean theorem or test that would mark it complete.
The [dossier](dossier.md) remains the ledger of what is actually established.

## What "proving theorems from the conjectures" can mean here

The lab cannot prove the Langlands conjectures in general, and no stage below claims to. It
works with explicit objects, finite coefficients and exact arithmetic, so its proofs are about
specific curves, specific forms, or algebraic structures with finite data. Within those limits,
three kinds of progress are possible. They are listed from closest to farthest from what
exists today.

1. **Closing a proved chain.** Some steps of a known proof are already formalized here. The
   remaining steps can be formalized too, so that the statement rests on fewer imported
   theorems. The GL₂ excursion chain is the main example.
2. **Proving a conjectural statement for one object.** Some theorems turn a finite computation
   into a proof that a specific object satisfies the conjecture. The model is the Faltings–Serre
   method, which proves that two Galois representations are isomorphic from finitely many trace
   comparisons. Each certificate is a theorem about that object, even where the general
   conjecture is open.
3. **Conditional theorems.** A conjecture can be stated as an explicit hypothesis in Lean and
   its consequences proved. The logical dependence then becomes exact, and when the conjecture
   is proved, the consequence follows. The lab already does this in one place: the mod-ℓ image
   theorems take the Eichler–Shimura relation as a hypothesis.

## Where the lab stands

- **Proved in Lean.** The excursion relations imply a character for GL₁ (`gl1_character`) and a
  2-dimensional pseudocharacter for GL₂ over every commutative semiring
  (`gl2_ring_pseudocharacter`). A 2-dimensional pseudocharacter is the trace of an explicit
  representation in the split, absolutely irreducible case, for every group (`pseudochar_rep`).
  Composed for GL₂(ℤ/n), these give excursion data ⇒ representation (`excursion_rep_Zmod`).
  Satake for PGL₂ holds for every q, from two inputs computed on the tree.
- **Certified in the kernel.** The mod-ℓ Galois images of the lab's 15 elliptic curves (Cremona's
  11a1 to 101a1): S₃ or C₂ for ℓ = 2, full GL₂(𝔽_ℓ) for every prime ℓ from 7 to 31, and for ℓ = 5
  on 14 curves, with Eichler–Shimura as the one imported step.
- **Computed, both sides.** Trace formulas, Jacquet–Langlands at prime level, geometric class
  field theory for GL₁ on 37a1, and Drinfeld's dictionary for specific curves over 𝔽₂(t) and
  𝔽₃(t).

## Stage 1: close the GL₂ excursion chain with finite coefficients

**Goal theorem.** Let Γ be any group and k a finite field of odd characteristic. Every
2-dimensional trace pseudocharacter T : Γ → k (T(1) = 2, centrality, and the
Frobenius–Procesi identity of `PseudocharRep.lean`) is the trace of a semisimple representation over k, unique
up to conjugacy. Composed with `gl2_pseudocharacter`, every excursion datum for GL₂ with values
in k would then yield such a representation, unique up to conjugacy. This is a proposed
algebraic reconstruction theorem, not an existing Lean result or a
construction of a continuous arithmetic Galois parameter. The goal is to prove it without
importing the reconstruction theorem. Continuity and the geometric origin of the excursion
data are separate obligations.

1. **Uniqueness in the absolutely irreducible case** (`pseudochar_rep_unique`). Any
   representation with trace T is conjugate to the constructed one. Approach: in any such ρ′, the
   image of e = κ(g − μ) is a rank-one idempotent matrix. A vector spanning its image, together
   with ρ′(x₀) applied to a vector of the complementary line, gives a basis in which ρ′ has the
   constructed entries.
2. **The reducible case** (`pseudochar_rep_reducible`). If the pairing B vanishes identically,
   the (1,1) entry identity `entry_a` says a(xy) = a(x)a(y). So a and d = T − a are characters,
   and the semisimple representation is diag(a, d).
3. **Distinct eigenvalues only over the quadratic extension.** Suppose no g has distinct
   eigenvalues in k, but some g has distinct roots of X² − T(g)X + D(g) in k′ = k[X]/(that
   polynomial), the field with |k|² elements. Separate the absolutely irreducible unit-pairing
   case from the zero-pairing case over k′.
   The former uses the split construction; the latter produces a sum of two characters,
   possibly exchanged by Frobenius, which need not split over k. Descend the resulting
   semisimple representation and prove uniqueness over k. Trace values in k alone are not
   a descent proof for an arbitrary representation. Finite-field Schur-index arguments
   motivate this step; they must themselves be proved here or labelled IMPORTED.
4. **Every element has a repeated eigenvalue, even over k̄.** Then T(g)² = 4D(g) for all g.
   Show that χ = T/2 is multiplicative, so the semisimple representation is χ ⊕ χ.

The cases are exhaustive. Either some g has distinct eigenvalues in k, which is handled by
`pseudochar_rep` and item 2; or only over k′, which is item 3; or over neither, which is item 4.
This partitions the eigenvalue possibilities, not all proof obligations. Prove that the
nonzero pairing yields the required unit witness over a field, and prove semisimple uniqueness
in the reducible, descended and repeated-root cases separately. Item 1 covers only absolute
irreducibility; nonsemisimple extensions can share a trace without being conjugate.

**Stays IMPORTED.** V. Lafforgue's construction of the excursion data themselves, from the
cohomology of moduli spaces of shtukas. Formalizing that is far outside this lab.
**Prerequisites.** `PseudocharRep.lean` and `RingNorm.lean` supply the split construction,
not finite-field descent, semisimplicity or general uniqueness. Those require new definitions
and proofs. `excursion_rep_Zmod` currently composes the construction for ℤ/n; extension to
arbitrary finite coefficient fields also needs a formal composition theorem.

## Stage 2: prove modularity of specific curves by the Faltings–Serre method

**Goal.** For a specific elliptic curve E over ℚ and a newform f computed in the lab, prove
that their 2-adic Galois representations have isomorphic semisimplifications, so E is modular,
from finitely many trace comparisons.

**Criteria to be used (IMPORTED).** Choose and state an exact Livné or Faltings–Serre
criterion before generating a certificate. There is no general rule that equal residual
semisimplifications and an arbitrary finite list of matching traces suffice. The two continuous
2-adic representations need a specified coefficient field and stable lattices, controlled
ramification outside S (including 2), and matching determinant characters. The applicable
residual and test-set hypotheses must also be established.

- **C₂ curves.** 17a1, 73a1 and 89b1 have certified curve-side image C₂ (§3.8), hence trivial
  residual semisimplification. This suggests Livné's even-trace criterion; it does not yet
  verify that criterion on the form side. Establish residual trace/determinant conditions
  on both sides and a non-cubic test set in the elementary 2-extension unramified outside S.
- **S₃ curves.** The other twelve have curve-side image S₃. Establish isomorphism of the
  two residual representations, not just equality of their abstract image groups. A
  Faltings–Serre comparison then needs the relevant finite deviation extensions and test
  primes detecting them, with completeness justified from the ramification bounds.

**What the lab already supplies.** Curve-side residual certificates, exact point counts,
and Brandt/modular-symbol computations. It does not yet supply the complete comparison
extensions, a sufficient test set, or the form-side residual identification.

**Steps.**

1. Identify and certify the actual normalized weight-2 eigenform (including its level,
   character and coefficient field). Import the existence of its 2-adic Galois representation,
   its Frobenius/Hecke compatibility and ramification properties; this is not the modularity
   theorem for E and must not assume the desired curve–form match.
2. Establish matching determinants, ramification bounds and the chosen criterion's residual
   hypotheses; construct the auxiliary extensions and certify the test-set sufficiency.
3. Compute a_p(E) by exact point counts and a_p(f) independently on that test set. A finite
   kernel equality check supplies this premise, not the global comparison theorem.
4. Record one certificate per curve as finite checked data with the global conclusion
   conditional on the named IMPORTED criterion and form-side Galois construction. State
   separately any bad-place compatibility needed for an equality of complete L-functions.

For the criterion hypotheses and extension computations, see Dieulefait–Guerberoff–Pacetti,
[§§3–4](https://www.famaf.unc.edu.ar/~apacetti/papers/Mod.pdf). Its algorithms are for imaginary
quadratic fields; a ℚ implementation must state its own applicable specialization.

**Honest scope.** Modularity of these curves is already a theorem (Wiles; Taylor–Wiles;
Breuil, Conrad, Diamond and Taylor). The proposed certificates avoid invoking that theorem
for E, but still depend on imported Galois constructions and comparison criteria. They are
not self-contained Lean proofs of modularity.

**Toward open cases.** The same method has proved conjectural statements for specific objects
where no general theorem applied. Examples are modularity of particular elliptic curves over
imaginary quadratic fields (Dieulefait, Guerberoff and Pacetti) and paramodularity of particular
abelian surfaces (Brumer, Pacetti, Poor, Tornaría, Voight and Yasaki). Following them needs a new
automorphic oracle: Bianchi modular forms over ℚ(i), or Siegel paramodular forms of degree 2.
Each is a substantial project and is listed here as the horizon of Stage 2, not as a near-term
step.

## Stage 3: prove instances of Drinfeld's dictionary from finitely many places

Over 𝔽_q(t) the correspondence for GL₂ is a theorem (Drinfeld). The goal here is instance
proofs: that a given elliptic curve over 𝔽_q(t) corresponds to a given eigenform on the tree,
checked at finitely many places rather than all.

- **Mechanism.** Strong multiplicity one, with an effective bound in terms of the conductor,
  can reduce a comparison of two established automorphic representations to finitely many
  places. A curve is not itself an automorphic representation: either import Drinfeld to
  attach one, or state a separate effective Galois comparison criterion. No such bound is
  currently implemented here. Specify its hypotheses and certify conductors, local factors
  and test-set sufficiency before interpreting a finite match globally. The bound and degree formula for the
  L-functions (Grothendieck–Ogg–Shafarevich) stay IMPORTED. The proposed work would compute that bound for
  the curves in §3.4 of the dossier and check the a_𝔭 below it in the kernel.
- **Satake inputs as theorems.** This is already an open item: prove the walk model of the tree
  seen from an end, and the relation A₁A_n = A_{n+1} + qA_{n−1}, for the abstract (q+1)-regular
  tree. Satake then holds with no computed inputs.

## Stage 4: conditional theorems, with conjectures as explicit Lean hypotheses

The mod-ℓ image theorems already show the pattern: the Frobenius trace and determinant
equalities enter as hypotheses, and the image is the conclusion. This stage makes the pattern
systematic.

1. **Congruences from Sturm's bound.** Sturm's theorem (IMPORTED) says two modular forms of
   given weight and level that agree mod ℓ up to an explicit bound agree mod ℓ in every
   coefficient. With it, a finite kernel check proves a congruence between two forms; it does
   not prove modularity of a residual Galois representation.
   An instance of Serre's theorem requires a continuous, odd, absolutely irreducible residual
   representation, the predicted weight/level, a form-side Galois representation and a
   justified identification with it. Sturm alone does not supply that identification.
2. **A hypothesis structure for a Galois–automorphic match.** Define a Lean structure stating
   that a_p(E) equals the Hecke eigenvalue λ_p(f) for every good prime p. Prove its consequences
   for specific E and f: the Hecke recursions for a_{p^k}, the mod-ℓ images, and congruences
   between curves. When the matching is proved for an instance (Stage 2), the consequences
   follow without the match hypothesis, but retain all imported dependencies of Stage 2.

**Excluded.** Analytic statements such as Sato–Tate equidistribution, non-vanishing of
L-functions, and zero statistics. The lab works in exact arithmetic without analysis.

## Order of work

| stage | deliverable | becomes PROVED or KERNEL | stays IMPORTED | prerequisite |
|---|---|---|---|---|
| 1.1–1.2 | uniqueness and the reducible case | `pseudochar_rep_unique`, `pseudochar_rep_reducible` | none if proved internally | split construction; uniqueness definitions |
| 1.3–1.4 | finite fields, all cases | the goal theorem of Stage 1 | none if descent is proved internally | 1.1–1.2; descent and all-case uniqueness |
| 4.1 | Sturm congruences | per-pair congruence certificates | Sturm's theorem | modular-symbol coefficients |
| 2.1–2.4 | modularity of the 15 curves by Faltings–Serre | one certificate per curve | Livné / Faltings–Serre; form-side Galois construction | residual identification, ramification and test-set sufficiency |
| 3 | Drinfeld instances from finitely many places | per-curve certificates; Satake inputs | effective comparison, GOS; Drinfeld if used | §3.4 data and justified bound |
| 4.2 | match hypothesis and its consequences | conditional theorems per curve | the match, until Stage 2 supplies it | 2.4 |
| 2 horizon | open cases over ℚ(i) or in genus 2 | instance proofs of conjectural statements | the method's criteria | a new automorphic oracle |

Stage 1 comes first as algebraic formalization; its descent and uniqueness work remains
proposed. The Stage 2 horizon requires new automorphic computations and an applicable
comparison theorem. Whether a selected object lies outside existing general modularity
theorems must be checked at that time; this roadmap makes no claim of novelty.

## Discipline for every stage

- Each result lands in the dossier labelled COMPUTED, PROVED or IMPORTED, with every imported
  theorem named.
- Instance proofs name the exact object. None is described as proving "the conjecture".
- The axiom audit still allows only `propext` and `Quot.sound`, and the Lean gate still fails,
  never skips.
