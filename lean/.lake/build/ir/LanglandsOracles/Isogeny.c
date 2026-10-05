// Lean compiler output
// Module: LanglandsOracles.Isogeny
// Imports: public import Init public meta import Init public import LanglandsOracles.TraceFormula public import LanglandsOracles.Matrix public import LanglandsOracles.Data
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_IMat_trace_spec__1(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Int_instInhabited;
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_eichlerBrandt12(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqFp2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqFp2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqFp2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqFp2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__0_value;
static const lean_string_object lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__1 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__1_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__1_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__2 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__2_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__2_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__3 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__3_value;
static const lean_string_object lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__4 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__4_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__4_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__5 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__5_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__3_value),((lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__5_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__6 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__6_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__7;
static const lean_string_object lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__8 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__8_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__8_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__9 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__9_value;
static const lean_string_object lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__10 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__10_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__10_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__11 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__11_value;
static const lean_string_object lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__12 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__12_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__13;
static lean_once_cell_t lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__14;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__0_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__15 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__15_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__12_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__16 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__16_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprFp2(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Fp2_nonResidue_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Fp2_nonResidue_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_nonResidue(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_ofNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_ofNat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_ofInt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_ofInt___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_LanglandsOracles_Oracles_Fp2_zero___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles_Oracles_Fp2_zero___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_Fp2_zero___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_zero(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_zero___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_one(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_one___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_add(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_add___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_sub(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_sub___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_mul(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_mul___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_powAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_powAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_pow(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_pow___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_inv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_inv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Fp2_elements_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Fp2_elements_spec__1(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_LanglandsOracles_Oracles_Fp2_elements___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_LanglandsOracles_Oracles_Fp2_elements___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_Fp2_elements___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_elements(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Fp2_elements_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Fp2_elements_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Oracles_Fp2_evalPoly_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Oracles_Fp2_evalPoly_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldrTR___at___00Oracles_Fp2_evalPoly_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldrTR___at___00Oracles_Fp2_evalPoly_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_evalPoly(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_evalPoly___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Fp2_divLinear_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Fp2_divLinear_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_divLinear(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_divLinear___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_multiplicity_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_multiplicity_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_multiplicity(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_multiplicity___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_LanglandsOracles_Oracles_pascalRow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles_Oracles_pascalRow___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_pascalRow___closed__0_value;
static const lean_closure_object lp_LanglandsOracles_Oracles_pascalRow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_Oracles_pascalRow___closed__1 = (const lean_object*)&lp_LanglandsOracles_Oracles_pascalRow___closed__1_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_pascalRow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles_Oracles_pascalRow___closed__2 = (const lean_object*)&lp_LanglandsOracles_Oracles_pascalRow___closed__2_value;
static const lean_array_object lp_LanglandsOracles_Oracles_pascalRow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_LanglandsOracles_Oracles_pascalRow___closed__3 = (const lean_object*)&lp_LanglandsOracles_Oracles_pascalRow___closed__3_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_pascalRow(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_pascalRow___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_hassePoly_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_hassePoly_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_hassePoly(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_hassePoly___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_legendreToJ(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_legendreToJ___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_LanglandsOracles_List_eraseDups___at___00Oracles_supersingularJ_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_List_eraseDups___at___00Oracles_supersingularJ_spec__2___redArg___closed__0 = (const lean_object*)&lp_LanglandsOracles_List_eraseDups___at___00Oracles_supersingularJ_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_eraseDups___at___00Oracles_supersingularJ_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_eraseDups___at___00Oracles_supersingularJ_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_eraseDups___at___00Oracles_supersingularJ_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_supersingularJ_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_supersingularJ_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_supersingularJ_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_supersingularJ_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_supersingularJ(lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__0;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__1;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__2;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__3;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__4;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__5;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__6;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__7;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__8;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__9;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__10;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__11;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__12;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__13;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__14;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__15;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__16;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__17;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__18;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__19;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__20;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__21;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__22;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__23;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__24;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__25;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__26;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__27;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__28;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__29;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__30;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__31;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__32;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__33;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__34;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__35;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__36;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__37;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__38;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__39;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__40;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi2___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi2___closed__41;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_phi2;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__0;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__1;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__2;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__3;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__4;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__5;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__6;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__7;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__8;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__9;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__10;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__11;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__12;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__13;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__14;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__15;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__16;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__17;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__18;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__19;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__20;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__21;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__22;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__23;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__24;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__25;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__26;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__27;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__28;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__29;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__30;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__31;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__32;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__33;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__34;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__35;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__36;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__37;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__38;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__39;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__40;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__41;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__42;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__43;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__44;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__45;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__46;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__47;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__48;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__49;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__50;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__51;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__52;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__53;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__54;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__55;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__56;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__57;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__58;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__59;
static lean_once_cell_t lp_LanglandsOracles_Oracles_phi3___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_phi3___closed__60;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_phi3;
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_phiAt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_phiAt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_phiAt_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_phiAt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_phiAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_phiAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_brandtLean_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_brandtLean_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtLean_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtLean_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtLean_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtLean_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3___closed__0;
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_brandtLean_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_brandtLean_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_brandtLean(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_insertEverywhere_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_insertEverywhere(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_permutations_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_LanglandsOracles_Oracles_permutations___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_LanglandsOracles_Oracles_permutations___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_permutations___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_permutations(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_relabel_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_relabel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_relabel_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_relabel_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_relabel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_relabel___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__1___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_beq___at___00List_beq___at___00Oracles_isogenyGraphCertified_spec__2_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_beq___at___00List_beq___at___00Oracles_isogenyGraphCertified_spec__2_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_beq___at___00Oracles_isogenyGraphCertified_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_beq___at___00Oracles_isogenyGraphCertified_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_isogenyGraphCertified_spec__3(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_isogenyGraphCertified_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__4(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_isogenyGraphCertified___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_isogenyGraphCertified___closed__0;
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_isogenyGraphCertified(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_isogenyGraphCertified___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq___redArg(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
lean_object* v_a_3_; lean_object* v_b_4_; lean_object* v_a_5_; lean_object* v_b_6_; uint8_t v___x_7_; 
v_a_3_ = lean_ctor_get(v_x_1_, 0);
v_b_4_ = lean_ctor_get(v_x_1_, 1);
v_a_5_ = lean_ctor_get(v_x_2_, 0);
v_b_6_ = lean_ctor_get(v_x_2_, 1);
v___x_7_ = lean_nat_dec_eq(v_a_3_, v_a_5_);
if (v___x_7_ == 0)
{
return v___x_7_;
}
else
{
uint8_t v___x_8_; 
v___x_8_ = lean_nat_dec_eq(v_b_4_, v_b_6_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq___redArg___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq___redArg(v_x_9_, v_x_10_);
lean_dec_ref(v_x_10_);
lean_dec_ref(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq(lean_object* v_p_13_, lean_object* v_x_14_, lean_object* v_x_15_){
_start:
{
uint8_t v___x_16_; 
v___x_16_ = lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq___redArg(v_x_14_, v_x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq___boxed(lean_object* v_p_17_, lean_object* v_x_18_, lean_object* v_x_19_){
_start:
{
uint8_t v_res_20_; lean_object* v_r_21_; 
v_res_20_ = lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq(v_p_17_, v_x_18_, v_x_19_);
lean_dec_ref(v_x_19_);
lean_dec_ref(v_x_18_);
lean_dec(v_p_17_);
v_r_21_ = lean_box(v_res_20_);
return v_r_21_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqFp2___redArg(lean_object* v_x_22_, lean_object* v_x_23_){
_start:
{
uint8_t v___x_24_; 
v___x_24_ = lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq___redArg(v_x_22_, v_x_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqFp2___redArg___boxed(lean_object* v_x_25_, lean_object* v_x_26_){
_start:
{
uint8_t v_res_27_; lean_object* v_r_28_; 
v_res_27_ = lp_LanglandsOracles_Oracles_instDecidableEqFp2___redArg(v_x_25_, v_x_26_);
lean_dec_ref(v_x_26_);
lean_dec_ref(v_x_25_);
v_r_28_ = lean_box(v_res_27_);
return v_r_28_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqFp2(lean_object* v_p_29_, lean_object* v_x_30_, lean_object* v_x_31_){
_start:
{
uint8_t v___x_32_; 
v___x_32_ = lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq___redArg(v_x_30_, v_x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqFp2___boxed(lean_object* v_p_33_, lean_object* v_x_34_, lean_object* v_x_35_){
_start:
{
uint8_t v_res_36_; lean_object* v_r_37_; 
v_res_36_ = lp_LanglandsOracles_Oracles_instDecidableEqFp2(v_p_33_, v_x_34_, v_x_35_);
lean_dec_ref(v_x_35_);
lean_dec_ref(v_x_34_);
lean_dec(v_p_33_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_unsigned_to_nat(5u);
v___x_52_ = lean_nat_to_int(v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__0));
v___x_61_ = lean_string_length(v___x_60_);
return v___x_61_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_obj_once(&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__13, &lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__13_once, _init_lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__13);
v___x_63_ = lean_nat_to_int(v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg(lean_object* v_x_68_){
_start:
{
lean_object* v_a_69_; lean_object* v_b_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_104_; 
v_a_69_ = lean_ctor_get(v_x_68_, 0);
v_b_70_ = lean_ctor_get(v_x_68_, 1);
v_isSharedCheck_104_ = !lean_is_exclusive(v_x_68_);
if (v_isSharedCheck_104_ == 0)
{
v___x_72_ = v_x_68_;
v_isShared_73_ = v_isSharedCheck_104_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_b_70_);
lean_inc(v_a_69_);
lean_dec(v_x_68_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_104_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_80_; 
v___x_74_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__5));
v___x_75_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__6));
v___x_76_ = lean_obj_once(&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__7, &lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__7_once, _init_lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__7);
v___x_77_ = l_Nat_reprFast(v_a_69_);
v___x_78_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
if (v_isShared_73_ == 0)
{
lean_ctor_set_tag(v___x_72_, 4);
lean_ctor_set(v___x_72_, 1, v___x_78_);
lean_ctor_set(v___x_72_, 0, v___x_76_);
v___x_80_ = v___x_72_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_76_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v___x_78_);
v___x_80_ = v_reuseFailAlloc_103_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
uint8_t v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_81_ = 0;
v___x_82_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_82_, 0, v___x_80_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*1, v___x_81_);
v___x_83_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_75_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
v___x_84_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__9));
v___x_85_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_83_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = lean_box(1);
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_85_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__11));
v___x_89_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_87_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
lean_ctor_set(v___x_90_, 1, v___x_74_);
v___x_91_ = l_Nat_reprFast(v_b_70_);
v___x_92_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
v___x_93_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_76_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_94_, 0, v___x_93_);
lean_ctor_set_uint8(v___x_94_, sizeof(void*)*1, v___x_81_);
v___x_95_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_90_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
v___x_96_ = lean_obj_once(&lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__14, &lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__14_once, _init_lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__14);
v___x_97_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__15));
v___x_98_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___x_95_);
v___x_99_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg___closed__16));
v___x_100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_98_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_96_);
lean_ctor_set(v___x_101_, 1, v___x_100_);
v___x_102_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set_uint8(v___x_102_, sizeof(void*)*1, v___x_81_);
return v___x_102_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr(lean_object* v_p_105_, lean_object* v_x_106_, lean_object* v_prec_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lp_LanglandsOracles_Oracles_instReprFp2_repr___redArg(v_x_106_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprFp2_repr___boxed(lean_object* v_p_109_, lean_object* v_x_110_, lean_object* v_prec_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = lp_LanglandsOracles_Oracles_instReprFp2_repr(v_p_109_, v_x_110_, v_prec_111_);
lean_dec(v_prec_111_);
lean_dec(v_p_109_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprFp2(lean_object* v_p_113_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = lean_alloc_closure((void*)(lp_LanglandsOracles_Oracles_instReprFp2_repr___boxed), 3, 1);
lean_closure_set(v___x_114_, 0, v_p_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Fp2_nonResidue_spec__0(lean_object* v_p_115_, lean_object* v_a_116_, lean_object* v_a_117_){
_start:
{
if (lean_obj_tag(v_a_116_) == 0)
{
lean_object* v___x_118_; 
v___x_118_ = l_List_reverse___redArg(v_a_117_);
return v___x_118_;
}
else
{
lean_object* v_head_119_; lean_object* v_tail_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_139_; 
v_head_119_ = lean_ctor_get(v_a_116_, 0);
v_tail_120_ = lean_ctor_get(v_a_116_, 1);
v_isSharedCheck_139_ = !lean_is_exclusive(v_a_116_);
if (v_isSharedCheck_139_ == 0)
{
v___x_122_ = v_a_116_;
v_isShared_123_ = v_isSharedCheck_139_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_tail_120_);
lean_inc(v_head_119_);
lean_dec(v_a_116_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_139_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
uint8_t v___y_125_; lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_131_ = lean_unsigned_to_nat(2u);
v___x_132_ = lean_nat_dec_le(v___x_131_, v_head_119_);
if (v___x_132_ == 0)
{
v___y_125_ = v___x_132_;
goto v___jp_124_;
}
else
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; 
v___x_133_ = lean_unsigned_to_nat(1u);
v___x_134_ = lean_nat_sub(v_p_115_, v___x_133_);
v___x_135_ = lean_nat_shiftr(v___x_134_, v___x_133_);
v___x_136_ = lean_nat_pow(v_head_119_, v___x_135_);
lean_dec(v___x_135_);
v___x_137_ = lean_nat_mod(v___x_136_, v_p_115_);
lean_dec(v___x_136_);
v___x_138_ = lean_nat_dec_eq(v___x_137_, v___x_134_);
lean_dec(v___x_134_);
lean_dec(v___x_137_);
v___y_125_ = v___x_138_;
goto v___jp_124_;
}
v___jp_124_:
{
if (v___y_125_ == 0)
{
lean_del_object(v___x_122_);
lean_dec(v_head_119_);
v_a_116_ = v_tail_120_;
goto _start;
}
else
{
lean_object* v___x_128_; 
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 1, v_a_117_);
v___x_128_ = v___x_122_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_head_119_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v_a_117_);
v___x_128_ = v_reuseFailAlloc_130_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
v_a_116_ = v_tail_120_;
v_a_117_ = v___x_128_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Fp2_nonResidue_spec__0___boxed(lean_object* v_p_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Fp2_nonResidue_spec__0(v_p_140_, v_a_141_, v_a_142_);
lean_dec(v_p_140_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_nonResidue(lean_object* v_p_144_){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
lean_inc(v_p_144_);
v___x_145_ = l_List_range(v_p_144_);
v___x_146_ = lean_box(0);
v___x_147_ = lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Fp2_nonResidue_spec__0(v_p_144_, v___x_145_, v___x_146_);
lean_dec(v_p_144_);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v___x_148_; 
v___x_148_ = lean_unsigned_to_nat(0u);
return v___x_148_;
}
else
{
lean_object* v_head_149_; 
v_head_149_ = lean_ctor_get(v___x_147_, 0);
lean_inc(v_head_149_);
lean_dec_ref_known(v___x_147_, 2);
return v_head_149_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_ofNat(lean_object* v_p_150_, lean_object* v_n_151_){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = lean_nat_mod(v_n_151_, v_p_150_);
v___x_153_ = lean_unsigned_to_nat(0u);
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_152_);
lean_ctor_set(v___x_154_, 1, v___x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_ofNat___boxed(lean_object* v_p_155_, lean_object* v_n_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = lp_LanglandsOracles_Oracles_Fp2_ofNat(v_p_155_, v_n_156_);
lean_dec(v_n_156_);
lean_dec(v_p_155_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_ofInt(lean_object* v_p_158_, lean_object* v_z_159_){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_160_ = lean_nat_to_int(v_p_158_);
v___x_161_ = lean_int_emod(v_z_159_, v___x_160_);
v___x_162_ = lean_int_add(v___x_161_, v___x_160_);
lean_dec(v___x_161_);
v___x_163_ = lean_int_emod(v___x_162_, v___x_160_);
lean_dec(v___x_160_);
lean_dec(v___x_162_);
v___x_164_ = l_Int_toNat(v___x_163_);
lean_dec(v___x_163_);
v___x_165_ = lean_unsigned_to_nat(0u);
v___x_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_164_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_ofInt___boxed(lean_object* v_p_167_, lean_object* v_z_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = lp_LanglandsOracles_Oracles_Fp2_ofInt(v_p_167_, v_z_168_);
lean_dec(v_z_168_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_zero(lean_object* v_p_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Fp2_zero___closed__0));
return v___x_173_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_zero___boxed(lean_object* v_p_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = lp_LanglandsOracles_Oracles_Fp2_zero(v_p_174_);
lean_dec(v_p_174_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_one(lean_object* v_p_176_){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_177_ = lean_unsigned_to_nat(1u);
v___x_178_ = lean_nat_mod(v___x_177_, v_p_176_);
v___x_179_ = lean_unsigned_to_nat(0u);
v___x_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_178_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_one___boxed(lean_object* v_p_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = lp_LanglandsOracles_Oracles_Fp2_one(v_p_181_);
lean_dec(v_p_181_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_add(lean_object* v_p_183_, lean_object* v_x_184_, lean_object* v_y_185_){
_start:
{
lean_object* v_a_186_; lean_object* v_b_187_; lean_object* v_a_188_; lean_object* v_b_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_200_; 
v_a_186_ = lean_ctor_get(v_x_184_, 0);
v_b_187_ = lean_ctor_get(v_x_184_, 1);
v_a_188_ = lean_ctor_get(v_y_185_, 0);
v_b_189_ = lean_ctor_get(v_y_185_, 1);
v_isSharedCheck_200_ = !lean_is_exclusive(v_y_185_);
if (v_isSharedCheck_200_ == 0)
{
v___x_191_ = v_y_185_;
v_isShared_192_ = v_isSharedCheck_200_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_b_189_);
lean_inc(v_a_188_);
lean_dec(v_y_185_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_200_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_198_; 
v___x_193_ = lean_nat_add(v_a_186_, v_a_188_);
lean_dec(v_a_188_);
v___x_194_ = lean_nat_mod(v___x_193_, v_p_183_);
lean_dec(v___x_193_);
v___x_195_ = lean_nat_add(v_b_187_, v_b_189_);
lean_dec(v_b_189_);
v___x_196_ = lean_nat_mod(v___x_195_, v_p_183_);
lean_dec(v___x_195_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 1, v___x_196_);
lean_ctor_set(v___x_191_, 0, v___x_194_);
v___x_198_ = v___x_191_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_194_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v___x_196_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_add___boxed(lean_object* v_p_201_, lean_object* v_x_202_, lean_object* v_y_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = lp_LanglandsOracles_Oracles_Fp2_add(v_p_201_, v_x_202_, v_y_203_);
lean_dec_ref(v_x_202_);
lean_dec(v_p_201_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_sub(lean_object* v_p_205_, lean_object* v_x_206_, lean_object* v_y_207_){
_start:
{
lean_object* v_a_208_; lean_object* v_b_209_; lean_object* v_a_210_; lean_object* v_b_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_226_; 
v_a_208_ = lean_ctor_get(v_x_206_, 0);
v_b_209_ = lean_ctor_get(v_x_206_, 1);
v_a_210_ = lean_ctor_get(v_y_207_, 0);
v_b_211_ = lean_ctor_get(v_y_207_, 1);
v_isSharedCheck_226_ = !lean_is_exclusive(v_y_207_);
if (v_isSharedCheck_226_ == 0)
{
v___x_213_ = v_y_207_;
v_isShared_214_ = v_isSharedCheck_226_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_b_211_);
lean_inc(v_a_210_);
lean_dec(v_y_207_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_226_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_224_; 
v___x_215_ = lean_nat_add(v_a_208_, v_p_205_);
v___x_216_ = lean_nat_mod(v_a_210_, v_p_205_);
lean_dec(v_a_210_);
v___x_217_ = lean_nat_sub(v___x_215_, v___x_216_);
lean_dec(v___x_216_);
lean_dec(v___x_215_);
v___x_218_ = lean_nat_mod(v___x_217_, v_p_205_);
lean_dec(v___x_217_);
v___x_219_ = lean_nat_add(v_b_209_, v_p_205_);
v___x_220_ = lean_nat_mod(v_b_211_, v_p_205_);
lean_dec(v_b_211_);
v___x_221_ = lean_nat_sub(v___x_219_, v___x_220_);
lean_dec(v___x_220_);
lean_dec(v___x_219_);
v___x_222_ = lean_nat_mod(v___x_221_, v_p_205_);
lean_dec(v___x_221_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 1, v___x_222_);
lean_ctor_set(v___x_213_, 0, v___x_218_);
v___x_224_ = v___x_213_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_218_);
lean_ctor_set(v_reuseFailAlloc_225_, 1, v___x_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_sub___boxed(lean_object* v_p_227_, lean_object* v_x_228_, lean_object* v_y_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = lp_LanglandsOracles_Oracles_Fp2_sub(v_p_227_, v_x_228_, v_y_229_);
lean_dec_ref(v_x_228_);
lean_dec(v_p_227_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_mul(lean_object* v_p_231_, lean_object* v_c_232_, lean_object* v_x_233_, lean_object* v_y_234_){
_start:
{
lean_object* v_a_235_; lean_object* v_b_236_; lean_object* v_a_237_; lean_object* v_b_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_254_; 
v_a_235_ = lean_ctor_get(v_x_233_, 0);
v_b_236_ = lean_ctor_get(v_x_233_, 1);
v_a_237_ = lean_ctor_get(v_y_234_, 0);
v_b_238_ = lean_ctor_get(v_y_234_, 1);
v_isSharedCheck_254_ = !lean_is_exclusive(v_y_234_);
if (v_isSharedCheck_254_ == 0)
{
v___x_240_ = v_y_234_;
v_isShared_241_ = v_isSharedCheck_254_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_b_238_);
lean_inc(v_a_237_);
lean_dec(v_y_234_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_254_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_252_; 
v___x_242_ = lean_nat_mul(v_a_235_, v_a_237_);
v___x_243_ = lean_nat_mul(v_b_236_, v_b_238_);
v___x_244_ = lean_nat_mul(v_c_232_, v___x_243_);
lean_dec(v___x_243_);
v___x_245_ = lean_nat_add(v___x_242_, v___x_244_);
lean_dec(v___x_244_);
lean_dec(v___x_242_);
v___x_246_ = lean_nat_mod(v___x_245_, v_p_231_);
lean_dec(v___x_245_);
v___x_247_ = lean_nat_mul(v_a_235_, v_b_238_);
lean_dec(v_b_238_);
v___x_248_ = lean_nat_mul(v_b_236_, v_a_237_);
lean_dec(v_a_237_);
v___x_249_ = lean_nat_add(v___x_247_, v___x_248_);
lean_dec(v___x_248_);
lean_dec(v___x_247_);
v___x_250_ = lean_nat_mod(v___x_249_, v_p_231_);
lean_dec(v___x_249_);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 1, v___x_250_);
lean_ctor_set(v___x_240_, 0, v___x_246_);
v___x_252_ = v___x_240_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v___x_246_);
lean_ctor_set(v_reuseFailAlloc_253_, 1, v___x_250_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_mul___boxed(lean_object* v_p_255_, lean_object* v_c_256_, lean_object* v_x_257_, lean_object* v_y_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = lp_LanglandsOracles_Oracles_Fp2_mul(v_p_255_, v_c_256_, v_x_257_, v_y_258_);
lean_dec_ref(v_x_257_);
lean_dec(v_c_256_);
lean_dec(v_p_255_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_powAux(lean_object* v_p_260_, lean_object* v_c_261_, lean_object* v_x_262_, lean_object* v_x_263_, lean_object* v_x_264_){
_start:
{
lean_object* v_zero_265_; uint8_t v_isZero_266_; 
v_zero_265_ = lean_unsigned_to_nat(0u);
v_isZero_266_ = lean_nat_dec_eq(v_x_264_, v_zero_265_);
if (v_isZero_266_ == 1)
{
lean_object* v___x_267_; 
lean_dec_ref(v_x_262_);
v___x_267_ = lp_LanglandsOracles_Oracles_Fp2_one(v_p_260_);
return v___x_267_;
}
else
{
uint8_t v___x_268_; 
v___x_268_ = lean_nat_dec_eq(v_x_263_, v_zero_265_);
if (v___x_268_ == 0)
{
lean_object* v_one_269_; lean_object* v_n_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v_h_274_; lean_object* v___x_275_; uint8_t v___x_276_; 
v_one_269_ = lean_unsigned_to_nat(1u);
v_n_270_ = lean_nat_sub(v_x_264_, v_one_269_);
lean_inc_ref(v_x_262_);
v___x_271_ = lp_LanglandsOracles_Oracles_Fp2_mul(v_p_260_, v_c_261_, v_x_262_, v_x_262_);
v___x_272_ = lean_unsigned_to_nat(2u);
v___x_273_ = lean_nat_shiftr(v_x_263_, v_one_269_);
v_h_274_ = lp_LanglandsOracles_Oracles_Fp2_powAux(v_p_260_, v_c_261_, v___x_271_, v___x_273_, v_n_270_);
lean_dec(v_n_270_);
lean_dec(v___x_273_);
v___x_275_ = lean_nat_mod(v_x_263_, v___x_272_);
v___x_276_ = lean_nat_dec_eq(v___x_275_, v_one_269_);
lean_dec(v___x_275_);
if (v___x_276_ == 0)
{
lean_dec_ref(v_x_262_);
return v_h_274_;
}
else
{
lean_object* v___x_277_; 
v___x_277_ = lp_LanglandsOracles_Oracles_Fp2_mul(v_p_260_, v_c_261_, v_x_262_, v_h_274_);
lean_dec_ref(v_x_262_);
return v___x_277_;
}
}
else
{
lean_object* v___x_278_; 
lean_dec_ref(v_x_262_);
v___x_278_ = lp_LanglandsOracles_Oracles_Fp2_one(v_p_260_);
return v___x_278_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_powAux___boxed(lean_object* v_p_279_, lean_object* v_c_280_, lean_object* v_x_281_, lean_object* v_x_282_, lean_object* v_x_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = lp_LanglandsOracles_Oracles_Fp2_powAux(v_p_279_, v_c_280_, v_x_281_, v_x_282_, v_x_283_);
lean_dec(v_x_283_);
lean_dec(v_x_282_);
lean_dec(v_c_280_);
lean_dec(v_p_279_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_pow(lean_object* v_p_285_, lean_object* v_c_286_, lean_object* v_x_287_, lean_object* v_n_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lean_unsigned_to_nat(64u);
v___x_290_ = lp_LanglandsOracles_Oracles_Fp2_powAux(v_p_285_, v_c_286_, v_x_287_, v_n_288_, v___x_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_pow___boxed(lean_object* v_p_291_, lean_object* v_c_292_, lean_object* v_x_293_, lean_object* v_n_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = lp_LanglandsOracles_Oracles_Fp2_pow(v_p_291_, v_c_292_, v_x_293_, v_n_294_);
lean_dec(v_n_294_);
lean_dec(v_c_292_);
lean_dec(v_p_291_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_inv(lean_object* v_p_296_, lean_object* v_c_297_, lean_object* v_x_298_){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_299_ = lean_nat_mul(v_p_296_, v_p_296_);
v___x_300_ = lean_unsigned_to_nat(2u);
v___x_301_ = lean_nat_sub(v___x_299_, v___x_300_);
lean_dec(v___x_299_);
v___x_302_ = lp_LanglandsOracles_Oracles_Fp2_pow(v_p_296_, v_c_297_, v_x_298_, v___x_301_);
lean_dec(v___x_301_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_inv___boxed(lean_object* v_p_303_, lean_object* v_c_304_, lean_object* v_x_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = lp_LanglandsOracles_Oracles_Fp2_inv(v_p_303_, v_c_304_, v_x_305_);
lean_dec(v_c_304_);
lean_dec(v_p_303_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Fp2_elements_spec__0___redArg(lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
if (lean_obj_tag(v_a_308_) == 0)
{
lean_object* v___x_310_; 
lean_dec(v_a_307_);
v___x_310_ = l_List_reverse___redArg(v_a_309_);
return v___x_310_;
}
else
{
lean_object* v_head_311_; lean_object* v_tail_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_321_; 
v_head_311_ = lean_ctor_get(v_a_308_, 0);
v_tail_312_ = lean_ctor_get(v_a_308_, 1);
v_isSharedCheck_321_ = !lean_is_exclusive(v_a_308_);
if (v_isSharedCheck_321_ == 0)
{
v___x_314_ = v_a_308_;
v_isShared_315_ = v_isSharedCheck_321_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_tail_312_);
lean_inc(v_head_311_);
lean_dec(v_a_308_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_321_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; lean_object* v___x_318_; 
lean_inc(v_a_307_);
v___x_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_316_, 0, v_a_307_);
lean_ctor_set(v___x_316_, 1, v_head_311_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v_a_309_);
lean_ctor_set(v___x_314_, 0, v___x_316_);
v___x_318_ = v___x_314_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_316_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v_a_309_);
v___x_318_ = v_reuseFailAlloc_320_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
v_a_308_ = v_tail_312_;
v_a_309_ = v___x_318_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Fp2_elements_spec__1(lean_object* v_p_322_, lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
if (lean_obj_tag(v_a_323_) == 0)
{
lean_object* v___x_325_; 
lean_dec(v_p_322_);
v___x_325_ = lean_array_to_list(v_a_324_);
return v___x_325_;
}
else
{
lean_object* v_head_326_; lean_object* v_tail_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v_head_326_ = lean_ctor_get(v_a_323_, 0);
lean_inc(v_head_326_);
v_tail_327_ = lean_ctor_get(v_a_323_, 1);
lean_inc(v_tail_327_);
lean_dec_ref_known(v_a_323_, 2);
lean_inc(v_p_322_);
v___x_328_ = l_List_range(v_p_322_);
v___x_329_ = lean_box(0);
v___x_330_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Fp2_elements_spec__0___redArg(v_head_326_, v___x_328_, v___x_329_);
v___x_331_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_324_, v___x_330_);
v_a_323_ = v_tail_327_;
v_a_324_ = v___x_331_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_elements(lean_object* v_p_335_){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
lean_inc(v_p_335_);
v___x_336_ = l_List_range(v_p_335_);
v___x_337_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Fp2_elements___closed__0));
v___x_338_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Fp2_elements_spec__1(v_p_335_, v___x_336_, v___x_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Fp2_elements_spec__0(lean_object* v_p_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Fp2_elements_spec__0___redArg(v_a_340_, v_a_341_, v_a_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Fp2_elements_spec__0___boxed(lean_object* v_p_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Fp2_elements_spec__0(v_p_344_, v_a_345_, v_a_346_, v_a_347_);
lean_dec(v_p_344_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Oracles_Fp2_evalPoly_spec__0_spec__0(lean_object* v_p_349_, lean_object* v_c_350_, lean_object* v_x_351_, lean_object* v_as_352_, size_t v_i_353_, size_t v_stop_354_, lean_object* v_b_355_){
_start:
{
uint8_t v___x_356_; 
v___x_356_ = lean_usize_dec_eq(v_i_353_, v_stop_354_);
if (v___x_356_ == 0)
{
size_t v___x_357_; size_t v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_357_ = ((size_t)1ULL);
v___x_358_ = lean_usize_sub(v_i_353_, v___x_357_);
v___x_359_ = lean_array_uget_borrowed(v_as_352_, v___x_358_);
lean_inc_ref(v_x_351_);
v___x_360_ = lp_LanglandsOracles_Oracles_Fp2_mul(v_p_349_, v_c_350_, v_b_355_, v_x_351_);
lean_dec_ref(v_b_355_);
v___x_361_ = lp_LanglandsOracles_Oracles_Fp2_add(v_p_349_, v___x_359_, v___x_360_);
v_i_353_ = v___x_358_;
v_b_355_ = v___x_361_;
goto _start;
}
else
{
lean_dec_ref(v_x_351_);
return v_b_355_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Oracles_Fp2_evalPoly_spec__0_spec__0___boxed(lean_object* v_p_363_, lean_object* v_c_364_, lean_object* v_x_365_, lean_object* v_as_366_, lean_object* v_i_367_, lean_object* v_stop_368_, lean_object* v_b_369_){
_start:
{
size_t v_i_boxed_370_; size_t v_stop_boxed_371_; lean_object* v_res_372_; 
v_i_boxed_370_ = lean_unbox_usize(v_i_367_);
lean_dec(v_i_367_);
v_stop_boxed_371_ = lean_unbox_usize(v_stop_368_);
lean_dec(v_stop_368_);
v_res_372_ = lp_LanglandsOracles___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Oracles_Fp2_evalPoly_spec__0_spec__0(v_p_363_, v_c_364_, v_x_365_, v_as_366_, v_i_boxed_370_, v_stop_boxed_371_, v_b_369_);
lean_dec_ref(v_as_366_);
lean_dec(v_c_364_);
lean_dec(v_p_363_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldrTR___at___00Oracles_Fp2_evalPoly_spec__0(lean_object* v_p_373_, lean_object* v_c_374_, lean_object* v_x_375_, lean_object* v_init_376_, lean_object* v_l_377_){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; uint8_t v___x_381_; 
v___x_378_ = lean_array_mk(v_l_377_);
v___x_379_ = lean_array_get_size(v___x_378_);
v___x_380_ = lean_unsigned_to_nat(0u);
v___x_381_ = lean_nat_dec_lt(v___x_380_, v___x_379_);
if (v___x_381_ == 0)
{
lean_dec_ref(v___x_378_);
lean_dec_ref(v_x_375_);
return v_init_376_;
}
else
{
size_t v___x_382_; size_t v___x_383_; lean_object* v___x_384_; 
v___x_382_ = lean_usize_of_nat(v___x_379_);
v___x_383_ = ((size_t)0ULL);
v___x_384_ = lp_LanglandsOracles___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Oracles_Fp2_evalPoly_spec__0_spec__0(v_p_373_, v_c_374_, v_x_375_, v___x_378_, v___x_382_, v___x_383_, v_init_376_);
lean_dec_ref(v___x_378_);
return v___x_384_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldrTR___at___00Oracles_Fp2_evalPoly_spec__0___boxed(lean_object* v_p_385_, lean_object* v_c_386_, lean_object* v_x_387_, lean_object* v_init_388_, lean_object* v_l_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = lp_LanglandsOracles_List_foldrTR___at___00Oracles_Fp2_evalPoly_spec__0(v_p_385_, v_c_386_, v_x_387_, v_init_388_, v_l_389_);
lean_dec(v_c_386_);
lean_dec(v_p_385_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_evalPoly(lean_object* v_p_391_, lean_object* v_c_392_, lean_object* v_coeffs_393_, lean_object* v_x_394_){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = lp_LanglandsOracles_Oracles_Fp2_zero(v_p_391_);
v___x_396_ = lp_LanglandsOracles_List_foldrTR___at___00Oracles_Fp2_evalPoly_spec__0(v_p_391_, v_c_392_, v_x_394_, v___x_395_, v_coeffs_393_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_evalPoly___boxed(lean_object* v_p_397_, lean_object* v_c_398_, lean_object* v_coeffs_399_, lean_object* v_x_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = lp_LanglandsOracles_Oracles_Fp2_evalPoly(v_p_397_, v_c_398_, v_coeffs_399_, v_x_400_);
lean_dec(v_c_398_);
lean_dec(v_p_397_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Fp2_divLinear_spec__0(lean_object* v_p_402_, lean_object* v_c_403_, lean_object* v_r_404_, lean_object* v_x_405_, lean_object* v_x_406_){
_start:
{
if (lean_obj_tag(v_x_406_) == 0)
{
lean_dec_ref(v_r_404_);
return v_x_405_;
}
else
{
lean_object* v_head_407_; lean_object* v_tail_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_427_; 
v_head_407_ = lean_ctor_get(v_x_406_, 0);
v_tail_408_ = lean_ctor_get(v_x_406_, 1);
v_isSharedCheck_427_ = !lean_is_exclusive(v_x_406_);
if (v_isSharedCheck_427_ == 0)
{
v___x_410_ = v_x_406_;
v_isShared_411_ = v_isSharedCheck_427_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_tail_408_);
lean_inc(v_head_407_);
lean_dec(v_x_406_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_427_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v_fst_412_; lean_object* v_snd_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_426_; 
v_fst_412_ = lean_ctor_get(v_x_405_, 0);
v_snd_413_ = lean_ctor_get(v_x_405_, 1);
v_isSharedCheck_426_ = !lean_is_exclusive(v_x_405_);
if (v_isSharedCheck_426_ == 0)
{
v___x_415_ = v_x_405_;
v_isShared_416_ = v_isSharedCheck_426_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_snd_413_);
lean_inc(v_fst_412_);
lean_dec(v_x_405_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_426_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_417_; lean_object* v_acc_418_; lean_object* v___x_420_; 
lean_inc_ref(v_r_404_);
v___x_417_ = lp_LanglandsOracles_Oracles_Fp2_mul(v_p_402_, v_c_403_, v_snd_413_, v_r_404_);
lean_dec(v_snd_413_);
v_acc_418_ = lp_LanglandsOracles_Oracles_Fp2_add(v_p_402_, v___x_417_, v_head_407_);
lean_dec_ref(v___x_417_);
lean_inc_ref(v_acc_418_);
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 1, v_fst_412_);
lean_ctor_set(v___x_410_, 0, v_acc_418_);
v___x_420_ = v___x_410_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_acc_418_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_fst_412_);
v___x_420_ = v_reuseFailAlloc_425_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
lean_object* v___x_422_; 
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 1, v_acc_418_);
lean_ctor_set(v___x_415_, 0, v___x_420_);
v___x_422_ = v___x_415_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_420_);
lean_ctor_set(v_reuseFailAlloc_424_, 1, v_acc_418_);
v___x_422_ = v_reuseFailAlloc_424_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
v_x_405_ = v___x_422_;
v_x_406_ = v_tail_408_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Fp2_divLinear_spec__0___boxed(lean_object* v_p_428_, lean_object* v_c_429_, lean_object* v_r_430_, lean_object* v_x_431_, lean_object* v_x_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = lp_LanglandsOracles_List_foldl___at___00Oracles_Fp2_divLinear_spec__0(v_p_428_, v_c_429_, v_r_430_, v_x_431_, v_x_432_);
lean_dec(v_c_429_);
lean_dec(v_p_428_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_divLinear(lean_object* v_p_434_, lean_object* v_c_435_, lean_object* v_coeffs_436_, lean_object* v_r_437_){
_start:
{
lean_object* v_rev_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v_step_442_; lean_object* v_fst_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_452_; 
v_rev_438_ = l_List_reverse___redArg(v_coeffs_436_);
v___x_439_ = lean_box(0);
v___x_440_ = lp_LanglandsOracles_Oracles_Fp2_zero(v_p_434_);
v___x_441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_441_, 0, v___x_439_);
lean_ctor_set(v___x_441_, 1, v___x_440_);
lean_inc_ref(v___x_441_);
v_step_442_ = lp_LanglandsOracles_List_foldl___at___00Oracles_Fp2_divLinear_spec__0(v_p_434_, v_c_435_, v_r_437_, v___x_441_, v_rev_438_);
v_fst_443_ = lean_ctor_get(v_step_442_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v_step_442_);
if (v_isSharedCheck_452_ == 0)
{
lean_object* v_unused_453_; 
v_unused_453_ = lean_ctor_get(v_step_442_, 1);
lean_dec(v_unused_453_);
v___x_445_ = v_step_442_;
v_isShared_446_ = v_isSharedCheck_452_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_fst_443_);
lean_dec(v_step_442_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_452_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
if (lean_obj_tag(v_fst_443_) == 0)
{
lean_del_object(v___x_445_);
return v___x_441_;
}
else
{
lean_object* v_head_447_; lean_object* v_tail_448_; lean_object* v___x_450_; 
lean_dec_ref_known(v___x_441_, 2);
v_head_447_ = lean_ctor_get(v_fst_443_, 0);
lean_inc(v_head_447_);
v_tail_448_ = lean_ctor_get(v_fst_443_, 1);
lean_inc(v_tail_448_);
lean_dec_ref_known(v_fst_443_, 2);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 1, v_head_447_);
lean_ctor_set(v___x_445_, 0, v_tail_448_);
v___x_450_ = v___x_445_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_tail_448_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v_head_447_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_divLinear___boxed(lean_object* v_p_454_, lean_object* v_c_455_, lean_object* v_coeffs_456_, lean_object* v_r_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = lp_LanglandsOracles_Oracles_Fp2_divLinear(v_p_454_, v_c_455_, v_coeffs_456_, v_r_457_);
lean_dec(v_c_455_);
lean_dec(v_p_454_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_multiplicity_go(lean_object* v_p_459_, lean_object* v_c_460_, lean_object* v_r_461_, lean_object* v_f_462_, lean_object* v_fuel_463_, lean_object* v_acc_464_){
_start:
{
lean_object* v_zero_465_; uint8_t v_isZero_466_; 
v_zero_465_ = lean_unsigned_to_nat(0u);
v_isZero_466_ = lean_nat_dec_eq(v_fuel_463_, v_zero_465_);
if (v_isZero_466_ == 1)
{
lean_dec(v_fuel_463_);
lean_dec(v_f_462_);
lean_dec_ref(v_r_461_);
return v_acc_464_;
}
else
{
lean_object* v___x_467_; lean_object* v_fst_468_; lean_object* v_snd_469_; lean_object* v_one_470_; lean_object* v_n_471_; uint8_t v___y_473_; lean_object* v___x_476_; uint8_t v___x_477_; 
lean_inc_ref(v_r_461_);
lean_inc(v_f_462_);
v___x_467_ = lp_LanglandsOracles_Oracles_Fp2_divLinear(v_p_459_, v_c_460_, v_f_462_, v_r_461_);
v_fst_468_ = lean_ctor_get(v___x_467_, 0);
lean_inc(v_fst_468_);
v_snd_469_ = lean_ctor_get(v___x_467_, 1);
lean_inc(v_snd_469_);
lean_dec_ref(v___x_467_);
v_one_470_ = lean_unsigned_to_nat(1u);
v_n_471_ = lean_nat_sub(v_fuel_463_, v_one_470_);
lean_dec(v_fuel_463_);
v___x_476_ = lp_LanglandsOracles_Oracles_Fp2_zero(v_p_459_);
v___x_477_ = lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq___redArg(v_snd_469_, v___x_476_);
lean_dec_ref(v___x_476_);
lean_dec(v_snd_469_);
if (v___x_477_ == 0)
{
lean_dec(v_f_462_);
v___y_473_ = v___x_477_;
goto v___jp_472_;
}
else
{
lean_object* v___x_478_; uint8_t v___x_479_; 
v___x_478_ = l_List_lengthTR___redArg(v_f_462_);
lean_dec(v_f_462_);
v___x_479_ = lean_nat_dec_lt(v_one_470_, v___x_478_);
lean_dec(v___x_478_);
v___y_473_ = v___x_479_;
goto v___jp_472_;
}
v___jp_472_:
{
if (v___y_473_ == 0)
{
lean_dec(v_n_471_);
lean_dec(v_fst_468_);
lean_dec_ref(v_r_461_);
return v_acc_464_;
}
else
{
lean_object* v___x_474_; 
v___x_474_ = lean_nat_add(v_acc_464_, v_one_470_);
lean_dec(v_acc_464_);
v_f_462_ = v_fst_468_;
v_fuel_463_ = v_n_471_;
v_acc_464_ = v___x_474_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_multiplicity_go___boxed(lean_object* v_p_480_, lean_object* v_c_481_, lean_object* v_r_482_, lean_object* v_f_483_, lean_object* v_fuel_484_, lean_object* v_acc_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = lp_LanglandsOracles_Oracles_Fp2_multiplicity_go(v_p_480_, v_c_481_, v_r_482_, v_f_483_, v_fuel_484_, v_acc_485_);
lean_dec(v_c_481_);
lean_dec(v_p_480_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_multiplicity(lean_object* v_p_487_, lean_object* v_c_488_, lean_object* v_coeffs_489_, lean_object* v_r_490_){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_491_ = l_List_lengthTR___redArg(v_coeffs_489_);
v___x_492_ = lean_unsigned_to_nat(0u);
v___x_493_ = lp_LanglandsOracles_Oracles_Fp2_multiplicity_go(v_p_487_, v_c_488_, v_r_490_, v_coeffs_489_, v___x_491_, v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Fp2_multiplicity___boxed(lean_object* v_p_494_, lean_object* v_c_495_, lean_object* v_coeffs_496_, lean_object* v_r_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = lp_LanglandsOracles_Oracles_Fp2_multiplicity(v_p_494_, v_c_495_, v_coeffs_496_, v_r_497_);
lean_dec(v_c_495_);
lean_dec(v_p_494_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_pascalRow(lean_object* v_x_508_){
_start:
{
lean_object* v_zero_509_; uint8_t v_isZero_510_; 
v_zero_509_ = lean_unsigned_to_nat(0u);
v_isZero_510_ = lean_nat_dec_eq(v_x_508_, v_zero_509_);
if (v_isZero_510_ == 1)
{
lean_object* v___x_511_; 
v___x_511_ = ((lean_object*)(lp_LanglandsOracles_Oracles_pascalRow___closed__0));
return v___x_511_;
}
else
{
lean_object* v___f_512_; lean_object* v_one_513_; lean_object* v_n_514_; lean_object* v_prev_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v___f_512_ = ((lean_object*)(lp_LanglandsOracles_Oracles_pascalRow___closed__1));
v_one_513_ = lean_unsigned_to_nat(1u);
v_n_514_ = lean_nat_sub(v_x_508_, v_one_513_);
v_prev_515_ = lp_LanglandsOracles_Oracles_pascalRow(v_n_514_);
lean_dec(v_n_514_);
lean_inc(v_prev_515_);
v___x_516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_516_, 0, v_zero_509_);
lean_ctor_set(v___x_516_, 1, v_prev_515_);
v___x_517_ = ((lean_object*)(lp_LanglandsOracles_Oracles_pascalRow___closed__2));
v___x_518_ = l_List_appendTR___redArg(v_prev_515_, v___x_517_);
v___x_519_ = ((lean_object*)(lp_LanglandsOracles_Oracles_pascalRow___closed__3));
v___x_520_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(v___f_512_, v___x_516_, v___x_518_, v___x_519_);
return v___x_520_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_pascalRow___boxed(lean_object* v_x_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = lp_LanglandsOracles_Oracles_pascalRow(v_x_521_);
lean_dec(v_x_521_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_hassePoly_spec__0(lean_object* v_p_523_, lean_object* v_a_524_, lean_object* v_a_525_){
_start:
{
if (lean_obj_tag(v_a_524_) == 0)
{
lean_object* v___x_526_; 
v___x_526_ = l_List_reverse___redArg(v_a_525_);
return v___x_526_;
}
else
{
lean_object* v_head_527_; lean_object* v_tail_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_538_; 
v_head_527_ = lean_ctor_get(v_a_524_, 0);
v_tail_528_ = lean_ctor_get(v_a_524_, 1);
v_isSharedCheck_538_ = !lean_is_exclusive(v_a_524_);
if (v_isSharedCheck_538_ == 0)
{
v___x_530_ = v_a_524_;
v_isShared_531_ = v_isSharedCheck_538_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_tail_528_);
lean_inc(v_head_527_);
lean_dec(v_a_524_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_538_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_535_; 
v___x_532_ = lean_nat_mul(v_head_527_, v_head_527_);
lean_dec(v_head_527_);
v___x_533_ = lp_LanglandsOracles_Oracles_Fp2_ofNat(v_p_523_, v___x_532_);
lean_dec(v___x_532_);
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 1, v_a_525_);
lean_ctor_set(v___x_530_, 0, v___x_533_);
v___x_535_ = v___x_530_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_533_);
lean_ctor_set(v_reuseFailAlloc_537_, 1, v_a_525_);
v___x_535_ = v_reuseFailAlloc_537_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
v_a_524_ = v_tail_528_;
v_a_525_ = v___x_535_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_hassePoly_spec__0___boxed(lean_object* v_p_539_, lean_object* v_a_540_, lean_object* v_a_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_hassePoly_spec__0(v_p_539_, v_a_540_, v_a_541_);
lean_dec(v_p_539_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_hassePoly(lean_object* v_p_543_){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_544_ = lean_unsigned_to_nat(1u);
v___x_545_ = lean_nat_sub(v_p_543_, v___x_544_);
v___x_546_ = lean_nat_shiftr(v___x_545_, v___x_544_);
lean_dec(v___x_545_);
v___x_547_ = lp_LanglandsOracles_Oracles_pascalRow(v___x_546_);
lean_dec(v___x_546_);
v___x_548_ = lean_box(0);
v___x_549_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_hassePoly_spec__0(v_p_543_, v___x_547_, v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_hassePoly___boxed(lean_object* v_p_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = lp_LanglandsOracles_Oracles_hassePoly(v_p_550_);
lean_dec(v_p_550_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_legendreToJ(lean_object* v_p_552_, lean_object* v_c_553_, lean_object* v_lam_554_){
_start:
{
lean_object* v_l2_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v_num_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v_den_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
lean_inc_ref_n(v_lam_554_, 2);
v_l2_555_ = lp_LanglandsOracles_Oracles_Fp2_mul(v_p_552_, v_c_553_, v_lam_554_, v_lam_554_);
v___x_556_ = lp_LanglandsOracles_Oracles_Fp2_sub(v_p_552_, v_l2_555_, v_lam_554_);
v___x_557_ = lp_LanglandsOracles_Oracles_Fp2_one(v_p_552_);
lean_inc_ref(v___x_557_);
v___x_558_ = lp_LanglandsOracles_Oracles_Fp2_add(v_p_552_, v___x_556_, v___x_557_);
lean_dec_ref(v___x_556_);
v___x_559_ = lean_unsigned_to_nat(3u);
v_num_560_ = lp_LanglandsOracles_Oracles_Fp2_pow(v_p_552_, v_c_553_, v___x_558_, v___x_559_);
v___x_561_ = lp_LanglandsOracles_Oracles_Fp2_sub(v_p_552_, v_lam_554_, v___x_557_);
lean_dec_ref(v_lam_554_);
v___x_562_ = lean_unsigned_to_nat(2u);
v___x_563_ = lp_LanglandsOracles_Oracles_Fp2_pow(v_p_552_, v_c_553_, v___x_561_, v___x_562_);
v_den_564_ = lp_LanglandsOracles_Oracles_Fp2_mul(v_p_552_, v_c_553_, v_l2_555_, v___x_563_);
lean_dec_ref(v_l2_555_);
v___x_565_ = lean_unsigned_to_nat(256u);
v___x_566_ = lp_LanglandsOracles_Oracles_Fp2_ofNat(v_p_552_, v___x_565_);
v___x_567_ = lp_LanglandsOracles_Oracles_Fp2_mul(v_p_552_, v_c_553_, v___x_566_, v_num_560_);
lean_dec_ref(v___x_566_);
v___x_568_ = lp_LanglandsOracles_Oracles_Fp2_inv(v_p_552_, v_c_553_, v_den_564_);
v___x_569_ = lp_LanglandsOracles_Oracles_Fp2_mul(v_p_552_, v_c_553_, v___x_567_, v___x_568_);
lean_dec_ref(v___x_567_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_legendreToJ___boxed(lean_object* v_p_570_, lean_object* v_c_571_, lean_object* v_lam_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = lp_LanglandsOracles_Oracles_legendreToJ(v_p_570_, v_c_571_, v_lam_572_);
lean_dec(v_c_571_);
lean_dec(v_p_570_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_eraseDups___at___00Oracles_supersingularJ_spec__2___redArg(lean_object* v_as_575_){
_start:
{
lean_object* v___f_576_; lean_object* v___x_577_; 
v___f_576_ = ((lean_object*)(lp_LanglandsOracles_List_eraseDups___at___00Oracles_supersingularJ_spec__2___redArg___closed__0));
v___x_577_ = l_List_eraseDupsBy___redArg(v___f_576_, v_as_575_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_eraseDups___at___00Oracles_supersingularJ_spec__2(lean_object* v_p_578_, lean_object* v_as_579_){
_start:
{
lean_object* v___x_580_; 
v___x_580_ = lp_LanglandsOracles_List_eraseDups___at___00Oracles_supersingularJ_spec__2___redArg(v_as_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_eraseDups___at___00Oracles_supersingularJ_spec__2___boxed(lean_object* v_p_581_, lean_object* v_as_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = lp_LanglandsOracles_List_eraseDups___at___00Oracles_supersingularJ_spec__2(v_p_581_, v_as_582_);
lean_dec(v_p_581_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_supersingularJ_spec__0(lean_object* v_p_584_, lean_object* v_c_585_, lean_object* v_H_586_, lean_object* v_a_587_, lean_object* v_a_588_){
_start:
{
if (lean_obj_tag(v_a_587_) == 0)
{
lean_object* v___x_589_; 
lean_dec(v_H_586_);
v___x_589_ = l_List_reverse___redArg(v_a_588_);
return v___x_589_;
}
else
{
lean_object* v_head_590_; lean_object* v_tail_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_603_; 
v_head_590_ = lean_ctor_get(v_a_587_, 0);
v_tail_591_ = lean_ctor_get(v_a_587_, 1);
v_isSharedCheck_603_ = !lean_is_exclusive(v_a_587_);
if (v_isSharedCheck_603_ == 0)
{
v___x_593_ = v_a_587_;
v_isShared_594_ = v_isSharedCheck_603_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_tail_591_);
lean_inc(v_head_590_);
lean_dec(v_a_587_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_603_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_595_; lean_object* v___x_596_; uint8_t v___x_597_; 
lean_inc(v_head_590_);
lean_inc(v_H_586_);
v___x_595_ = lp_LanglandsOracles_Oracles_Fp2_evalPoly(v_p_584_, v_c_585_, v_H_586_, v_head_590_);
v___x_596_ = lp_LanglandsOracles_Oracles_Fp2_zero(v_p_584_);
v___x_597_ = lp_LanglandsOracles_Oracles_instDecidableEqFp2_decEq___redArg(v___x_595_, v___x_596_);
lean_dec_ref(v___x_596_);
lean_dec_ref(v___x_595_);
if (v___x_597_ == 0)
{
lean_del_object(v___x_593_);
lean_dec(v_head_590_);
v_a_587_ = v_tail_591_;
goto _start;
}
else
{
lean_object* v___x_600_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 1, v_a_588_);
v___x_600_ = v___x_593_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_head_590_);
lean_ctor_set(v_reuseFailAlloc_602_, 1, v_a_588_);
v___x_600_ = v_reuseFailAlloc_602_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
v_a_587_ = v_tail_591_;
v_a_588_ = v___x_600_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_supersingularJ_spec__0___boxed(lean_object* v_p_604_, lean_object* v_c_605_, lean_object* v_H_606_, lean_object* v_a_607_, lean_object* v_a_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_supersingularJ_spec__0(v_p_604_, v_c_605_, v_H_606_, v_a_607_, v_a_608_);
lean_dec(v_c_605_);
lean_dec(v_p_604_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_supersingularJ_spec__1(lean_object* v_p_610_, lean_object* v_c_611_, lean_object* v_a_612_, lean_object* v_a_613_){
_start:
{
if (lean_obj_tag(v_a_612_) == 0)
{
lean_object* v___x_614_; 
v___x_614_ = l_List_reverse___redArg(v_a_613_);
return v___x_614_;
}
else
{
lean_object* v_head_615_; lean_object* v_tail_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_625_; 
v_head_615_ = lean_ctor_get(v_a_612_, 0);
v_tail_616_ = lean_ctor_get(v_a_612_, 1);
v_isSharedCheck_625_ = !lean_is_exclusive(v_a_612_);
if (v_isSharedCheck_625_ == 0)
{
v___x_618_ = v_a_612_;
v_isShared_619_ = v_isSharedCheck_625_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_tail_616_);
lean_inc(v_head_615_);
lean_dec(v_a_612_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_625_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; lean_object* v___x_622_; 
v___x_620_ = lp_LanglandsOracles_Oracles_legendreToJ(v_p_610_, v_c_611_, v_head_615_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 1, v_a_613_);
lean_ctor_set(v___x_618_, 0, v___x_620_);
v___x_622_ = v___x_618_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_620_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_a_613_);
v___x_622_ = v_reuseFailAlloc_624_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
v_a_612_ = v_tail_616_;
v_a_613_ = v___x_622_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_supersingularJ_spec__1___boxed(lean_object* v_p_626_, lean_object* v_c_627_, lean_object* v_a_628_, lean_object* v_a_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_supersingularJ_spec__1(v_p_626_, v_c_627_, v_a_628_, v_a_629_);
lean_dec(v_c_627_);
lean_dec(v_p_626_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_supersingularJ(lean_object* v_p_631_){
_start:
{
lean_object* v_c_632_; lean_object* v_H_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v_lams_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
lean_inc_n(v_p_631_, 2);
v_c_632_ = lp_LanglandsOracles_Oracles_Fp2_nonResidue(v_p_631_);
v_H_633_ = lp_LanglandsOracles_Oracles_hassePoly(v_p_631_);
v___x_634_ = lp_LanglandsOracles_Oracles_Fp2_elements(v_p_631_);
v___x_635_ = lean_box(0);
v_lams_636_ = lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_supersingularJ_spec__0(v_p_631_, v_c_632_, v_H_633_, v___x_634_, v___x_635_);
v___x_637_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_supersingularJ_spec__1(v_p_631_, v_c_632_, v_lams_636_, v___x_635_);
lean_dec(v_c_632_);
lean_dec(v_p_631_);
v___x_638_ = lp_LanglandsOracles_List_eraseDups___at___00Oracles_supersingularJ_spec__2___redArg(v___x_637_);
return v___x_638_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__0(void){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_639_ = lean_unsigned_to_nat(1u);
v___x_640_ = lean_nat_to_int(v___x_639_);
return v___x_640_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__1(void){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_641_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__0, &lp_LanglandsOracles_Oracles_phi2___closed__0_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__0);
v___x_642_ = lean_unsigned_to_nat(0u);
v___x_643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
lean_ctor_set(v___x_643_, 1, v___x_641_);
return v___x_643_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__2(void){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_644_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__1, &lp_LanglandsOracles_Oracles_phi2___closed__1_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__1);
v___x_645_ = lean_unsigned_to_nat(3u);
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
lean_ctor_set(v___x_646_, 1, v___x_644_);
return v___x_646_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__3(void){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_647_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__0, &lp_LanglandsOracles_Oracles_phi2___closed__0_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__0);
v___x_648_ = lean_unsigned_to_nat(3u);
v___x_649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_649_, 0, v___x_648_);
lean_ctor_set(v___x_649_, 1, v___x_647_);
return v___x_649_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__4(void){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_650_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__3, &lp_LanglandsOracles_Oracles_phi2___closed__3_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__3);
v___x_651_ = lean_unsigned_to_nat(0u);
v___x_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
lean_ctor_set(v___x_652_, 1, v___x_650_);
return v___x_652_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__5(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__0, &lp_LanglandsOracles_Oracles_phi2___closed__0_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__0);
v___x_654_ = lean_int_neg(v___x_653_);
return v___x_654_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__6(void){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_655_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__5, &lp_LanglandsOracles_Oracles_phi2___closed__5_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__5);
v___x_656_ = lean_unsigned_to_nat(2u);
v___x_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
lean_ctor_set(v___x_657_, 1, v___x_655_);
return v___x_657_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__7(void){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_658_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__6, &lp_LanglandsOracles_Oracles_phi2___closed__6_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__6);
v___x_659_ = lean_unsigned_to_nat(2u);
v___x_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
lean_ctor_set(v___x_660_, 1, v___x_658_);
return v___x_660_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__8(void){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_661_ = lean_unsigned_to_nat(1488u);
v___x_662_ = lean_nat_to_int(v___x_661_);
return v___x_662_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__9(void){
_start:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_663_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__8, &lp_LanglandsOracles_Oracles_phi2___closed__8_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__8);
v___x_664_ = lean_unsigned_to_nat(1u);
v___x_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
lean_ctor_set(v___x_665_, 1, v___x_663_);
return v___x_665_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__10(void){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_666_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__9, &lp_LanglandsOracles_Oracles_phi2___closed__9_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__9);
v___x_667_ = lean_unsigned_to_nat(2u);
v___x_668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
lean_ctor_set(v___x_668_, 1, v___x_666_);
return v___x_668_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__11(void){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_669_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__8, &lp_LanglandsOracles_Oracles_phi2___closed__8_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__8);
v___x_670_ = lean_unsigned_to_nat(2u);
v___x_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
lean_ctor_set(v___x_671_, 1, v___x_669_);
return v___x_671_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__12(void){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_672_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__11, &lp_LanglandsOracles_Oracles_phi2___closed__11_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__11);
v___x_673_ = lean_unsigned_to_nat(1u);
v___x_674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
lean_ctor_set(v___x_674_, 1, v___x_672_);
return v___x_674_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__13(void){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_675_ = lean_unsigned_to_nat(162000u);
v___x_676_ = lean_nat_to_int(v___x_675_);
return v___x_676_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__14(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__13, &lp_LanglandsOracles_Oracles_phi2___closed__13_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__13);
v___x_678_ = lean_int_neg(v___x_677_);
return v___x_678_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__15(void){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_679_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__14, &lp_LanglandsOracles_Oracles_phi2___closed__14_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__14);
v___x_680_ = lean_unsigned_to_nat(0u);
v___x_681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
lean_ctor_set(v___x_681_, 1, v___x_679_);
return v___x_681_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__16(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_682_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__15, &lp_LanglandsOracles_Oracles_phi2___closed__15_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__15);
v___x_683_ = lean_unsigned_to_nat(2u);
v___x_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
lean_ctor_set(v___x_684_, 1, v___x_682_);
return v___x_684_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__17(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_685_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__14, &lp_LanglandsOracles_Oracles_phi2___closed__14_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__14);
v___x_686_ = lean_unsigned_to_nat(2u);
v___x_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
lean_ctor_set(v___x_687_, 1, v___x_685_);
return v___x_687_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__18(void){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_688_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__17, &lp_LanglandsOracles_Oracles_phi2___closed__17_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__17);
v___x_689_ = lean_unsigned_to_nat(0u);
v___x_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_690_, 0, v___x_689_);
lean_ctor_set(v___x_690_, 1, v___x_688_);
return v___x_690_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__19(void){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = lean_unsigned_to_nat(40773375u);
v___x_692_ = lean_nat_to_int(v___x_691_);
return v___x_692_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__20(void){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_693_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__19, &lp_LanglandsOracles_Oracles_phi2___closed__19_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__19);
v___x_694_ = lean_unsigned_to_nat(1u);
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
lean_ctor_set(v___x_695_, 1, v___x_693_);
return v___x_695_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__21(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_696_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__20, &lp_LanglandsOracles_Oracles_phi2___closed__20_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__20);
v___x_697_ = lean_unsigned_to_nat(1u);
v___x_698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
lean_ctor_set(v___x_698_, 1, v___x_696_);
return v___x_698_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__22(void){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = lean_cstr_to_nat("8748000000");
v___x_700_ = lean_nat_to_int(v___x_699_);
return v___x_700_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__23(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_701_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__22, &lp_LanglandsOracles_Oracles_phi2___closed__22_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__22);
v___x_702_ = lean_unsigned_to_nat(0u);
v___x_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
lean_ctor_set(v___x_703_, 1, v___x_701_);
return v___x_703_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__24(void){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_704_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__23, &lp_LanglandsOracles_Oracles_phi2___closed__23_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__23);
v___x_705_ = lean_unsigned_to_nat(1u);
v___x_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_705_);
lean_ctor_set(v___x_706_, 1, v___x_704_);
return v___x_706_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__25(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_707_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__22, &lp_LanglandsOracles_Oracles_phi2___closed__22_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__22);
v___x_708_ = lean_unsigned_to_nat(1u);
v___x_709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_709_, 0, v___x_708_);
lean_ctor_set(v___x_709_, 1, v___x_707_);
return v___x_709_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__26(void){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_710_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__25, &lp_LanglandsOracles_Oracles_phi2___closed__25_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__25);
v___x_711_ = lean_unsigned_to_nat(0u);
v___x_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
lean_ctor_set(v___x_712_, 1, v___x_710_);
return v___x_712_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__27(void){
_start:
{
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = lean_cstr_to_nat("157464000000000");
v___x_714_ = lean_nat_to_int(v___x_713_);
return v___x_714_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__28(void){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_715_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__27, &lp_LanglandsOracles_Oracles_phi2___closed__27_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__27);
v___x_716_ = lean_int_neg(v___x_715_);
return v___x_716_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__29(void){
_start:
{
lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_717_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__28, &lp_LanglandsOracles_Oracles_phi2___closed__28_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__28);
v___x_718_ = lean_unsigned_to_nat(0u);
v___x_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_719_, 0, v___x_718_);
lean_ctor_set(v___x_719_, 1, v___x_717_);
return v___x_719_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__30(void){
_start:
{
lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_720_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__29, &lp_LanglandsOracles_Oracles_phi2___closed__29_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__29);
v___x_721_ = lean_unsigned_to_nat(0u);
v___x_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_721_);
lean_ctor_set(v___x_722_, 1, v___x_720_);
return v___x_722_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__31(void){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_723_ = lean_box(0);
v___x_724_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__30, &lp_LanglandsOracles_Oracles_phi2___closed__30_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__30);
v___x_725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_725_, 0, v___x_724_);
lean_ctor_set(v___x_725_, 1, v___x_723_);
return v___x_725_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__32(void){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_726_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__31, &lp_LanglandsOracles_Oracles_phi2___closed__31_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__31);
v___x_727_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__26, &lp_LanglandsOracles_Oracles_phi2___closed__26_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__26);
v___x_728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_728_, 0, v___x_727_);
lean_ctor_set(v___x_728_, 1, v___x_726_);
return v___x_728_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__33(void){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_729_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__32, &lp_LanglandsOracles_Oracles_phi2___closed__32_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__32);
v___x_730_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__24, &lp_LanglandsOracles_Oracles_phi2___closed__24_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__24);
v___x_731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
lean_ctor_set(v___x_731_, 1, v___x_729_);
return v___x_731_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__34(void){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_732_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__33, &lp_LanglandsOracles_Oracles_phi2___closed__33_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__33);
v___x_733_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__21, &lp_LanglandsOracles_Oracles_phi2___closed__21_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__21);
v___x_734_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_734_, 0, v___x_733_);
lean_ctor_set(v___x_734_, 1, v___x_732_);
return v___x_734_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__35(void){
_start:
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_735_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__34, &lp_LanglandsOracles_Oracles_phi2___closed__34_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__34);
v___x_736_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__18, &lp_LanglandsOracles_Oracles_phi2___closed__18_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__18);
v___x_737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
lean_ctor_set(v___x_737_, 1, v___x_735_);
return v___x_737_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__36(void){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_738_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__35, &lp_LanglandsOracles_Oracles_phi2___closed__35_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__35);
v___x_739_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__16, &lp_LanglandsOracles_Oracles_phi2___closed__16_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__16);
v___x_740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_739_);
lean_ctor_set(v___x_740_, 1, v___x_738_);
return v___x_740_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__37(void){
_start:
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_741_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__36, &lp_LanglandsOracles_Oracles_phi2___closed__36_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__36);
v___x_742_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__12, &lp_LanglandsOracles_Oracles_phi2___closed__12_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__12);
v___x_743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_742_);
lean_ctor_set(v___x_743_, 1, v___x_741_);
return v___x_743_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__38(void){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_744_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__37, &lp_LanglandsOracles_Oracles_phi2___closed__37_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__37);
v___x_745_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__10, &lp_LanglandsOracles_Oracles_phi2___closed__10_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__10);
v___x_746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
lean_ctor_set(v___x_746_, 1, v___x_744_);
return v___x_746_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__39(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_747_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__38, &lp_LanglandsOracles_Oracles_phi2___closed__38_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__38);
v___x_748_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__7, &lp_LanglandsOracles_Oracles_phi2___closed__7_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__7);
v___x_749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
lean_ctor_set(v___x_749_, 1, v___x_747_);
return v___x_749_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__40(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_750_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__39, &lp_LanglandsOracles_Oracles_phi2___closed__39_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__39);
v___x_751_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__4, &lp_LanglandsOracles_Oracles_phi2___closed__4_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__4);
v___x_752_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
lean_ctor_set(v___x_752_, 1, v___x_750_);
return v___x_752_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2___closed__41(void){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_753_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__40, &lp_LanglandsOracles_Oracles_phi2___closed__40_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__40);
v___x_754_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__2, &lp_LanglandsOracles_Oracles_phi2___closed__2_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__2);
v___x_755_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_755_, 0, v___x_754_);
lean_ctor_set(v___x_755_, 1, v___x_753_);
return v___x_755_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi2(void){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__41, &lp_LanglandsOracles_Oracles_phi2___closed__41_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__41);
return v___x_756_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__0(void){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_757_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__1, &lp_LanglandsOracles_Oracles_phi2___closed__1_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__1);
v___x_758_ = lean_unsigned_to_nat(4u);
v___x_759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
lean_ctor_set(v___x_759_, 1, v___x_757_);
return v___x_759_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__1(void){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_760_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__0, &lp_LanglandsOracles_Oracles_phi2___closed__0_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__0);
v___x_761_ = lean_unsigned_to_nat(4u);
v___x_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
lean_ctor_set(v___x_762_, 1, v___x_760_);
return v___x_762_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__2(void){
_start:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_763_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__1, &lp_LanglandsOracles_Oracles_phi3___closed__1_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__1);
v___x_764_ = lean_unsigned_to_nat(0u);
v___x_765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
lean_ctor_set(v___x_765_, 1, v___x_763_);
return v___x_765_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__3(void){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_766_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__5, &lp_LanglandsOracles_Oracles_phi2___closed__5_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__5);
v___x_767_ = lean_unsigned_to_nat(3u);
v___x_768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_768_, 0, v___x_767_);
lean_ctor_set(v___x_768_, 1, v___x_766_);
return v___x_768_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__4(void){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_769_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__3, &lp_LanglandsOracles_Oracles_phi3___closed__3_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__3);
v___x_770_ = lean_unsigned_to_nat(3u);
v___x_771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
lean_ctor_set(v___x_771_, 1, v___x_769_);
return v___x_771_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__5(void){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = lean_unsigned_to_nat(2232u);
v___x_773_ = lean_nat_to_int(v___x_772_);
return v___x_773_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__6(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_774_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__5, &lp_LanglandsOracles_Oracles_phi3___closed__5_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__5);
v___x_775_ = lean_unsigned_to_nat(2u);
v___x_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_776_, 0, v___x_775_);
lean_ctor_set(v___x_776_, 1, v___x_774_);
return v___x_776_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__7(void){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_777_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__6, &lp_LanglandsOracles_Oracles_phi3___closed__6_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__6);
v___x_778_ = lean_unsigned_to_nat(3u);
v___x_779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
lean_ctor_set(v___x_779_, 1, v___x_777_);
return v___x_779_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__8(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_780_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__5, &lp_LanglandsOracles_Oracles_phi3___closed__5_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__5);
v___x_781_ = lean_unsigned_to_nat(3u);
v___x_782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_782_, 0, v___x_781_);
lean_ctor_set(v___x_782_, 1, v___x_780_);
return v___x_782_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__9(void){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_783_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__8, &lp_LanglandsOracles_Oracles_phi3___closed__8_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__8);
v___x_784_ = lean_unsigned_to_nat(2u);
v___x_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
lean_ctor_set(v___x_785_, 1, v___x_783_);
return v___x_785_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__10(void){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = lean_unsigned_to_nat(1069956u);
v___x_787_ = lean_nat_to_int(v___x_786_);
return v___x_787_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__11(void){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__10, &lp_LanglandsOracles_Oracles_phi3___closed__10_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__10);
v___x_789_ = lean_int_neg(v___x_788_);
return v___x_789_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__12(void){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_790_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__11, &lp_LanglandsOracles_Oracles_phi3___closed__11_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__11);
v___x_791_ = lean_unsigned_to_nat(1u);
v___x_792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_792_, 0, v___x_791_);
lean_ctor_set(v___x_792_, 1, v___x_790_);
return v___x_792_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__13(void){
_start:
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_793_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__12, &lp_LanglandsOracles_Oracles_phi3___closed__12_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__12);
v___x_794_ = lean_unsigned_to_nat(3u);
v___x_795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_795_, 0, v___x_794_);
lean_ctor_set(v___x_795_, 1, v___x_793_);
return v___x_795_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__14(void){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_796_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__11, &lp_LanglandsOracles_Oracles_phi3___closed__11_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__11);
v___x_797_ = lean_unsigned_to_nat(3u);
v___x_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
lean_ctor_set(v___x_798_, 1, v___x_796_);
return v___x_798_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__15(void){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__14, &lp_LanglandsOracles_Oracles_phi3___closed__14_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__14);
v___x_800_ = lean_unsigned_to_nat(1u);
v___x_801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
lean_ctor_set(v___x_801_, 1, v___x_799_);
return v___x_801_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__16(void){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_802_ = lean_unsigned_to_nat(36864000u);
v___x_803_ = lean_nat_to_int(v___x_802_);
return v___x_803_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__17(void){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_804_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__16, &lp_LanglandsOracles_Oracles_phi3___closed__16_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__16);
v___x_805_ = lean_unsigned_to_nat(0u);
v___x_806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
lean_ctor_set(v___x_806_, 1, v___x_804_);
return v___x_806_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__18(void){
_start:
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_807_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__17, &lp_LanglandsOracles_Oracles_phi3___closed__17_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__17);
v___x_808_ = lean_unsigned_to_nat(3u);
v___x_809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
lean_ctor_set(v___x_809_, 1, v___x_807_);
return v___x_809_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__19(void){
_start:
{
lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_810_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__16, &lp_LanglandsOracles_Oracles_phi3___closed__16_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__16);
v___x_811_ = lean_unsigned_to_nat(3u);
v___x_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
lean_ctor_set(v___x_812_, 1, v___x_810_);
return v___x_812_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__20(void){
_start:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_813_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__19, &lp_LanglandsOracles_Oracles_phi3___closed__19_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__19);
v___x_814_ = lean_unsigned_to_nat(0u);
v___x_815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
lean_ctor_set(v___x_815_, 1, v___x_813_);
return v___x_815_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__21(void){
_start:
{
lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_816_ = lean_unsigned_to_nat(2587918086u);
v___x_817_ = lean_nat_to_int(v___x_816_);
return v___x_817_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__22(void){
_start:
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_818_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__21, &lp_LanglandsOracles_Oracles_phi3___closed__21_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__21);
v___x_819_ = lean_unsigned_to_nat(2u);
v___x_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_820_, 0, v___x_819_);
lean_ctor_set(v___x_820_, 1, v___x_818_);
return v___x_820_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__23(void){
_start:
{
lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_821_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__22, &lp_LanglandsOracles_Oracles_phi3___closed__22_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__22);
v___x_822_ = lean_unsigned_to_nat(2u);
v___x_823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_823_, 0, v___x_822_);
lean_ctor_set(v___x_823_, 1, v___x_821_);
return v___x_823_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__24(void){
_start:
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = lean_cstr_to_nat("8900222976000");
v___x_825_ = lean_nat_to_int(v___x_824_);
return v___x_825_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__25(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_826_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__24, &lp_LanglandsOracles_Oracles_phi3___closed__24_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__24);
v___x_827_ = lean_unsigned_to_nat(1u);
v___x_828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
lean_ctor_set(v___x_828_, 1, v___x_826_);
return v___x_828_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__26(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_829_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__25, &lp_LanglandsOracles_Oracles_phi3___closed__25_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__25);
v___x_830_ = lean_unsigned_to_nat(2u);
v___x_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
lean_ctor_set(v___x_831_, 1, v___x_829_);
return v___x_831_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__27(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_832_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__24, &lp_LanglandsOracles_Oracles_phi3___closed__24_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__24);
v___x_833_ = lean_unsigned_to_nat(2u);
v___x_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_834_, 0, v___x_833_);
lean_ctor_set(v___x_834_, 1, v___x_832_);
return v___x_834_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__28(void){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_835_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__27, &lp_LanglandsOracles_Oracles_phi3___closed__27_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__27);
v___x_836_ = lean_unsigned_to_nat(1u);
v___x_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
lean_ctor_set(v___x_837_, 1, v___x_835_);
return v___x_837_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__29(void){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = lean_cstr_to_nat("452984832000000");
v___x_839_ = lean_nat_to_int(v___x_838_);
return v___x_839_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__30(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_840_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__29, &lp_LanglandsOracles_Oracles_phi3___closed__29_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__29);
v___x_841_ = lean_unsigned_to_nat(0u);
v___x_842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_841_);
lean_ctor_set(v___x_842_, 1, v___x_840_);
return v___x_842_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__31(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_843_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__30, &lp_LanglandsOracles_Oracles_phi3___closed__30_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__30);
v___x_844_ = lean_unsigned_to_nat(2u);
v___x_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
lean_ctor_set(v___x_845_, 1, v___x_843_);
return v___x_845_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__32(void){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_846_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__29, &lp_LanglandsOracles_Oracles_phi3___closed__29_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__29);
v___x_847_ = lean_unsigned_to_nat(2u);
v___x_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
lean_ctor_set(v___x_848_, 1, v___x_846_);
return v___x_848_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__33(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_849_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__32, &lp_LanglandsOracles_Oracles_phi3___closed__32_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__32);
v___x_850_ = lean_unsigned_to_nat(0u);
v___x_851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_851_, 0, v___x_850_);
lean_ctor_set(v___x_851_, 1, v___x_849_);
return v___x_851_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__34(void){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_852_ = lean_cstr_to_nat("770845966336000000");
v___x_853_ = lean_nat_to_int(v___x_852_);
return v___x_853_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__35(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__34, &lp_LanglandsOracles_Oracles_phi3___closed__34_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__34);
v___x_855_ = lean_int_neg(v___x_854_);
return v___x_855_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__36(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_856_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__35, &lp_LanglandsOracles_Oracles_phi3___closed__35_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__35);
v___x_857_ = lean_unsigned_to_nat(1u);
v___x_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_858_, 0, v___x_857_);
lean_ctor_set(v___x_858_, 1, v___x_856_);
return v___x_858_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__37(void){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_859_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__36, &lp_LanglandsOracles_Oracles_phi3___closed__36_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__36);
v___x_860_ = lean_unsigned_to_nat(1u);
v___x_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_861_, 0, v___x_860_);
lean_ctor_set(v___x_861_, 1, v___x_859_);
return v___x_861_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__38(void){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = lean_cstr_to_nat("1855425871872000000000");
return v___x_862_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__39(void){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_863_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__38, &lp_LanglandsOracles_Oracles_phi3___closed__38_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__38);
v___x_864_ = lean_nat_to_int(v___x_863_);
return v___x_864_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__40(void){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_865_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__39, &lp_LanglandsOracles_Oracles_phi3___closed__39_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__39);
v___x_866_ = lean_unsigned_to_nat(0u);
v___x_867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_867_, 0, v___x_866_);
lean_ctor_set(v___x_867_, 1, v___x_865_);
return v___x_867_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__41(void){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_868_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__40, &lp_LanglandsOracles_Oracles_phi3___closed__40_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__40);
v___x_869_ = lean_unsigned_to_nat(1u);
v___x_870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_870_, 0, v___x_869_);
lean_ctor_set(v___x_870_, 1, v___x_868_);
return v___x_870_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__42(void){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_871_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__39, &lp_LanglandsOracles_Oracles_phi3___closed__39_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__39);
v___x_872_ = lean_unsigned_to_nat(1u);
v___x_873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
lean_ctor_set(v___x_873_, 1, v___x_871_);
return v___x_873_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__43(void){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_874_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__42, &lp_LanglandsOracles_Oracles_phi3___closed__42_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__42);
v___x_875_ = lean_unsigned_to_nat(0u);
v___x_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
lean_ctor_set(v___x_876_, 1, v___x_874_);
return v___x_876_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__44(void){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_877_ = lean_box(0);
v___x_878_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__43, &lp_LanglandsOracles_Oracles_phi3___closed__43_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__43);
v___x_879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
lean_ctor_set(v___x_879_, 1, v___x_877_);
return v___x_879_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__45(void){
_start:
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_880_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__44, &lp_LanglandsOracles_Oracles_phi3___closed__44_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__44);
v___x_881_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__41, &lp_LanglandsOracles_Oracles_phi3___closed__41_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__41);
v___x_882_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_882_, 0, v___x_881_);
lean_ctor_set(v___x_882_, 1, v___x_880_);
return v___x_882_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__46(void){
_start:
{
lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_883_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__45, &lp_LanglandsOracles_Oracles_phi3___closed__45_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__45);
v___x_884_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__37, &lp_LanglandsOracles_Oracles_phi3___closed__37_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__37);
v___x_885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_884_);
lean_ctor_set(v___x_885_, 1, v___x_883_);
return v___x_885_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__47(void){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_886_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__46, &lp_LanglandsOracles_Oracles_phi3___closed__46_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__46);
v___x_887_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__33, &lp_LanglandsOracles_Oracles_phi3___closed__33_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__33);
v___x_888_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
lean_ctor_set(v___x_888_, 1, v___x_886_);
return v___x_888_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__48(void){
_start:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_889_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__47, &lp_LanglandsOracles_Oracles_phi3___closed__47_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__47);
v___x_890_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__31, &lp_LanglandsOracles_Oracles_phi3___closed__31_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__31);
v___x_891_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
lean_ctor_set(v___x_891_, 1, v___x_889_);
return v___x_891_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__49(void){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_892_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__48, &lp_LanglandsOracles_Oracles_phi3___closed__48_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__48);
v___x_893_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__28, &lp_LanglandsOracles_Oracles_phi3___closed__28_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__28);
v___x_894_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_894_, 0, v___x_893_);
lean_ctor_set(v___x_894_, 1, v___x_892_);
return v___x_894_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__50(void){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_895_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__49, &lp_LanglandsOracles_Oracles_phi3___closed__49_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__49);
v___x_896_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__26, &lp_LanglandsOracles_Oracles_phi3___closed__26_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__26);
v___x_897_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_897_, 0, v___x_896_);
lean_ctor_set(v___x_897_, 1, v___x_895_);
return v___x_897_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__51(void){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_898_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__50, &lp_LanglandsOracles_Oracles_phi3___closed__50_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__50);
v___x_899_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__23, &lp_LanglandsOracles_Oracles_phi3___closed__23_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__23);
v___x_900_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
lean_ctor_set(v___x_900_, 1, v___x_898_);
return v___x_900_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__52(void){
_start:
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_901_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__51, &lp_LanglandsOracles_Oracles_phi3___closed__51_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__51);
v___x_902_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__20, &lp_LanglandsOracles_Oracles_phi3___closed__20_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__20);
v___x_903_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
lean_ctor_set(v___x_903_, 1, v___x_901_);
return v___x_903_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__53(void){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_904_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__52, &lp_LanglandsOracles_Oracles_phi3___closed__52_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__52);
v___x_905_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__18, &lp_LanglandsOracles_Oracles_phi3___closed__18_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__18);
v___x_906_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_906_, 0, v___x_905_);
lean_ctor_set(v___x_906_, 1, v___x_904_);
return v___x_906_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__54(void){
_start:
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_907_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__53, &lp_LanglandsOracles_Oracles_phi3___closed__53_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__53);
v___x_908_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__15, &lp_LanglandsOracles_Oracles_phi3___closed__15_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__15);
v___x_909_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
lean_ctor_set(v___x_909_, 1, v___x_907_);
return v___x_909_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__55(void){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_910_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__54, &lp_LanglandsOracles_Oracles_phi3___closed__54_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__54);
v___x_911_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__13, &lp_LanglandsOracles_Oracles_phi3___closed__13_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__13);
v___x_912_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
lean_ctor_set(v___x_912_, 1, v___x_910_);
return v___x_912_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__56(void){
_start:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_913_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__55, &lp_LanglandsOracles_Oracles_phi3___closed__55_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__55);
v___x_914_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__9, &lp_LanglandsOracles_Oracles_phi3___closed__9_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__9);
v___x_915_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_914_);
lean_ctor_set(v___x_915_, 1, v___x_913_);
return v___x_915_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__57(void){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_916_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__56, &lp_LanglandsOracles_Oracles_phi3___closed__56_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__56);
v___x_917_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__7, &lp_LanglandsOracles_Oracles_phi3___closed__7_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__7);
v___x_918_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_917_);
lean_ctor_set(v___x_918_, 1, v___x_916_);
return v___x_918_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__58(void){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_919_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__57, &lp_LanglandsOracles_Oracles_phi3___closed__57_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__57);
v___x_920_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__4, &lp_LanglandsOracles_Oracles_phi3___closed__4_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__4);
v___x_921_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
lean_ctor_set(v___x_921_, 1, v___x_919_);
return v___x_921_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__59(void){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_922_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__58, &lp_LanglandsOracles_Oracles_phi3___closed__58_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__58);
v___x_923_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__2, &lp_LanglandsOracles_Oracles_phi3___closed__2_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__2);
v___x_924_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
lean_ctor_set(v___x_924_, 1, v___x_922_);
return v___x_924_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3___closed__60(void){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_925_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__59, &lp_LanglandsOracles_Oracles_phi3___closed__59_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__59);
v___x_926_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__0, &lp_LanglandsOracles_Oracles_phi3___closed__0_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__0);
v___x_927_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_927_, 0, v___x_926_);
lean_ctor_set(v___x_927_, 1, v___x_925_);
return v___x_927_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_phi3(void){
_start:
{
lean_object* v___x_928_; 
v___x_928_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi3___closed__60, &lp_LanglandsOracles_Oracles_phi3___closed__60_once, _init_lp_LanglandsOracles_Oracles_phi3___closed__60);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_phiAt_spec__0(lean_object* v_k_929_, lean_object* v_p_930_, lean_object* v_c_931_, lean_object* v_j_932_, lean_object* v_x_933_, lean_object* v_x_934_){
_start:
{
if (lean_obj_tag(v_x_934_) == 0)
{
lean_dec_ref(v_j_932_);
lean_dec(v_p_930_);
return v_x_933_;
}
else
{
lean_object* v_head_935_; lean_object* v_snd_936_; lean_object* v_tail_937_; lean_object* v_fst_938_; lean_object* v_fst_939_; lean_object* v_snd_940_; uint8_t v___x_941_; 
v_head_935_ = lean_ctor_get(v_x_934_, 0);
v_snd_936_ = lean_ctor_get(v_head_935_, 1);
v_tail_937_ = lean_ctor_get(v_x_934_, 1);
v_fst_938_ = lean_ctor_get(v_head_935_, 0);
v_fst_939_ = lean_ctor_get(v_snd_936_, 0);
v_snd_940_ = lean_ctor_get(v_snd_936_, 1);
v___x_941_ = lean_nat_dec_eq(v_fst_939_, v_k_929_);
if (v___x_941_ == 0)
{
v_x_934_ = v_tail_937_;
goto _start;
}
else
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
lean_inc(v_p_930_);
v___x_943_ = lp_LanglandsOracles_Oracles_Fp2_ofInt(v_p_930_, v_snd_940_);
lean_inc_ref(v_j_932_);
v___x_944_ = lp_LanglandsOracles_Oracles_Fp2_pow(v_p_930_, v_c_931_, v_j_932_, v_fst_938_);
v___x_945_ = lp_LanglandsOracles_Oracles_Fp2_mul(v_p_930_, v_c_931_, v___x_943_, v___x_944_);
lean_dec_ref(v___x_943_);
v___x_946_ = lp_LanglandsOracles_Oracles_Fp2_add(v_p_930_, v_x_933_, v___x_945_);
lean_dec_ref(v_x_933_);
v_x_933_ = v___x_946_;
v_x_934_ = v_tail_937_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_phiAt_spec__0___boxed(lean_object* v_k_948_, lean_object* v_p_949_, lean_object* v_c_950_, lean_object* v_j_951_, lean_object* v_x_952_, lean_object* v_x_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = lp_LanglandsOracles_List_foldl___at___00Oracles_phiAt_spec__0(v_k_948_, v_p_949_, v_c_950_, v_j_951_, v_x_952_, v_x_953_);
lean_dec(v_x_953_);
lean_dec(v_c_950_);
lean_dec(v_k_948_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_phiAt_spec__1(lean_object* v_p_955_, lean_object* v_c_956_, lean_object* v_j_957_, lean_object* v_phi_958_, lean_object* v_a_959_, lean_object* v_a_960_){
_start:
{
if (lean_obj_tag(v_a_959_) == 0)
{
lean_object* v___x_961_; 
lean_dec_ref(v_j_957_);
lean_dec(v_p_955_);
v___x_961_ = l_List_reverse___redArg(v_a_960_);
return v___x_961_;
}
else
{
lean_object* v_head_962_; lean_object* v_tail_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_973_; 
v_head_962_ = lean_ctor_get(v_a_959_, 0);
v_tail_963_ = lean_ctor_get(v_a_959_, 1);
v_isSharedCheck_973_ = !lean_is_exclusive(v_a_959_);
if (v_isSharedCheck_973_ == 0)
{
v___x_965_ = v_a_959_;
v_isShared_966_ = v_isSharedCheck_973_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_tail_963_);
lean_inc(v_head_962_);
lean_dec(v_a_959_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_973_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_970_; 
v___x_967_ = lp_LanglandsOracles_Oracles_Fp2_zero(v_p_955_);
lean_inc_ref(v_j_957_);
lean_inc(v_p_955_);
v___x_968_ = lp_LanglandsOracles_List_foldl___at___00Oracles_phiAt_spec__0(v_head_962_, v_p_955_, v_c_956_, v_j_957_, v___x_967_, v_phi_958_);
lean_dec(v_head_962_);
if (v_isShared_966_ == 0)
{
lean_ctor_set(v___x_965_, 1, v_a_960_);
lean_ctor_set(v___x_965_, 0, v___x_968_);
v___x_970_ = v___x_965_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v___x_968_);
lean_ctor_set(v_reuseFailAlloc_972_, 1, v_a_960_);
v___x_970_ = v_reuseFailAlloc_972_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
v_a_959_ = v_tail_963_;
v_a_960_ = v___x_970_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_phiAt_spec__1___boxed(lean_object* v_p_974_, lean_object* v_c_975_, lean_object* v_j_976_, lean_object* v_phi_977_, lean_object* v_a_978_, lean_object* v_a_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_phiAt_spec__1(v_p_974_, v_c_975_, v_j_976_, v_phi_977_, v_a_978_, v_a_979_);
lean_dec(v_phi_977_);
lean_dec(v_c_975_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_phiAt(lean_object* v_p_981_, lean_object* v_c_982_, lean_object* v_ell_983_, lean_object* v_phi_984_, lean_object* v_j_985_){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_986_ = lean_unsigned_to_nat(2u);
v___x_987_ = lean_nat_add(v_ell_983_, v___x_986_);
v___x_988_ = l_List_range(v___x_987_);
v___x_989_ = lean_box(0);
v___x_990_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_phiAt_spec__1(v_p_981_, v_c_982_, v_j_985_, v_phi_984_, v___x_988_, v___x_989_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_phiAt___boxed(lean_object* v_p_991_, lean_object* v_c_992_, lean_object* v_ell_993_, lean_object* v_phi_994_, lean_object* v_j_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = lp_LanglandsOracles_Oracles_phiAt(v_p_991_, v_c_992_, v_ell_993_, v_phi_994_, v_j_995_);
lean_dec(v_phi_994_);
lean_dec(v_ell_993_);
lean_dec(v_c_992_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_brandtLean_spec__0_spec__0(lean_object* v_p_997_, lean_object* v_c_998_, lean_object* v_f_999_, lean_object* v_a_1000_, lean_object* v_a_1001_){
_start:
{
if (lean_obj_tag(v_a_1000_) == 0)
{
lean_object* v___x_1002_; 
lean_dec(v_f_999_);
v___x_1002_ = l_List_reverse___redArg(v_a_1001_);
return v___x_1002_;
}
else
{
lean_object* v_head_1003_; lean_object* v_tail_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1014_; 
v_head_1003_ = lean_ctor_get(v_a_1000_, 0);
v_tail_1004_ = lean_ctor_get(v_a_1000_, 1);
v_isSharedCheck_1014_ = !lean_is_exclusive(v_a_1000_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1006_ = v_a_1000_;
v_isShared_1007_ = v_isSharedCheck_1014_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_tail_1004_);
lean_inc(v_head_1003_);
lean_dec(v_a_1000_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1014_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1011_; 
lean_inc(v_f_999_);
v___x_1008_ = lp_LanglandsOracles_Oracles_Fp2_multiplicity(v_p_997_, v_c_998_, v_f_999_, v_head_1003_);
v___x_1009_ = lean_nat_to_int(v___x_1008_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 1, v_a_1001_);
lean_ctor_set(v___x_1006_, 0, v___x_1009_);
v___x_1011_ = v___x_1006_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v___x_1009_);
lean_ctor_set(v_reuseFailAlloc_1013_, 1, v_a_1001_);
v___x_1011_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
v_a_1000_ = v_tail_1004_;
v_a_1001_ = v___x_1011_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_brandtLean_spec__0_spec__0___boxed(lean_object* v_p_1015_, lean_object* v_c_1016_, lean_object* v_f_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_brandtLean_spec__0_spec__0(v_p_1015_, v_c_1016_, v_f_1017_, v_a_1018_, v_a_1019_);
lean_dec(v_c_1016_);
lean_dec(v_p_1015_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtLean_spec__0(lean_object* v_p_1021_, lean_object* v_c_1022_, lean_object* v_f_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_){
_start:
{
if (lean_obj_tag(v_a_1024_) == 0)
{
lean_object* v___x_1026_; 
lean_dec(v_f_1023_);
v___x_1026_ = l_List_reverse___redArg(v_a_1025_);
return v___x_1026_;
}
else
{
lean_object* v_head_1027_; lean_object* v_tail_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1038_; 
v_head_1027_ = lean_ctor_get(v_a_1024_, 0);
v_tail_1028_ = lean_ctor_get(v_a_1024_, 1);
v_isSharedCheck_1038_ = !lean_is_exclusive(v_a_1024_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1030_ = v_a_1024_;
v_isShared_1031_ = v_isSharedCheck_1038_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_tail_1028_);
lean_inc(v_head_1027_);
lean_dec(v_a_1024_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1038_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1035_; 
lean_inc(v_f_1023_);
v___x_1032_ = lp_LanglandsOracles_Oracles_Fp2_multiplicity(v_p_1021_, v_c_1022_, v_f_1023_, v_head_1027_);
v___x_1033_ = lean_nat_to_int(v___x_1032_);
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 1, v_a_1025_);
lean_ctor_set(v___x_1030_, 0, v___x_1033_);
v___x_1035_ = v___x_1030_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1033_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v_a_1025_);
v___x_1035_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
lean_object* v___x_1036_; 
v___x_1036_ = lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_brandtLean_spec__0_spec__0(v_p_1021_, v_c_1022_, v_f_1023_, v_tail_1028_, v___x_1035_);
return v___x_1036_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtLean_spec__0___boxed(lean_object* v_p_1039_, lean_object* v_c_1040_, lean_object* v_f_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtLean_spec__0(v_p_1039_, v_c_1040_, v_f_1041_, v_a_1042_, v_a_1043_);
lean_dec(v_c_1040_);
lean_dec(v_p_1039_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtLean_spec__1(lean_object* v_p_1045_, lean_object* v_c_1046_, lean_object* v_ell_1047_, lean_object* v___y_1048_, lean_object* v_js_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_){
_start:
{
if (lean_obj_tag(v_a_1050_) == 0)
{
lean_object* v___x_1052_; 
lean_dec(v_js_1049_);
lean_dec(v_p_1045_);
v___x_1052_ = l_List_reverse___redArg(v_a_1051_);
return v___x_1052_;
}
else
{
lean_object* v_head_1053_; lean_object* v_tail_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1065_; 
v_head_1053_ = lean_ctor_get(v_a_1050_, 0);
v_tail_1054_ = lean_ctor_get(v_a_1050_, 1);
v_isSharedCheck_1065_ = !lean_is_exclusive(v_a_1050_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1056_ = v_a_1050_;
v_isShared_1057_ = v_isSharedCheck_1065_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_tail_1054_);
lean_inc(v_head_1053_);
lean_dec(v_a_1050_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1065_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v_f_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1062_; 
lean_inc(v_p_1045_);
v_f_1058_ = lp_LanglandsOracles_Oracles_phiAt(v_p_1045_, v_c_1046_, v_ell_1047_, v___y_1048_, v_head_1053_);
v___x_1059_ = lean_box(0);
lean_inc(v_js_1049_);
v___x_1060_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtLean_spec__0(v_p_1045_, v_c_1046_, v_f_1058_, v_js_1049_, v___x_1059_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 1, v_a_1051_);
lean_ctor_set(v___x_1056_, 0, v___x_1060_);
v___x_1062_ = v___x_1056_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v___x_1060_);
lean_ctor_set(v_reuseFailAlloc_1064_, 1, v_a_1051_);
v___x_1062_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
v_a_1050_ = v_tail_1054_;
v_a_1051_ = v___x_1062_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtLean_spec__1___boxed(lean_object* v_p_1066_, lean_object* v_c_1067_, lean_object* v_ell_1068_, lean_object* v___y_1069_, lean_object* v_js_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtLean_spec__1(v_p_1066_, v_c_1067_, v_ell_1068_, v___y_1069_, v_js_1070_, v_a_1071_, v_a_1072_);
lean_dec(v___y_1069_);
lean_dec(v_ell_1068_);
lean_dec(v_c_1067_);
return v_res_1073_;
}
}
static lean_object* _init_lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1074_ = lean_unsigned_to_nat(0u);
v___x_1075_ = lean_nat_to_int(v___x_1074_);
return v___x_1075_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3(lean_object* v_ell_1076_, lean_object* v_x_1077_){
_start:
{
if (lean_obj_tag(v_x_1077_) == 0)
{
uint8_t v___x_1078_; 
lean_dec(v_ell_1076_);
v___x_1078_ = 1;
return v___x_1078_;
}
else
{
lean_object* v_head_1079_; lean_object* v_tail_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; uint8_t v___x_1086_; 
v_head_1079_ = lean_ctor_get(v_x_1077_, 0);
v_tail_1080_ = lean_ctor_get(v_x_1077_, 1);
v___x_1081_ = lean_obj_once(&lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3___closed__0, &lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3___closed__0_once, _init_lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3___closed__0);
v___x_1082_ = lp_LanglandsOracles_List_foldl___at___00Oracles_IMat_trace_spec__1(v___x_1081_, v_head_1079_);
lean_inc(v_ell_1076_);
v___x_1083_ = lean_nat_to_int(v_ell_1076_);
v___x_1084_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__0, &lp_LanglandsOracles_Oracles_phi2___closed__0_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__0);
v___x_1085_ = lean_int_add(v___x_1083_, v___x_1084_);
lean_dec(v___x_1083_);
v___x_1086_ = lean_int_dec_eq(v___x_1082_, v___x_1085_);
lean_dec(v___x_1085_);
lean_dec(v___x_1082_);
if (v___x_1086_ == 0)
{
lean_dec(v_ell_1076_);
return v___x_1086_;
}
else
{
v_x_1077_ = v_tail_1080_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3___boxed(lean_object* v_ell_1088_, lean_object* v_x_1089_){
_start:
{
uint8_t v_res_1090_; lean_object* v_r_1091_; 
v_res_1090_ = lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3(v_ell_1088_, v_x_1089_);
lean_dec(v_x_1089_);
v_r_1091_ = lean_box(v_res_1090_);
return v_r_1091_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_brandtLean_spec__2(lean_object* v_ell_1092_, lean_object* v_x_1093_){
_start:
{
if (lean_obj_tag(v_x_1093_) == 0)
{
uint8_t v___x_1094_; 
lean_dec(v_ell_1092_);
v___x_1094_ = 1;
return v___x_1094_;
}
else
{
lean_object* v_head_1095_; lean_object* v_tail_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; uint8_t v___x_1102_; 
v_head_1095_ = lean_ctor_get(v_x_1093_, 0);
v_tail_1096_ = lean_ctor_get(v_x_1093_, 1);
v___x_1097_ = lean_obj_once(&lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3___closed__0, &lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3___closed__0_once, _init_lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3___closed__0);
v___x_1098_ = lp_LanglandsOracles_List_foldl___at___00Oracles_IMat_trace_spec__1(v___x_1097_, v_head_1095_);
lean_inc(v_ell_1092_);
v___x_1099_ = lean_nat_to_int(v_ell_1092_);
v___x_1100_ = lean_obj_once(&lp_LanglandsOracles_Oracles_phi2___closed__0, &lp_LanglandsOracles_Oracles_phi2___closed__0_once, _init_lp_LanglandsOracles_Oracles_phi2___closed__0);
v___x_1101_ = lean_int_add(v___x_1099_, v___x_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_int_dec_eq(v___x_1098_, v___x_1101_);
lean_dec(v___x_1101_);
lean_dec(v___x_1098_);
if (v___x_1102_ == 0)
{
lean_dec(v_ell_1092_);
return v___x_1102_;
}
else
{
uint8_t v___x_1103_; 
v___x_1103_ = lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtLean_spec__2_spec__3(v_ell_1092_, v_tail_1096_);
return v___x_1103_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_brandtLean_spec__2___boxed(lean_object* v_ell_1104_, lean_object* v_x_1105_){
_start:
{
uint8_t v_res_1106_; lean_object* v_r_1107_; 
v_res_1106_ = lp_LanglandsOracles_List_all___at___00Oracles_brandtLean_spec__2(v_ell_1104_, v_x_1105_);
lean_dec(v_x_1105_);
v_r_1107_ = lean_box(v_res_1106_);
return v_r_1107_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_brandtLean(lean_object* v_p_1108_, lean_object* v_ell_1109_){
_start:
{
lean_object* v_c_1110_; lean_object* v_js_1111_; lean_object* v___y_1113_; lean_object* v___x_1119_; uint8_t v___x_1120_; 
lean_inc_n(v_p_1108_, 2);
v_c_1110_ = lp_LanglandsOracles_Oracles_Fp2_nonResidue(v_p_1108_);
v_js_1111_ = lp_LanglandsOracles_Oracles_supersingularJ(v_p_1108_);
v___x_1119_ = lean_unsigned_to_nat(2u);
v___x_1120_ = lean_nat_dec_eq(v_ell_1109_, v___x_1119_);
if (v___x_1120_ == 0)
{
lean_object* v___x_1121_; 
v___x_1121_ = lp_LanglandsOracles_Oracles_phi3;
v___y_1113_ = v___x_1121_;
goto v___jp_1112_;
}
else
{
lean_object* v___x_1122_; 
v___x_1122_ = lp_LanglandsOracles_Oracles_phi2;
v___y_1113_ = v___x_1122_;
goto v___jp_1112_;
}
v___jp_1112_:
{
lean_object* v___x_1114_; lean_object* v_rows_1115_; uint8_t v___x_1116_; 
v___x_1114_ = lean_box(0);
lean_inc(v_js_1111_);
v_rows_1115_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtLean_spec__1(v_p_1108_, v_c_1110_, v_ell_1109_, v___y_1113_, v_js_1111_, v_js_1111_, v___x_1114_);
lean_dec(v_c_1110_);
v___x_1116_ = lp_LanglandsOracles_List_all___at___00Oracles_brandtLean_spec__2(v_ell_1109_, v_rows_1115_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; 
lean_dec(v_rows_1115_);
v___x_1117_ = lean_box(0);
return v___x_1117_;
}
else
{
lean_object* v___x_1118_; 
v___x_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1118_, 0, v_rows_1115_);
return v___x_1118_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_insertEverywhere_spec__0(lean_object* v_head_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_){
_start:
{
if (lean_obj_tag(v_a_1124_) == 0)
{
lean_object* v___x_1126_; 
lean_dec(v_head_1123_);
v___x_1126_ = l_List_reverse___redArg(v_a_1125_);
return v___x_1126_;
}
else
{
lean_object* v_head_1127_; lean_object* v_tail_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1137_; 
v_head_1127_ = lean_ctor_get(v_a_1124_, 0);
v_tail_1128_ = lean_ctor_get(v_a_1124_, 1);
v_isSharedCheck_1137_ = !lean_is_exclusive(v_a_1124_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1130_ = v_a_1124_;
v_isShared_1131_ = v_isSharedCheck_1137_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_tail_1128_);
lean_inc(v_head_1127_);
lean_dec(v_a_1124_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1137_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
lean_inc(v_head_1123_);
if (v_isShared_1131_ == 0)
{
lean_ctor_set(v___x_1130_, 1, v_head_1127_);
lean_ctor_set(v___x_1130_, 0, v_head_1123_);
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_head_1123_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v_head_1127_);
v___x_1133_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1133_);
lean_ctor_set(v___x_1134_, 1, v_a_1125_);
v_a_1124_ = v_tail_1128_;
v_a_1125_ = v___x_1134_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_insertEverywhere(lean_object* v_x_1138_, lean_object* v_x_1139_){
_start:
{
if (lean_obj_tag(v_x_1139_) == 0)
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1140_, 0, v_x_1138_);
lean_ctor_set(v___x_1140_, 1, v_x_1139_);
v___x_1141_ = lean_box(0);
v___x_1142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1140_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
return v___x_1142_;
}
else
{
lean_object* v_head_1143_; lean_object* v_tail_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v_head_1143_ = lean_ctor_get(v_x_1139_, 0);
lean_inc(v_head_1143_);
v_tail_1144_ = lean_ctor_get(v_x_1139_, 1);
lean_inc(v_tail_1144_);
lean_inc(v_x_1138_);
v___x_1145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1145_, 0, v_x_1138_);
lean_ctor_set(v___x_1145_, 1, v_x_1139_);
v___x_1146_ = lp_LanglandsOracles_Oracles_insertEverywhere(v_x_1138_, v_tail_1144_);
v___x_1147_ = lean_box(0);
v___x_1148_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_insertEverywhere_spec__0(v_head_1143_, v___x_1146_, v___x_1147_);
v___x_1149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1145_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
return v___x_1149_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_permutations_spec__0(lean_object* v_head_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_){
_start:
{
if (lean_obj_tag(v_a_1151_) == 0)
{
lean_object* v___x_1153_; 
lean_dec(v_head_1150_);
v___x_1153_ = lean_array_to_list(v_a_1152_);
return v___x_1153_;
}
else
{
lean_object* v_head_1154_; lean_object* v_tail_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v_head_1154_ = lean_ctor_get(v_a_1151_, 0);
lean_inc(v_head_1154_);
v_tail_1155_ = lean_ctor_get(v_a_1151_, 1);
lean_inc(v_tail_1155_);
lean_dec_ref_known(v_a_1151_, 2);
lean_inc(v_head_1150_);
v___x_1156_ = lp_LanglandsOracles_Oracles_insertEverywhere(v_head_1150_, v_head_1154_);
v___x_1157_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1152_, v___x_1156_);
v_a_1151_ = v_tail_1155_;
v_a_1152_ = v___x_1157_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_permutations(lean_object* v_x_1161_){
_start:
{
if (lean_obj_tag(v_x_1161_) == 0)
{
lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1162_ = lean_box(0);
v___x_1163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1163_, 0, v_x_1161_);
lean_ctor_set(v___x_1163_, 1, v___x_1162_);
return v___x_1163_;
}
else
{
lean_object* v_head_1164_; lean_object* v_tail_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v_head_1164_ = lean_ctor_get(v_x_1161_, 0);
lean_inc(v_head_1164_);
v_tail_1165_ = lean_ctor_get(v_x_1161_, 1);
lean_inc(v_tail_1165_);
lean_dec_ref_known(v_x_1161_, 2);
v___x_1166_ = lp_LanglandsOracles_Oracles_permutations(v_tail_1165_);
v___x_1167_ = ((lean_object*)(lp_LanglandsOracles_Oracles_permutations___closed__0));
v___x_1168_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_permutations_spec__0(v_head_1164_, v___x_1166_, v___x_1167_);
return v___x_1168_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_relabel_spec__0(lean_object* v_m_1169_, lean_object* v_i_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_){
_start:
{
if (lean_obj_tag(v_a_1171_) == 0)
{
lean_object* v___x_1173_; 
lean_dec(v_i_1170_);
v___x_1173_ = l_List_reverse___redArg(v_a_1172_);
return v___x_1173_;
}
else
{
lean_object* v_head_1174_; lean_object* v_tail_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1187_; 
v_head_1174_ = lean_ctor_get(v_a_1171_, 0);
v_tail_1175_ = lean_ctor_get(v_a_1171_, 1);
v_isSharedCheck_1187_ = !lean_is_exclusive(v_a_1171_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1177_ = v_a_1171_;
v_isShared_1178_ = v_isSharedCheck_1187_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_tail_1175_);
lean_inc(v_head_1174_);
lean_dec(v_a_1171_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1187_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1184_; 
v___x_1179_ = lean_box(0);
v___x_1180_ = l_Int_instInhabited;
lean_inc(v_i_1170_);
v___x_1181_ = l_List_get_x21Internal___redArg(v___x_1179_, v_m_1169_, v_i_1170_);
v___x_1182_ = l_List_get_x21Internal___redArg(v___x_1180_, v___x_1181_, v_head_1174_);
lean_dec(v___x_1181_);
if (v_isShared_1178_ == 0)
{
lean_ctor_set(v___x_1177_, 1, v_a_1172_);
lean_ctor_set(v___x_1177_, 0, v___x_1182_);
v___x_1184_ = v___x_1177_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v___x_1182_);
lean_ctor_set(v_reuseFailAlloc_1186_, 1, v_a_1172_);
v___x_1184_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
v_a_1171_ = v_tail_1175_;
v_a_1172_ = v___x_1184_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_relabel_spec__0___boxed(lean_object* v_m_1188_, lean_object* v_i_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_relabel_spec__0(v_m_1188_, v_i_1189_, v_a_1190_, v_a_1191_);
lean_dec(v_m_1188_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_relabel_spec__1(lean_object* v_m_1193_, lean_object* v_00_u03c3_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_){
_start:
{
if (lean_obj_tag(v_a_1195_) == 0)
{
lean_object* v___x_1197_; 
lean_dec(v_00_u03c3_1194_);
v___x_1197_ = l_List_reverse___redArg(v_a_1196_);
return v___x_1197_;
}
else
{
lean_object* v_head_1198_; lean_object* v_tail_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1209_; 
v_head_1198_ = lean_ctor_get(v_a_1195_, 0);
v_tail_1199_ = lean_ctor_get(v_a_1195_, 1);
v_isSharedCheck_1209_ = !lean_is_exclusive(v_a_1195_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1201_ = v_a_1195_;
v_isShared_1202_ = v_isSharedCheck_1209_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_tail_1199_);
lean_inc(v_head_1198_);
lean_dec(v_a_1195_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1209_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1206_; 
v___x_1203_ = lean_box(0);
lean_inc(v_00_u03c3_1194_);
v___x_1204_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_relabel_spec__0(v_m_1193_, v_head_1198_, v_00_u03c3_1194_, v___x_1203_);
if (v_isShared_1202_ == 0)
{
lean_ctor_set(v___x_1201_, 1, v_a_1196_);
lean_ctor_set(v___x_1201_, 0, v___x_1204_);
v___x_1206_ = v___x_1201_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___x_1204_);
lean_ctor_set(v_reuseFailAlloc_1208_, 1, v_a_1196_);
v___x_1206_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
v_a_1195_ = v_tail_1199_;
v_a_1196_ = v___x_1206_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_relabel_spec__1___boxed(lean_object* v_m_1210_, lean_object* v_00_u03c3_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_relabel_spec__1(v_m_1210_, v_00_u03c3_1211_, v_a_1212_, v_a_1213_);
lean_dec(v_m_1210_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_relabel(lean_object* v_00_u03c3_1215_, lean_object* v_m_1216_){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1217_ = lean_box(0);
lean_inc(v_00_u03c3_1215_);
v___x_1218_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_relabel_spec__1(v_m_1216_, v_00_u03c3_1215_, v_00_u03c3_1215_, v___x_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_relabel___boxed(lean_object* v_00_u03c3_1219_, lean_object* v_m_1220_){
_start:
{
lean_object* v_res_1221_; 
v_res_1221_ = lp_LanglandsOracles_Oracles_relabel(v_00_u03c3_1219_, v_m_1220_);
lean_dec(v_m_1220_);
return v_res_1221_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__0(lean_object* v_x_1222_){
_start:
{
if (lean_obj_tag(v_x_1222_) == 0)
{
uint8_t v___x_1223_; 
v___x_1223_ = 0;
return v___x_1223_;
}
else
{
lean_object* v_head_1224_; lean_object* v_tail_1225_; lean_object* v_fst_1226_; lean_object* v___x_1227_; uint8_t v___x_1228_; 
v_head_1224_ = lean_ctor_get(v_x_1222_, 0);
v_tail_1225_ = lean_ctor_get(v_x_1222_, 1);
v_fst_1226_ = lean_ctor_get(v_head_1224_, 0);
v___x_1227_ = lean_unsigned_to_nat(2u);
v___x_1228_ = lean_nat_dec_eq(v_fst_1226_, v___x_1227_);
if (v___x_1228_ == 0)
{
v_x_1222_ = v_tail_1225_;
goto _start;
}
else
{
return v___x_1228_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__0___boxed(lean_object* v_x_1230_){
_start:
{
uint8_t v_res_1231_; lean_object* v_r_1232_; 
v_res_1231_ = lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__0(v_x_1230_);
lean_dec(v_x_1230_);
v_r_1232_ = lean_box(v_res_1231_);
return v_r_1232_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__1(lean_object* v_x_1233_){
_start:
{
if (lean_obj_tag(v_x_1233_) == 0)
{
uint8_t v___x_1234_; 
v___x_1234_ = 0;
return v___x_1234_;
}
else
{
lean_object* v_head_1235_; lean_object* v_tail_1236_; lean_object* v_fst_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; 
v_head_1235_ = lean_ctor_get(v_x_1233_, 0);
v_tail_1236_ = lean_ctor_get(v_x_1233_, 1);
v_fst_1237_ = lean_ctor_get(v_head_1235_, 0);
v___x_1238_ = lean_unsigned_to_nat(3u);
v___x_1239_ = lean_nat_dec_eq(v_fst_1237_, v___x_1238_);
if (v___x_1239_ == 0)
{
v_x_1233_ = v_tail_1236_;
goto _start;
}
else
{
return v___x_1239_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__1___boxed(lean_object* v_x_1241_){
_start:
{
uint8_t v_res_1242_; lean_object* v_r_1243_; 
v_res_1242_ = lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__1(v_x_1241_);
lean_dec(v_x_1241_);
v_r_1243_ = lean_box(v_res_1242_);
return v_r_1243_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_beq___at___00List_beq___at___00Oracles_isogenyGraphCertified_spec__2_spec__2(lean_object* v_x_1244_, lean_object* v_x_1245_){
_start:
{
if (lean_obj_tag(v_x_1244_) == 0)
{
if (lean_obj_tag(v_x_1245_) == 0)
{
uint8_t v___x_1246_; 
v___x_1246_ = 1;
return v___x_1246_;
}
else
{
uint8_t v___x_1247_; 
v___x_1247_ = 0;
return v___x_1247_;
}
}
else
{
if (lean_obj_tag(v_x_1245_) == 0)
{
uint8_t v___x_1248_; 
v___x_1248_ = 0;
return v___x_1248_;
}
else
{
lean_object* v_head_1249_; lean_object* v_tail_1250_; lean_object* v_head_1251_; lean_object* v_tail_1252_; uint8_t v___x_1253_; 
v_head_1249_ = lean_ctor_get(v_x_1244_, 0);
v_tail_1250_ = lean_ctor_get(v_x_1244_, 1);
v_head_1251_ = lean_ctor_get(v_x_1245_, 0);
v_tail_1252_ = lean_ctor_get(v_x_1245_, 1);
v___x_1253_ = lean_int_dec_eq(v_head_1249_, v_head_1251_);
if (v___x_1253_ == 0)
{
return v___x_1253_;
}
else
{
v_x_1244_ = v_tail_1250_;
v_x_1245_ = v_tail_1252_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_beq___at___00List_beq___at___00Oracles_isogenyGraphCertified_spec__2_spec__2___boxed(lean_object* v_x_1255_, lean_object* v_x_1256_){
_start:
{
uint8_t v_res_1257_; lean_object* v_r_1258_; 
v_res_1257_ = lp_LanglandsOracles_List_beq___at___00List_beq___at___00Oracles_isogenyGraphCertified_spec__2_spec__2(v_x_1255_, v_x_1256_);
lean_dec(v_x_1256_);
lean_dec(v_x_1255_);
v_r_1258_ = lean_box(v_res_1257_);
return v_r_1258_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_beq___at___00Oracles_isogenyGraphCertified_spec__2(lean_object* v_x_1259_, lean_object* v_x_1260_){
_start:
{
if (lean_obj_tag(v_x_1259_) == 0)
{
if (lean_obj_tag(v_x_1260_) == 0)
{
uint8_t v___x_1261_; 
v___x_1261_ = 1;
return v___x_1261_;
}
else
{
uint8_t v___x_1262_; 
v___x_1262_ = 0;
return v___x_1262_;
}
}
else
{
if (lean_obj_tag(v_x_1260_) == 0)
{
uint8_t v___x_1263_; 
v___x_1263_ = 0;
return v___x_1263_;
}
else
{
lean_object* v_head_1264_; lean_object* v_tail_1265_; lean_object* v_head_1266_; lean_object* v_tail_1267_; uint8_t v___x_1268_; 
v_head_1264_ = lean_ctor_get(v_x_1259_, 0);
v_tail_1265_ = lean_ctor_get(v_x_1259_, 1);
v_head_1266_ = lean_ctor_get(v_x_1260_, 0);
v_tail_1267_ = lean_ctor_get(v_x_1260_, 1);
v___x_1268_ = lp_LanglandsOracles_List_beq___at___00List_beq___at___00Oracles_isogenyGraphCertified_spec__2_spec__2(v_head_1264_, v_head_1266_);
if (v___x_1268_ == 0)
{
return v___x_1268_;
}
else
{
v_x_1259_ = v_tail_1265_;
v_x_1260_ = v_tail_1267_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_beq___at___00Oracles_isogenyGraphCertified_spec__2___boxed(lean_object* v_x_1270_, lean_object* v_x_1271_){
_start:
{
uint8_t v_res_1272_; lean_object* v_r_1273_; 
v_res_1272_ = lp_LanglandsOracles_List_beq___at___00Oracles_isogenyGraphCertified_spec__2(v_x_1270_, v_x_1271_);
lean_dec(v_x_1271_);
lean_dec(v_x_1270_);
v_r_1273_ = lean_box(v_res_1272_);
return v_r_1273_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_isogenyGraphCertified_spec__3(uint8_t v___x_1274_, lean_object* v_fst_1275_, lean_object* v_00_u03c3_1276_, lean_object* v_x_1277_){
_start:
{
if (lean_obj_tag(v_x_1277_) == 0)
{
uint8_t v___x_1278_; 
lean_dec(v_00_u03c3_1276_);
lean_dec(v_fst_1275_);
v___x_1278_ = 1;
return v___x_1278_;
}
else
{
lean_object* v_head_1279_; lean_object* v_tail_1280_; uint8_t v___y_1282_; lean_object* v_fst_1284_; lean_object* v_snd_1285_; uint8_t v___y_1287_; lean_object* v___x_1293_; uint8_t v___x_1294_; 
v_head_1279_ = lean_ctor_get(v_x_1277_, 0);
lean_inc(v_head_1279_);
v_tail_1280_ = lean_ctor_get(v_x_1277_, 1);
lean_inc(v_tail_1280_);
lean_dec_ref_known(v_x_1277_, 2);
v_fst_1284_ = lean_ctor_get(v_head_1279_, 0);
lean_inc(v_fst_1284_);
v_snd_1285_ = lean_ctor_get(v_head_1279_, 1);
lean_inc(v_snd_1285_);
lean_dec(v_head_1279_);
v___x_1293_ = lean_unsigned_to_nat(2u);
v___x_1294_ = lean_nat_dec_eq(v_fst_1284_, v___x_1293_);
if (v___x_1294_ == 0)
{
lean_object* v___x_1295_; uint8_t v___x_1296_; 
v___x_1295_ = lean_unsigned_to_nat(3u);
v___x_1296_ = lean_nat_dec_eq(v_fst_1284_, v___x_1295_);
v___y_1287_ = v___x_1296_;
goto v___jp_1286_;
}
else
{
v___y_1287_ = v___x_1294_;
goto v___jp_1286_;
}
v___jp_1281_:
{
if (v___y_1282_ == 0)
{
lean_dec(v_tail_1280_);
lean_dec(v_00_u03c3_1276_);
lean_dec(v_fst_1275_);
return v___y_1282_;
}
else
{
v_x_1277_ = v_tail_1280_;
goto _start;
}
}
v___jp_1286_:
{
if (v___y_1287_ == 0)
{
lean_dec(v_snd_1285_);
lean_dec(v_fst_1284_);
v___y_1282_ = v___x_1274_;
goto v___jp_1281_;
}
else
{
lean_object* v___x_1288_; 
lean_inc(v_fst_1275_);
v___x_1288_ = lp_LanglandsOracles_Oracles_brandtLean(v_fst_1275_, v_fst_1284_);
if (lean_obj_tag(v___x_1288_) == 0)
{
uint8_t v___x_1289_; 
lean_dec(v_snd_1285_);
lean_dec(v_tail_1280_);
lean_dec(v_00_u03c3_1276_);
lean_dec(v_fst_1275_);
v___x_1289_ = 0;
return v___x_1289_;
}
else
{
lean_object* v_val_1290_; lean_object* v___x_1291_; uint8_t v___x_1292_; 
v_val_1290_ = lean_ctor_get(v___x_1288_, 0);
lean_inc(v_val_1290_);
lean_dec_ref_known(v___x_1288_, 1);
lean_inc(v_00_u03c3_1276_);
v___x_1291_ = lp_LanglandsOracles_Oracles_relabel(v_00_u03c3_1276_, v_val_1290_);
lean_dec(v_val_1290_);
v___x_1292_ = lp_LanglandsOracles_List_beq___at___00Oracles_isogenyGraphCertified_spec__2(v___x_1291_, v_snd_1285_);
lean_dec(v_snd_1285_);
lean_dec(v___x_1291_);
v___y_1282_ = v___x_1292_;
goto v___jp_1281_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_isogenyGraphCertified_spec__3___boxed(lean_object* v___x_1297_, lean_object* v_fst_1298_, lean_object* v_00_u03c3_1299_, lean_object* v_x_1300_){
_start:
{
uint8_t v___x_753__boxed_1301_; uint8_t v_res_1302_; lean_object* v_r_1303_; 
v___x_753__boxed_1301_ = lean_unbox(v___x_1297_);
v_res_1302_ = lp_LanglandsOracles_List_all___at___00Oracles_isogenyGraphCertified_spec__3(v___x_753__boxed_1301_, v_fst_1298_, v_00_u03c3_1299_, v_x_1300_);
v_r_1303_ = lean_box(v_res_1302_);
return v_r_1303_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__4(uint8_t v___x_1304_, lean_object* v_fst_1305_, lean_object* v_snd_1306_, lean_object* v_x_1307_){
_start:
{
if (lean_obj_tag(v_x_1307_) == 0)
{
uint8_t v___x_1308_; 
lean_dec(v_snd_1306_);
lean_dec(v_fst_1305_);
v___x_1308_ = 0;
return v___x_1308_;
}
else
{
lean_object* v_head_1309_; lean_object* v_tail_1310_; uint8_t v___x_1311_; 
v_head_1309_ = lean_ctor_get(v_x_1307_, 0);
lean_inc(v_head_1309_);
v_tail_1310_ = lean_ctor_get(v_x_1307_, 1);
lean_inc(v_tail_1310_);
lean_dec_ref_known(v_x_1307_, 2);
lean_inc(v_snd_1306_);
lean_inc(v_fst_1305_);
v___x_1311_ = lp_LanglandsOracles_List_all___at___00Oracles_isogenyGraphCertified_spec__3(v___x_1304_, v_fst_1305_, v_head_1309_, v_snd_1306_);
if (v___x_1311_ == 0)
{
v_x_1307_ = v_tail_1310_;
goto _start;
}
else
{
lean_dec(v_tail_1310_);
lean_dec(v_snd_1306_);
lean_dec(v_fst_1305_);
return v___x_1311_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__4___boxed(lean_object* v___x_1313_, lean_object* v_fst_1314_, lean_object* v_snd_1315_, lean_object* v_x_1316_){
_start:
{
uint8_t v___x_796__boxed_1317_; uint8_t v_res_1318_; lean_object* v_r_1319_; 
v___x_796__boxed_1317_ = lean_unbox(v___x_1313_);
v_res_1318_ = lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__4(v___x_796__boxed_1317_, v_fst_1314_, v_snd_1315_, v_x_1316_);
v_r_1319_ = lean_box(v_res_1318_);
return v_r_1319_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_isogenyGraphCertified___closed__0(void){
_start:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1320_ = lean_unsigned_to_nat(12u);
v___x_1321_ = lean_nat_to_int(v___x_1320_);
return v___x_1321_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_isogenyGraphCertified(lean_object* v_entry_1322_){
_start:
{
lean_object* v_snd_1323_; lean_object* v_fst_1324_; lean_object* v_fst_1325_; lean_object* v_snd_1326_; lean_object* v_n_1327_; uint8_t v___y_1329_; lean_object* v_js_1335_; lean_object* v___x_1336_; uint8_t v___x_1337_; 
v_snd_1323_ = lean_ctor_get(v_entry_1322_, 1);
lean_inc(v_snd_1323_);
v_fst_1324_ = lean_ctor_get(v_entry_1322_, 0);
lean_inc_n(v_fst_1324_, 2);
lean_dec_ref(v_entry_1322_);
v_fst_1325_ = lean_ctor_get(v_snd_1323_, 0);
lean_inc(v_fst_1325_);
v_snd_1326_ = lean_ctor_get(v_snd_1323_, 1);
lean_inc(v_snd_1326_);
lean_dec(v_snd_1323_);
v_n_1327_ = l_List_lengthTR___redArg(v_fst_1325_);
lean_dec(v_fst_1325_);
v_js_1335_ = lp_LanglandsOracles_Oracles_supersingularJ(v_fst_1324_);
v___x_1336_ = l_List_lengthTR___redArg(v_js_1335_);
lean_dec(v_js_1335_);
v___x_1337_ = lean_nat_dec_eq(v___x_1336_, v_n_1327_);
lean_dec(v___x_1336_);
if (v___x_1337_ == 0)
{
v___y_1329_ = v___x_1337_;
goto v___jp_1328_;
}
else
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; uint8_t v___x_1343_; 
v___x_1338_ = lean_obj_once(&lp_LanglandsOracles_Oracles_isogenyGraphCertified___closed__0, &lp_LanglandsOracles_Oracles_isogenyGraphCertified___closed__0_once, _init_lp_LanglandsOracles_Oracles_isogenyGraphCertified___closed__0);
lean_inc(v_n_1327_);
v___x_1339_ = lean_nat_to_int(v_n_1327_);
v___x_1340_ = lean_int_mul(v___x_1338_, v___x_1339_);
lean_dec(v___x_1339_);
v___x_1341_ = lean_unsigned_to_nat(1u);
lean_inc(v_fst_1324_);
v___x_1342_ = lp_LanglandsOracles_Oracles_eichlerBrandt12(v_fst_1324_, v___x_1341_);
v___x_1343_ = lean_int_dec_eq(v___x_1340_, v___x_1342_);
lean_dec(v___x_1342_);
lean_dec(v___x_1340_);
v___y_1329_ = v___x_1343_;
goto v___jp_1328_;
}
v___jp_1328_:
{
if (v___y_1329_ == 0)
{
lean_dec(v_n_1327_);
lean_dec(v_snd_1326_);
lean_dec(v_fst_1324_);
return v___y_1329_;
}
else
{
uint8_t v___x_1330_; 
v___x_1330_ = lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__0(v_snd_1326_);
if (v___x_1330_ == 0)
{
lean_dec(v_n_1327_);
lean_dec(v_snd_1326_);
lean_dec(v_fst_1324_);
return v___x_1330_;
}
else
{
uint8_t v___x_1331_; 
v___x_1331_ = lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__1(v_snd_1326_);
if (v___x_1331_ == 0)
{
lean_dec(v_n_1327_);
lean_dec(v_snd_1326_);
lean_dec(v_fst_1324_);
return v___x_1331_;
}
else
{
lean_object* v___x_1332_; lean_object* v___x_1333_; uint8_t v___x_1334_; 
v___x_1332_ = l_List_range(v_n_1327_);
v___x_1333_ = lp_LanglandsOracles_Oracles_permutations(v___x_1332_);
v___x_1334_ = lp_LanglandsOracles_List_any___at___00Oracles_isogenyGraphCertified_spec__4(v___x_1331_, v_fst_1324_, v_snd_1326_, v___x_1333_);
return v___x_1334_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_isogenyGraphCertified___boxed(lean_object* v_entry_1344_){
_start:
{
uint8_t v_res_1345_; lean_object* v_r_1346_; 
v_res_1345_ = lp_LanglandsOracles_Oracles_isogenyGraphCertified(v_entry_1344_);
v_r_1346_ = lean_box(v_res_1345_);
return v_r_1346_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_TraceFormula(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Matrix(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Data(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_Isogeny(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_TraceFormula(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_Matrix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_LanglandsOracles_Oracles_phi2 = _init_lp_LanglandsOracles_Oracles_phi2();
lean_mark_persistent(lp_LanglandsOracles_Oracles_phi2);
lp_LanglandsOracles_Oracles_phi3 = _init_lp_LanglandsOracles_Oracles_phi3();
lean_mark_persistent(lp_LanglandsOracles_Oracles_phi3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
