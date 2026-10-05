// Lean compiler output
// Module: LanglandsOracles.Pseudocharacter
// Imports: public import Init public meta import Init public import LanglandsOracles.CommSemiring
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
lean_object* l_Fin_mul(lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_add(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Fin_sub(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqM2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqM2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqM2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqM2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__0_value;
static const lean_string_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__1 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__1_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__1_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__2 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__2_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__2_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__3 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__3_value;
static const lean_string_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__4 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__4_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__4_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__5 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__5_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__3_value),((lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__5_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__6 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__6_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__7;
static const lean_string_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__8 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__8_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__8_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__9 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__9_value;
static const lean_string_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__10 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__10_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__10_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__11 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__11_value;
static const lean_string_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__12 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__12_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__12_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__13 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__13_value;
static const lean_string_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "d"};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__14 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__14_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__14_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__15 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__15_value;
static const lean_string_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__16 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__16_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__17;
static lean_once_cell_t lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__18;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__0_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__19 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__19_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__16_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__20 = (const lean_object*)&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__20_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprM2___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprM2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_one___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_one(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_det(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_det___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_fins_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_fins_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_LanglandsOracles_Oracles_Mat2_fins___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_fins___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_fins___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_fins(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Mat2_all_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__2_spec__3___closed__0 = (const lean_object*)&lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_all(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_gl_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_gl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_gl(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_procesi_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_procesi_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_procesi_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_procesi_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_procesi(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_procesi___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_procesiHolds(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_procesiHolds___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq___redArg(lean_object* v_inst_1_, lean_object* v_x_2_, lean_object* v_x_3_){
_start:
{
lean_object* v_a_4_; lean_object* v_b_5_; lean_object* v_c_6_; lean_object* v_d_7_; lean_object* v_a_8_; lean_object* v_b_9_; lean_object* v_c_10_; lean_object* v_d_11_; lean_object* v___x_12_; uint8_t v___x_13_; 
v_a_4_ = lean_ctor_get(v_x_2_, 0);
lean_inc(v_a_4_);
v_b_5_ = lean_ctor_get(v_x_2_, 1);
lean_inc(v_b_5_);
v_c_6_ = lean_ctor_get(v_x_2_, 2);
lean_inc(v_c_6_);
v_d_7_ = lean_ctor_get(v_x_2_, 3);
lean_inc(v_d_7_);
lean_dec_ref(v_x_2_);
v_a_8_ = lean_ctor_get(v_x_3_, 0);
lean_inc(v_a_8_);
v_b_9_ = lean_ctor_get(v_x_3_, 1);
lean_inc(v_b_9_);
v_c_10_ = lean_ctor_get(v_x_3_, 2);
lean_inc(v_c_10_);
v_d_11_ = lean_ctor_get(v_x_3_, 3);
lean_inc(v_d_11_);
lean_dec_ref(v_x_3_);
lean_inc_ref(v_inst_1_);
v___x_12_ = lean_apply_2(v_inst_1_, v_a_4_, v_a_8_);
v___x_13_ = lean_unbox(v___x_12_);
if (v___x_13_ == 0)
{
uint8_t v___x_14_; 
lean_dec(v_d_11_);
lean_dec(v_c_10_);
lean_dec(v_b_9_);
lean_dec(v_d_7_);
lean_dec(v_c_6_);
lean_dec(v_b_5_);
lean_dec_ref(v_inst_1_);
v___x_14_ = lean_unbox(v___x_12_);
return v___x_14_;
}
else
{
lean_object* v___x_15_; uint8_t v___x_16_; 
lean_inc_ref(v_inst_1_);
v___x_15_ = lean_apply_2(v_inst_1_, v_b_5_, v_b_9_);
v___x_16_ = lean_unbox(v___x_15_);
if (v___x_16_ == 0)
{
uint8_t v___x_17_; 
lean_dec(v_d_11_);
lean_dec(v_c_10_);
lean_dec(v_d_7_);
lean_dec(v_c_6_);
lean_dec_ref(v_inst_1_);
v___x_17_ = lean_unbox(v___x_15_);
return v___x_17_;
}
else
{
lean_object* v___x_18_; uint8_t v___x_19_; 
lean_inc_ref(v_inst_1_);
v___x_18_ = lean_apply_2(v_inst_1_, v_c_6_, v_c_10_);
v___x_19_ = lean_unbox(v___x_18_);
if (v___x_19_ == 0)
{
uint8_t v___x_20_; 
lean_dec(v_d_11_);
lean_dec(v_d_7_);
lean_dec_ref(v_inst_1_);
v___x_20_ = lean_unbox(v___x_18_);
return v___x_20_;
}
else
{
lean_object* v___x_21_; uint8_t v___x_22_; 
v___x_21_ = lean_apply_2(v_inst_1_, v_d_7_, v_d_11_);
v___x_22_ = lean_unbox(v___x_21_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq___redArg___boxed(lean_object* v_inst_23_, lean_object* v_x_24_, lean_object* v_x_25_){
_start:
{
uint8_t v_res_26_; lean_object* v_r_27_; 
v_res_26_ = lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq___redArg(v_inst_23_, v_x_24_, v_x_25_);
v_r_27_ = lean_box(v_res_26_);
return v_r_27_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq(lean_object* v_R_28_, lean_object* v_inst_29_, lean_object* v_x_30_, lean_object* v_x_31_){
_start:
{
uint8_t v___x_32_; 
v___x_32_ = lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq___redArg(v_inst_29_, v_x_30_, v_x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq___boxed(lean_object* v_R_33_, lean_object* v_inst_34_, lean_object* v_x_35_, lean_object* v_x_36_){
_start:
{
uint8_t v_res_37_; lean_object* v_r_38_; 
v_res_37_ = lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq(v_R_33_, v_inst_34_, v_x_35_, v_x_36_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqM2___redArg(lean_object* v_inst_39_, lean_object* v_x_40_, lean_object* v_x_41_){
_start:
{
uint8_t v___x_42_; 
v___x_42_ = lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq___redArg(v_inst_39_, v_x_40_, v_x_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqM2___redArg___boxed(lean_object* v_inst_43_, lean_object* v_x_44_, lean_object* v_x_45_){
_start:
{
uint8_t v_res_46_; lean_object* v_r_47_; 
v_res_46_ = lp_LanglandsOracles_Oracles_instDecidableEqM2___redArg(v_inst_43_, v_x_44_, v_x_45_);
v_r_47_ = lean_box(v_res_46_);
return v_r_47_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_instDecidableEqM2(lean_object* v_R_48_, lean_object* v_inst_49_, lean_object* v_x_50_, lean_object* v_x_51_){
_start:
{
uint8_t v___x_52_; 
v___x_52_ = lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq___redArg(v_inst_49_, v_x_50_, v_x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instDecidableEqM2___boxed(lean_object* v_R_53_, lean_object* v_inst_54_, lean_object* v_x_55_, lean_object* v_x_56_){
_start:
{
uint8_t v_res_57_; lean_object* v_r_58_; 
v_res_57_ = lp_LanglandsOracles_Oracles_instDecidableEqM2(v_R_53_, v_inst_54_, v_x_55_, v_x_56_);
v_r_58_ = lean_box(v_res_57_);
return v_r_58_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = lean_unsigned_to_nat(5u);
v___x_73_ = lean_nat_to_int(v___x_72_);
return v___x_73_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__0));
v___x_88_ = lean_string_length(v___x_87_);
return v___x_88_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = lean_obj_once(&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__17, &lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__17_once, _init_lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__17);
v___x_90_ = lean_nat_to_int(v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___redArg(lean_object* v_inst_95_, lean_object* v_x_96_){
_start:
{
lean_object* v_a_97_; lean_object* v_b_98_; lean_object* v_c_99_; lean_object* v_d_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v_a_97_ = lean_ctor_get(v_x_96_, 0);
lean_inc(v_a_97_);
v_b_98_ = lean_ctor_get(v_x_96_, 1);
lean_inc(v_b_98_);
v_c_99_ = lean_ctor_get(v_x_96_, 2);
lean_inc(v_c_99_);
v_d_100_ = lean_ctor_get(v_x_96_, 3);
lean_inc(v_d_100_);
lean_dec_ref(v_x_96_);
v___x_101_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__5));
v___x_102_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__6));
v___x_103_ = lean_obj_once(&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__7, &lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__7_once, _init_lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__7);
v___x_104_ = lean_unsigned_to_nat(0u);
lean_inc_ref_n(v_inst_95_, 3);
v___x_105_ = lean_apply_2(v_inst_95_, v_a_97_, v___x_104_);
v___x_106_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_103_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
v___x_107_ = 0;
v___x_108_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set_uint8(v___x_108_, sizeof(void*)*1, v___x_107_);
v___x_109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_102_);
lean_ctor_set(v___x_109_, 1, v___x_108_);
v___x_110_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__9));
v___x_111_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_109_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
v___x_112_ = lean_box(1);
v___x_113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_111_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__11));
v___x_115_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_113_);
lean_ctor_set(v___x_115_, 1, v___x_114_);
v___x_116_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
lean_ctor_set(v___x_116_, 1, v___x_101_);
v___x_117_ = lean_apply_2(v_inst_95_, v_b_98_, v___x_104_);
v___x_118_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_103_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
v___x_119_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set_uint8(v___x_119_, sizeof(void*)*1, v___x_107_);
v___x_120_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_116_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v___x_110_);
v___x_122_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v___x_112_);
v___x_123_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__13));
v___x_124_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_122_);
lean_ctor_set(v___x_124_, 1, v___x_123_);
v___x_125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v___x_101_);
v___x_126_ = lean_apply_2(v_inst_95_, v_c_99_, v___x_104_);
v___x_127_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_103_);
lean_ctor_set(v___x_127_, 1, v___x_126_);
v___x_128_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set_uint8(v___x_128_, sizeof(void*)*1, v___x_107_);
v___x_129_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_125_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v___x_110_);
v___x_131_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set(v___x_131_, 1, v___x_112_);
v___x_132_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__15));
v___x_133_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_131_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
lean_ctor_set(v___x_134_, 1, v___x_101_);
v___x_135_ = lean_apply_2(v_inst_95_, v_d_100_, v___x_104_);
v___x_136_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_103_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_137_, 0, v___x_136_);
lean_ctor_set_uint8(v___x_137_, sizeof(void*)*1, v___x_107_);
v___x_138_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_134_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = lean_obj_once(&lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__18, &lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__18_once, _init_lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__18);
v___x_140_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__19));
v___x_141_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v___x_138_);
v___x_142_ = ((lean_object*)(lp_LanglandsOracles_Oracles_instReprM2_repr___redArg___closed__20));
v___x_143_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_141_);
lean_ctor_set(v___x_143_, 1, v___x_142_);
v___x_144_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_139_);
lean_ctor_set(v___x_144_, 1, v___x_143_);
v___x_145_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_145_, 0, v___x_144_);
lean_ctor_set_uint8(v___x_145_, sizeof(void*)*1, v___x_107_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr(lean_object* v_R_146_, lean_object* v_inst_147_, lean_object* v_x_148_, lean_object* v_prec_149_){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = lp_LanglandsOracles_Oracles_instReprM2_repr___redArg(v_inst_147_, v_x_148_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprM2_repr___boxed(lean_object* v_R_151_, lean_object* v_inst_152_, lean_object* v_x_153_, lean_object* v_prec_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = lp_LanglandsOracles_Oracles_instReprM2_repr(v_R_151_, v_inst_152_, v_x_153_, v_prec_154_);
lean_dec(v_prec_154_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprM2___redArg(lean_object* v_inst_156_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lean_alloc_closure((void*)(lp_LanglandsOracles_Oracles_instReprM2_repr___boxed), 4, 2);
lean_closure_set(v___x_157_, 0, lean_box(0));
lean_closure_set(v___x_157_, 1, v_inst_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_instReprM2(lean_object* v_R_158_, lean_object* v_inst_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lean_alloc_closure((void*)(lp_LanglandsOracles_Oracles_instReprM2_repr___boxed), 4, 2);
lean_closure_set(v___x_160_, 0, lean_box(0));
lean_closure_set(v___x_160_, 1, v_inst_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul___redArg(lean_object* v_inst_161_, lean_object* v_inst_162_, lean_object* v_x_163_, lean_object* v_y_164_){
_start:
{
lean_object* v_a_165_; lean_object* v_b_166_; lean_object* v_c_167_; lean_object* v_d_168_; lean_object* v_a_169_; lean_object* v_b_170_; lean_object* v_c_171_; lean_object* v_d_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_191_; 
v_a_165_ = lean_ctor_get(v_x_163_, 0);
lean_inc(v_a_165_);
v_b_166_ = lean_ctor_get(v_x_163_, 1);
lean_inc(v_b_166_);
v_c_167_ = lean_ctor_get(v_x_163_, 2);
lean_inc(v_c_167_);
v_d_168_ = lean_ctor_get(v_x_163_, 3);
lean_inc(v_d_168_);
lean_dec_ref(v_x_163_);
v_a_169_ = lean_ctor_get(v_y_164_, 0);
v_b_170_ = lean_ctor_get(v_y_164_, 1);
v_c_171_ = lean_ctor_get(v_y_164_, 2);
v_d_172_ = lean_ctor_get(v_y_164_, 3);
v_isSharedCheck_191_ = !lean_is_exclusive(v_y_164_);
if (v_isSharedCheck_191_ == 0)
{
v___x_174_ = v_y_164_;
v_isShared_175_ = v_isSharedCheck_191_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_d_172_);
lean_inc(v_c_171_);
lean_inc(v_b_170_);
lean_inc(v_a_169_);
lean_dec(v_y_164_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_191_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_189_; 
lean_inc_n(v_inst_162_, 7);
lean_inc(v_a_169_);
lean_inc(v_a_165_);
v___x_176_ = lean_apply_2(v_inst_162_, v_a_165_, v_a_169_);
lean_inc(v_c_171_);
lean_inc(v_b_166_);
v___x_177_ = lean_apply_2(v_inst_162_, v_b_166_, v_c_171_);
lean_inc_n(v_inst_161_, 3);
v___x_178_ = lean_apply_2(v_inst_161_, v___x_176_, v___x_177_);
lean_inc(v_b_170_);
v___x_179_ = lean_apply_2(v_inst_162_, v_a_165_, v_b_170_);
lean_inc(v_d_172_);
v___x_180_ = lean_apply_2(v_inst_162_, v_b_166_, v_d_172_);
v___x_181_ = lean_apply_2(v_inst_161_, v___x_179_, v___x_180_);
lean_inc(v_c_167_);
v___x_182_ = lean_apply_2(v_inst_162_, v_c_167_, v_a_169_);
lean_inc(v_d_168_);
v___x_183_ = lean_apply_2(v_inst_162_, v_d_168_, v_c_171_);
v___x_184_ = lean_apply_2(v_inst_161_, v___x_182_, v___x_183_);
v___x_185_ = lean_apply_2(v_inst_162_, v_c_167_, v_b_170_);
v___x_186_ = lean_apply_2(v_inst_162_, v_d_168_, v_d_172_);
v___x_187_ = lean_apply_2(v_inst_161_, v___x_185_, v___x_186_);
if (v_isShared_175_ == 0)
{
lean_ctor_set(v___x_174_, 3, v___x_187_);
lean_ctor_set(v___x_174_, 2, v___x_184_);
lean_ctor_set(v___x_174_, 1, v___x_181_);
lean_ctor_set(v___x_174_, 0, v___x_178_);
v___x_189_ = v___x_174_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_178_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v___x_181_);
lean_ctor_set(v_reuseFailAlloc_190_, 2, v___x_184_);
lean_ctor_set(v_reuseFailAlloc_190_, 3, v___x_187_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul(lean_object* v_R_192_, lean_object* v_inst_193_, lean_object* v_inst_194_, lean_object* v_x_195_, lean_object* v_y_196_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = lp_LanglandsOracles_Oracles_M2_mul___redArg(v_inst_193_, v_inst_194_, v_x_195_, v_y_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace___redArg(lean_object* v_inst_198_, lean_object* v_x_199_){
_start:
{
lean_object* v_a_200_; lean_object* v_d_201_; lean_object* v___x_202_; 
v_a_200_ = lean_ctor_get(v_x_199_, 0);
lean_inc(v_a_200_);
v_d_201_ = lean_ctor_get(v_x_199_, 3);
lean_inc(v_d_201_);
lean_dec_ref(v_x_199_);
v___x_202_ = lean_apply_2(v_inst_198_, v_a_200_, v_d_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace(lean_object* v_R_203_, lean_object* v_inst_204_, lean_object* v_x_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lp_LanglandsOracles_Oracles_M2_trace___redArg(v_inst_204_, v_x_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_one___redArg(lean_object* v_inst_207_, lean_object* v_inst_208_){
_start:
{
lean_object* v___x_209_; 
lean_inc(v_inst_207_);
lean_inc(v_inst_208_);
v___x_209_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_209_, 0, v_inst_208_);
lean_ctor_set(v___x_209_, 1, v_inst_207_);
lean_ctor_set(v___x_209_, 2, v_inst_207_);
lean_ctor_set(v___x_209_, 3, v_inst_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_one(lean_object* v_R_210_, lean_object* v_inst_211_, lean_object* v_inst_212_){
_start:
{
lean_object* v___x_213_; 
lean_inc(v_inst_211_);
lean_inc(v_inst_212_);
v___x_213_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_213_, 0, v_inst_212_);
lean_ctor_set(v___x_213_, 1, v_inst_211_);
lean_ctor_set(v___x_213_, 2, v_inst_211_);
lean_ctor_set(v___x_213_, 3, v_inst_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_det(lean_object* v_n_214_, lean_object* v_x_215_){
_start:
{
lean_object* v_a_216_; lean_object* v_b_217_; lean_object* v_c_218_; lean_object* v_d_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v_a_216_ = lean_ctor_get(v_x_215_, 0);
v_b_217_ = lean_ctor_get(v_x_215_, 1);
v_c_218_ = lean_ctor_get(v_x_215_, 2);
v_d_219_ = lean_ctor_get(v_x_215_, 3);
v___x_220_ = l_Fin_mul(v_n_214_, v_a_216_, v_d_219_);
v___x_221_ = l_Fin_mul(v_n_214_, v_b_217_, v_c_218_);
v___x_222_ = l_Fin_sub(v_n_214_, v___x_220_, v___x_221_);
lean_dec(v___x_221_);
lean_dec(v___x_220_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_det___boxed(lean_object* v_n_223_, lean_object* v_x_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = lp_LanglandsOracles_Oracles_Mat2_det(v_n_223_, v_x_224_);
lean_dec_ref(v_x_224_);
lean_dec(v_n_223_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_fins_spec__0(lean_object* v_n_226_, lean_object* v_a_227_, lean_object* v_a_228_){
_start:
{
if (lean_obj_tag(v_a_227_) == 0)
{
lean_object* v___x_229_; 
v___x_229_ = lean_array_to_list(v_a_228_);
return v___x_229_;
}
else
{
lean_object* v_head_230_; lean_object* v_tail_231_; uint8_t v___x_232_; 
v_head_230_ = lean_ctor_get(v_a_227_, 0);
lean_inc(v_head_230_);
v_tail_231_ = lean_ctor_get(v_a_227_, 1);
lean_inc(v_tail_231_);
lean_dec_ref_known(v_a_227_, 2);
v___x_232_ = lean_nat_dec_lt(v_head_230_, v_n_226_);
if (v___x_232_ == 0)
{
lean_dec(v_head_230_);
v_a_227_ = v_tail_231_;
goto _start;
}
else
{
lean_object* v___x_234_; 
v___x_234_ = lean_array_push(v_a_228_, v_head_230_);
v_a_227_ = v_tail_231_;
v_a_228_ = v___x_234_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_fins_spec__0___boxed(lean_object* v_n_236_, lean_object* v_a_237_, lean_object* v_a_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_fins_spec__0(v_n_236_, v_a_237_, v_a_238_);
lean_dec(v_n_236_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_fins(lean_object* v_n_242_){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
lean_inc(v_n_242_);
v___x_243_ = l_List_range(v_n_242_);
v___x_244_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2_fins___closed__0));
v___x_245_ = lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_fins_spec__0(v_n_242_, v___x_243_, v___x_244_);
lean_dec(v_n_242_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Mat2_all_spec__0(lean_object* v_a_246_, lean_object* v_b_247_, lean_object* v_c_248_, lean_object* v_a_249_, lean_object* v_a_250_){
_start:
{
if (lean_obj_tag(v_a_249_) == 0)
{
lean_object* v___x_251_; 
lean_dec(v_c_248_);
lean_dec(v_b_247_);
lean_dec(v_a_246_);
v___x_251_ = l_List_reverse___redArg(v_a_250_);
return v___x_251_;
}
else
{
lean_object* v_head_252_; lean_object* v_tail_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_262_; 
v_head_252_ = lean_ctor_get(v_a_249_, 0);
v_tail_253_ = lean_ctor_get(v_a_249_, 1);
v_isSharedCheck_262_ = !lean_is_exclusive(v_a_249_);
if (v_isSharedCheck_262_ == 0)
{
v___x_255_ = v_a_249_;
v_isShared_256_ = v_isSharedCheck_262_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_tail_253_);
lean_inc(v_head_252_);
lean_dec(v_a_249_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_262_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_257_; lean_object* v___x_259_; 
lean_inc(v_c_248_);
lean_inc(v_b_247_);
lean_inc(v_a_246_);
v___x_257_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_257_, 0, v_a_246_);
lean_ctor_set(v___x_257_, 1, v_b_247_);
lean_ctor_set(v___x_257_, 2, v_c_248_);
lean_ctor_set(v___x_257_, 3, v_head_252_);
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 1, v_a_250_);
lean_ctor_set(v___x_255_, 0, v___x_257_);
v___x_259_ = v___x_255_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v___x_257_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v_a_250_);
v___x_259_ = v_reuseFailAlloc_261_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
v_a_249_ = v_tail_253_;
v_a_250_ = v___x_259_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__1_spec__1(lean_object* v_n_263_, lean_object* v_a_264_, lean_object* v_b_265_, lean_object* v_a_266_, lean_object* v_a_267_){
_start:
{
if (lean_obj_tag(v_a_266_) == 0)
{
lean_object* v___x_268_; 
lean_dec(v_b_265_);
lean_dec(v_a_264_);
lean_dec(v_n_263_);
v___x_268_ = lean_array_to_list(v_a_267_);
return v___x_268_;
}
else
{
lean_object* v_head_269_; lean_object* v_tail_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v_head_269_ = lean_ctor_get(v_a_266_, 0);
lean_inc(v_head_269_);
v_tail_270_ = lean_ctor_get(v_a_266_, 1);
lean_inc(v_tail_270_);
lean_dec_ref_known(v_a_266_, 2);
lean_inc(v_n_263_);
v___x_271_ = lp_LanglandsOracles_Oracles_Mat2_fins(v_n_263_);
v___x_272_ = lean_box(0);
lean_inc(v_b_265_);
lean_inc(v_a_264_);
v___x_273_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Mat2_all_spec__0(v_a_264_, v_b_265_, v_head_269_, v___x_271_, v___x_272_);
v___x_274_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_267_, v___x_273_);
v_a_266_ = v_tail_270_;
v_a_267_ = v___x_274_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__1(lean_object* v_a_276_, lean_object* v_b_277_, lean_object* v_n_278_, lean_object* v_a_279_, lean_object* v_a_280_){
_start:
{
if (lean_obj_tag(v_a_279_) == 0)
{
lean_object* v___x_281_; 
lean_dec(v_n_278_);
lean_dec(v_b_277_);
lean_dec(v_a_276_);
v___x_281_ = lean_array_to_list(v_a_280_);
return v___x_281_;
}
else
{
lean_object* v_head_282_; lean_object* v_tail_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v_head_282_ = lean_ctor_get(v_a_279_, 0);
lean_inc(v_head_282_);
v_tail_283_ = lean_ctor_get(v_a_279_, 1);
lean_inc(v_tail_283_);
lean_dec_ref_known(v_a_279_, 2);
lean_inc(v_n_278_);
v___x_284_ = lp_LanglandsOracles_Oracles_Mat2_fins(v_n_278_);
v___x_285_ = lean_box(0);
lean_inc(v_b_277_);
lean_inc(v_a_276_);
v___x_286_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Mat2_all_spec__0(v_a_276_, v_b_277_, v_head_282_, v___x_284_, v___x_285_);
v___x_287_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_280_, v___x_286_);
v___x_288_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__1_spec__1(v_n_278_, v_a_276_, v_b_277_, v_tail_283_, v___x_287_);
return v___x_288_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__2_spec__3(lean_object* v_n_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_){
_start:
{
if (lean_obj_tag(v_a_293_) == 0)
{
lean_object* v___x_295_; 
lean_dec(v_a_292_);
lean_dec(v_n_291_);
v___x_295_ = lean_array_to_list(v_a_294_);
return v___x_295_;
}
else
{
lean_object* v_head_296_; lean_object* v_tail_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v_head_296_ = lean_ctor_get(v_a_293_, 0);
lean_inc(v_head_296_);
v_tail_297_ = lean_ctor_get(v_a_293_, 1);
lean_inc(v_tail_297_);
lean_dec_ref_known(v_a_293_, 2);
lean_inc_n(v_n_291_, 2);
v___x_298_ = lp_LanglandsOracles_Oracles_Mat2_fins(v_n_291_);
v___x_299_ = ((lean_object*)(lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__2_spec__3___closed__0));
lean_inc(v_a_292_);
v___x_300_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__1(v_a_292_, v_head_296_, v_n_291_, v___x_298_, v___x_299_);
v___x_301_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_294_, v___x_300_);
v_a_293_ = v_tail_297_;
v_a_294_ = v___x_301_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__2(lean_object* v_a_303_, lean_object* v_n_304_, lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
if (lean_obj_tag(v_a_305_) == 0)
{
lean_object* v___x_307_; 
lean_dec(v_n_304_);
lean_dec(v_a_303_);
v___x_307_ = lean_array_to_list(v_a_306_);
return v___x_307_;
}
else
{
lean_object* v_head_308_; lean_object* v_tail_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v_head_308_ = lean_ctor_get(v_a_305_, 0);
lean_inc(v_head_308_);
v_tail_309_ = lean_ctor_get(v_a_305_, 1);
lean_inc(v_tail_309_);
lean_dec_ref_known(v_a_305_, 2);
lean_inc_n(v_n_304_, 2);
v___x_310_ = lp_LanglandsOracles_Oracles_Mat2_fins(v_n_304_);
v___x_311_ = ((lean_object*)(lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__2_spec__3___closed__0));
lean_inc(v_a_303_);
v___x_312_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__1(v_a_303_, v_head_308_, v_n_304_, v___x_310_, v___x_311_);
v___x_313_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_306_, v___x_312_);
v___x_314_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__2_spec__3(v_n_304_, v_a_303_, v_tail_309_, v___x_313_);
return v___x_314_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__3(lean_object* v_n_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
if (lean_obj_tag(v_a_316_) == 0)
{
lean_object* v___x_318_; 
lean_dec(v_n_315_);
v___x_318_ = lean_array_to_list(v_a_317_);
return v___x_318_;
}
else
{
lean_object* v_head_319_; lean_object* v_tail_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v_head_319_ = lean_ctor_get(v_a_316_, 0);
lean_inc(v_head_319_);
v_tail_320_ = lean_ctor_get(v_a_316_, 1);
lean_inc(v_tail_320_);
lean_dec_ref_known(v_a_316_, 2);
lean_inc_n(v_n_315_, 2);
v___x_321_ = lp_LanglandsOracles_Oracles_Mat2_fins(v_n_315_);
v___x_322_ = ((lean_object*)(lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__2_spec__3___closed__0));
v___x_323_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__2(v_head_319_, v_n_315_, v___x_321_, v___x_322_);
v___x_324_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_317_, v___x_323_);
v_a_316_ = v_tail_320_;
v_a_317_ = v___x_324_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_all(lean_object* v_n_326_){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
lean_inc(v_n_326_);
v___x_327_ = lp_LanglandsOracles_Oracles_Mat2_fins(v_n_326_);
v___x_328_ = ((lean_object*)(lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__2_spec__3___closed__0));
v___x_329_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_all_spec__3(v_n_326_, v___x_327_, v___x_328_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_gl_spec__0(lean_object* v_n_330_, lean_object* v_a_331_, lean_object* v_a_332_){
_start:
{
if (lean_obj_tag(v_a_331_) == 0)
{
lean_object* v___x_333_; 
v___x_333_ = l_List_reverse___redArg(v_a_332_);
return v___x_333_;
}
else
{
lean_object* v_head_334_; lean_object* v_tail_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_347_; 
v_head_334_ = lean_ctor_get(v_a_331_, 0);
v_tail_335_ = lean_ctor_get(v_a_331_, 1);
v_isSharedCheck_347_ = !lean_is_exclusive(v_a_331_);
if (v_isSharedCheck_347_ == 0)
{
v___x_337_ = v_a_331_;
v_isShared_338_ = v_isSharedCheck_347_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_tail_335_);
lean_inc(v_head_334_);
lean_dec(v_a_331_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_347_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
v___x_339_ = lp_LanglandsOracles_Oracles_Mat2_det(v_n_330_, v_head_334_);
v___x_340_ = lean_unsigned_to_nat(0u);
v___x_341_ = lean_nat_dec_eq(v___x_339_, v___x_340_);
lean_dec(v___x_339_);
if (v___x_341_ == 0)
{
lean_object* v___x_343_; 
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 1, v_a_332_);
v___x_343_ = v___x_337_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_head_334_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v_a_332_);
v___x_343_ = v_reuseFailAlloc_345_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
v_a_331_ = v_tail_335_;
v_a_332_ = v___x_343_;
goto _start;
}
}
else
{
lean_del_object(v___x_337_);
lean_dec(v_head_334_);
v_a_331_ = v_tail_335_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_gl_spec__0___boxed(lean_object* v_n_348_, lean_object* v_a_349_, lean_object* v_a_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_gl_spec__0(v_n_348_, v_a_349_, v_a_350_);
lean_dec(v_n_348_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_gl(lean_object* v_n_352_){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
lean_inc(v_n_352_);
v___x_353_ = lp_LanglandsOracles_Oracles_Mat2_all(v_n_352_);
v___x_354_ = lean_box(0);
v___x_355_ = lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_gl_spec__0(v_n_352_, v___x_353_, v___x_354_);
lean_dec(v_n_352_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_procesi_spec__0(lean_object* v_n_356_, lean_object* v_x_357_){
_start:
{
lean_object* v_a_358_; lean_object* v_d_359_; lean_object* v___x_360_; 
v_a_358_ = lean_ctor_get(v_x_357_, 0);
v_d_359_ = lean_ctor_get(v_x_357_, 3);
v___x_360_ = l_Fin_add(v_n_356_, v_a_358_, v_d_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_procesi_spec__0___boxed(lean_object* v_n_361_, lean_object* v_x_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_procesi_spec__0(v_n_361_, v_x_362_);
lean_dec_ref(v_x_362_);
lean_dec(v_n_361_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_procesi_spec__1(lean_object* v_n_364_, lean_object* v_x_365_, lean_object* v_y_366_){
_start:
{
lean_object* v_a_367_; lean_object* v_b_368_; lean_object* v_c_369_; lean_object* v_d_370_; lean_object* v_a_371_; lean_object* v_b_372_; lean_object* v_c_373_; lean_object* v_d_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_393_; 
v_a_367_ = lean_ctor_get(v_x_365_, 0);
v_b_368_ = lean_ctor_get(v_x_365_, 1);
v_c_369_ = lean_ctor_get(v_x_365_, 2);
v_d_370_ = lean_ctor_get(v_x_365_, 3);
v_a_371_ = lean_ctor_get(v_y_366_, 0);
v_b_372_ = lean_ctor_get(v_y_366_, 1);
v_c_373_ = lean_ctor_get(v_y_366_, 2);
v_d_374_ = lean_ctor_get(v_y_366_, 3);
v_isSharedCheck_393_ = !lean_is_exclusive(v_y_366_);
if (v_isSharedCheck_393_ == 0)
{
v___x_376_ = v_y_366_;
v_isShared_377_ = v_isSharedCheck_393_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_d_374_);
lean_inc(v_c_373_);
lean_inc(v_b_372_);
lean_inc(v_a_371_);
lean_dec(v_y_366_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_393_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_391_; 
v___x_378_ = l_Fin_mul(v_n_364_, v_a_367_, v_a_371_);
v___x_379_ = l_Fin_mul(v_n_364_, v_b_368_, v_c_373_);
v___x_380_ = l_Fin_add(v_n_364_, v___x_378_, v___x_379_);
lean_dec(v___x_379_);
lean_dec(v___x_378_);
v___x_381_ = l_Fin_mul(v_n_364_, v_a_367_, v_b_372_);
v___x_382_ = l_Fin_mul(v_n_364_, v_b_368_, v_d_374_);
v___x_383_ = l_Fin_add(v_n_364_, v___x_381_, v___x_382_);
lean_dec(v___x_382_);
lean_dec(v___x_381_);
v___x_384_ = l_Fin_mul(v_n_364_, v_c_369_, v_a_371_);
lean_dec(v_a_371_);
v___x_385_ = l_Fin_mul(v_n_364_, v_d_370_, v_c_373_);
lean_dec(v_c_373_);
v___x_386_ = l_Fin_add(v_n_364_, v___x_384_, v___x_385_);
lean_dec(v___x_385_);
lean_dec(v___x_384_);
v___x_387_ = l_Fin_mul(v_n_364_, v_c_369_, v_b_372_);
lean_dec(v_b_372_);
v___x_388_ = l_Fin_mul(v_n_364_, v_d_370_, v_d_374_);
lean_dec(v_d_374_);
v___x_389_ = l_Fin_add(v_n_364_, v___x_387_, v___x_388_);
lean_dec(v___x_388_);
lean_dec(v___x_387_);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 3, v___x_389_);
lean_ctor_set(v___x_376_, 2, v___x_386_);
lean_ctor_set(v___x_376_, 1, v___x_383_);
lean_ctor_set(v___x_376_, 0, v___x_380_);
v___x_391_ = v___x_376_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_380_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v___x_383_);
lean_ctor_set(v_reuseFailAlloc_392_, 2, v___x_386_);
lean_ctor_set(v_reuseFailAlloc_392_, 3, v___x_389_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_procesi_spec__1___boxed(lean_object* v_n_394_, lean_object* v_x_395_, lean_object* v_y_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_procesi_spec__1(v_n_394_, v_x_395_, v_y_396_);
lean_dec_ref(v_x_395_);
lean_dec(v_n_394_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_procesi(lean_object* v_n_398_, lean_object* v_g1_399_, lean_object* v_g2_400_, lean_object* v_g3_401_){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_402_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_procesi_spec__0(v_n_398_, v_g1_399_);
v___x_403_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_procesi_spec__0(v_n_398_, v_g2_400_);
v___x_404_ = l_Fin_mul(v_n_398_, v___x_402_, v___x_403_);
v___x_405_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_procesi_spec__0(v_n_398_, v_g3_401_);
v___x_406_ = l_Fin_mul(v_n_398_, v___x_404_, v___x_405_);
lean_dec(v___x_404_);
lean_inc_ref(v_g2_400_);
v___x_407_ = lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_procesi_spec__1(v_n_398_, v_g1_399_, v_g2_400_);
v___x_408_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_procesi_spec__0(v_n_398_, v___x_407_);
v___x_409_ = l_Fin_mul(v_n_398_, v___x_408_, v___x_405_);
lean_dec(v___x_405_);
lean_dec(v___x_408_);
v___x_410_ = l_Fin_sub(v_n_398_, v___x_406_, v___x_409_);
lean_dec(v___x_409_);
lean_dec(v___x_406_);
lean_inc_ref_n(v_g3_401_, 2);
v___x_411_ = lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_procesi_spec__1(v_n_398_, v_g1_399_, v_g3_401_);
v___x_412_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_procesi_spec__0(v_n_398_, v___x_411_);
v___x_413_ = l_Fin_mul(v_n_398_, v___x_412_, v___x_403_);
lean_dec(v___x_403_);
lean_dec(v___x_412_);
v___x_414_ = l_Fin_sub(v_n_398_, v___x_410_, v___x_413_);
lean_dec(v___x_413_);
lean_dec(v___x_410_);
v___x_415_ = lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_procesi_spec__1(v_n_398_, v_g2_400_, v_g3_401_);
v___x_416_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_procesi_spec__0(v_n_398_, v___x_415_);
lean_dec_ref(v___x_415_);
v___x_417_ = l_Fin_mul(v_n_398_, v___x_416_, v___x_402_);
lean_dec(v___x_402_);
lean_dec(v___x_416_);
v___x_418_ = l_Fin_sub(v_n_398_, v___x_414_, v___x_417_);
lean_dec(v___x_417_);
lean_dec(v___x_414_);
v___x_419_ = lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_procesi_spec__1(v_n_398_, v___x_407_, v_g3_401_);
lean_dec_ref(v___x_407_);
v___x_420_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_procesi_spec__0(v_n_398_, v___x_419_);
lean_dec_ref(v___x_419_);
v___x_421_ = l_Fin_add(v_n_398_, v___x_418_, v___x_420_);
lean_dec(v___x_420_);
lean_dec(v___x_418_);
v___x_422_ = lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_procesi_spec__1(v_n_398_, v___x_411_, v_g2_400_);
lean_dec_ref(v___x_411_);
v___x_423_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_procesi_spec__0(v_n_398_, v___x_422_);
lean_dec_ref(v___x_422_);
v___x_424_ = l_Fin_add(v_n_398_, v___x_421_, v___x_423_);
lean_dec(v___x_423_);
lean_dec(v___x_421_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_procesi___boxed(lean_object* v_n_425_, lean_object* v_g1_426_, lean_object* v_g2_427_, lean_object* v_g3_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = lp_LanglandsOracles_Oracles_Mat2_procesi(v_n_425_, v_g1_426_, v_g2_427_, v_g3_428_);
lean_dec_ref(v_g1_426_);
lean_dec(v_n_425_);
return v_res_429_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__0(lean_object* v_n_430_, lean_object* v_g1_431_, lean_object* v_g2_432_, lean_object* v_x_433_){
_start:
{
if (lean_obj_tag(v_x_433_) == 0)
{
uint8_t v___x_434_; 
lean_dec_ref(v_g2_432_);
v___x_434_ = 1;
return v___x_434_;
}
else
{
lean_object* v_head_435_; lean_object* v_tail_436_; lean_object* v___x_437_; lean_object* v___x_438_; uint8_t v___x_439_; 
v_head_435_ = lean_ctor_get(v_x_433_, 0);
lean_inc(v_head_435_);
v_tail_436_ = lean_ctor_get(v_x_433_, 1);
lean_inc(v_tail_436_);
lean_dec_ref_known(v_x_433_, 2);
lean_inc_ref(v_g2_432_);
v___x_437_ = lp_LanglandsOracles_Oracles_Mat2_procesi(v_n_430_, v_g1_431_, v_g2_432_, v_head_435_);
v___x_438_ = lean_unsigned_to_nat(0u);
v___x_439_ = lean_nat_dec_eq(v___x_437_, v___x_438_);
lean_dec(v___x_437_);
if (v___x_439_ == 0)
{
lean_dec(v_tail_436_);
lean_dec_ref(v_g2_432_);
return v___x_439_;
}
else
{
v_x_433_ = v_tail_436_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__0___boxed(lean_object* v_n_441_, lean_object* v_g1_442_, lean_object* v_g2_443_, lean_object* v_x_444_){
_start:
{
uint8_t v_res_445_; lean_object* v_r_446_; 
v_res_445_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__0(v_n_441_, v_g1_442_, v_g2_443_, v_x_444_);
lean_dec_ref(v_g1_442_);
lean_dec(v_n_441_);
v_r_446_ = lean_box(v_res_445_);
return v_r_446_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__1(lean_object* v_n_447_, lean_object* v_g1_448_, lean_object* v___x_449_, lean_object* v_x_450_){
_start:
{
if (lean_obj_tag(v_x_450_) == 0)
{
uint8_t v___x_451_; 
lean_dec(v___x_449_);
v___x_451_ = 1;
return v___x_451_;
}
else
{
lean_object* v_head_452_; lean_object* v_tail_453_; uint8_t v___x_454_; 
v_head_452_ = lean_ctor_get(v_x_450_, 0);
lean_inc(v_head_452_);
v_tail_453_ = lean_ctor_get(v_x_450_, 1);
lean_inc(v_tail_453_);
lean_dec_ref_known(v_x_450_, 2);
lean_inc(v___x_449_);
v___x_454_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__0(v_n_447_, v_g1_448_, v_head_452_, v___x_449_);
if (v___x_454_ == 0)
{
lean_dec(v_tail_453_);
lean_dec(v___x_449_);
return v___x_454_;
}
else
{
v_x_450_ = v_tail_453_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__1___boxed(lean_object* v_n_456_, lean_object* v_g1_457_, lean_object* v___x_458_, lean_object* v_x_459_){
_start:
{
uint8_t v_res_460_; lean_object* v_r_461_; 
v_res_460_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__1(v_n_456_, v_g1_457_, v___x_458_, v_x_459_);
lean_dec_ref(v_g1_457_);
lean_dec(v_n_456_);
v_r_461_ = lean_box(v_res_460_);
return v_r_461_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__2(lean_object* v_n_462_, lean_object* v___x_463_, lean_object* v_x_464_){
_start:
{
if (lean_obj_tag(v_x_464_) == 0)
{
uint8_t v___x_465_; 
lean_dec(v___x_463_);
v___x_465_ = 1;
return v___x_465_;
}
else
{
lean_object* v_head_466_; lean_object* v_tail_467_; uint8_t v___x_468_; 
v_head_466_ = lean_ctor_get(v_x_464_, 0);
v_tail_467_ = lean_ctor_get(v_x_464_, 1);
lean_inc_n(v___x_463_, 2);
v___x_468_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__1(v_n_462_, v_head_466_, v___x_463_, v___x_463_);
if (v___x_468_ == 0)
{
lean_dec(v___x_463_);
return v___x_468_;
}
else
{
v_x_464_ = v_tail_467_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__2___boxed(lean_object* v_n_470_, lean_object* v___x_471_, lean_object* v_x_472_){
_start:
{
uint8_t v_res_473_; lean_object* v_r_474_; 
v_res_473_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__2(v_n_470_, v___x_471_, v_x_472_);
lean_dec(v_x_472_);
lean_dec(v_n_470_);
v_r_474_ = lean_box(v_res_473_);
return v_r_474_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_procesiHolds(lean_object* v_n_475_){
_start:
{
lean_object* v___x_476_; uint8_t v___x_477_; 
lean_inc(v_n_475_);
v___x_476_ = lp_LanglandsOracles_Oracles_Mat2_gl(v_n_475_);
lean_inc(v___x_476_);
v___x_477_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_procesiHolds_spec__2(v_n_475_, v___x_476_, v___x_476_);
lean_dec(v___x_476_);
lean_dec(v_n_475_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_procesiHolds___boxed(lean_object* v_n_478_){
_start:
{
uint8_t v_res_479_; lean_object* v_r_480_; 
v_res_479_ = lp_LanglandsOracles_Oracles_Mat2_procesiHolds(v_n_478_);
v_r_480_ = lean_box(v_res_479_);
return v_r_480_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_CommSemiring(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_Pseudocharacter(uint8_t builtin) {
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
res = initialize_LanglandsOracles_LanglandsOracles_CommSemiring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
