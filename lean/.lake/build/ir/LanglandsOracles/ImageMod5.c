// Lean compiler output
// Module: LanglandsOracles.ImageMod5
// Imports: public import Init public meta import Init public import LanglandsOracles.ImageMod2 public import LanglandsOracles.Data
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
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_decode___redArg(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_encode(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Fin_mul(lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_add(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Fin_sub(lean_object*, lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_det(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_gl(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_mask_spec__0(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_closureIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesLit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_mulNat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_mulNat___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_column_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_column_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_column(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_column___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_colGet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_colGet___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_colOk_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_colOk_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_colOk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_colOk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_closureCols___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_closureCols___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_LanglandsOracles_Oracles_Mat2_closureCols___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_Oracles_Mat2_closureCols___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_closureCols___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_closureCols___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_closureCols(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_closureCols___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_classA_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_classA_spec__0___boxed(lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_classA___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_classA___closed__0;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_classA___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_classA___closed__1;
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_classA(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classA___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_classB(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classB___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_classB_x27_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_classB_x27_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_classB_x27(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classB_x27___boxed(lean_object*);
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__0 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__0_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__1 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__1_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "LanglandsOracles"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__2 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__2_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__1_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__2_value),LEAN_SCALAR_PTR_LITERAL(129, 76, 196, 53, 240, 30, 156, 155)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__3 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__3_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ImageMod5"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__4 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__4_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__3_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__4_value),LEAN_SCALAR_PTR_LITERAL(135, 62, 228, 241, 148, 55, 175, 129)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__5 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__5_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(122, 143, 199, 13, 31, 37, 84, 191)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__6 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__6_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Oracles"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__7 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__7_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__6_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__7_value),LEAN_SCALAR_PTR_LITERAL(208, 38, 95, 83, 89, 205, 20, 251)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__8 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__8_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Mat2"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__9 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__9_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__8_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__9_value),LEAN_SCALAR_PTR_LITERAL(48, 210, 0, 85, 85, 182, 166, 106)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__10 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__10_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "termR5"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__11 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__11_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__10_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__11_value),LEAN_SCALAR_PTR_LITERAL(203, 12, 81, 108, 62, 251, 229, 131)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__12 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__12_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "R5"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__13 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__13_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__13_value)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__14 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__14_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__12_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__14_value)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__15 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__15_value;
LEAN_EXPORT const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__15_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__0 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__0_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__1 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__1_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__2 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__2_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__3 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__3_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__4_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__4_value_aux_1),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__4_value_aux_2),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__4 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__4_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "isCSR_fin"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__5 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__5_value;
static lean_once_cell_t lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__6;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(231, 148, 81, 8, 39, 87, 8, 130)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__7 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__7_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__7_value),LEAN_SCALAR_PTR_LITERAL(37, 62, 120, 162, 179, 49, 32, 29)}};
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__8_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(57, 82, 15, 153, 4, 190, 55, 41)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__8 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__8_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__9 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__9_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__10 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__10_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__11 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__11_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__12 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__12_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__13 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__13_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__14 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__14_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "5"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__15 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__15_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______unexpand__Oracles__isCSR__fin__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______unexpand__Oracles__isCSR__fin__1___closed__0 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______unexpand__Oracles__isCSR__fin__1___closed__0_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______unexpand__Oracles__isCSR__fin__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______unexpand__Oracles__isCSR__fin__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______unexpand__Oracles__isCSR__fin__1___closed__1 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______unexpand__Oracles__isCSR__fin__1___closed__1_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______unexpand__Oracles__isCSR__fin__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______unexpand__Oracles__isCSR__fin__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_apply5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_apply5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___closed__0;
static const lean_array_object lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___closed__1 = (const lean_object*)&lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___closed__1_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_nonzeroVecs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_nonzeroVecs___closed__0;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_nonzeroVecs;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_inv5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_inv5___closed__0;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_inv5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_inv5___closed__1;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_inv5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_inv5___closed__2;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_inv5(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Mat2_glIdx5_spec__0(lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__0;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__1;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_glIdx5;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_gRep___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_gRep___closed__0;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_gRep;
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Mat2_colsB_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_colsB_spec__0(lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_colsB___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_colsB___closed__0;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_colsB___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_colsB___closed__1;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_colsB;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_colRep___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_colRep___closed__0;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_colRep___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_colRep___closed__1;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_colRep;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_mulNat(lean_object* v_n_1_, lean_object* v_i_2_, lean_object* v_j_3_){
_start:
{
lean_object* v_a_4_; lean_object* v___x_5_; lean_object* v_b_6_; lean_object* v___x_7_; lean_object* v_c_8_; lean_object* v___x_9_; lean_object* v_d_10_; lean_object* v_a_x27_11_; lean_object* v___x_12_; lean_object* v_b_x27_13_; lean_object* v___x_14_; lean_object* v_c_x27_15_; lean_object* v___x_16_; lean_object* v_d_x27_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v_a_4_ = lean_nat_mod(v_i_2_, v_n_1_);
v___x_5_ = lean_nat_div(v_i_2_, v_n_1_);
v_b_6_ = lean_nat_mod(v___x_5_, v_n_1_);
v___x_7_ = lean_nat_div(v___x_5_, v_n_1_);
lean_dec(v___x_5_);
v_c_8_ = lean_nat_mod(v___x_7_, v_n_1_);
v___x_9_ = lean_nat_div(v___x_7_, v_n_1_);
lean_dec(v___x_7_);
v_d_10_ = lean_nat_mod(v___x_9_, v_n_1_);
lean_dec(v___x_9_);
v_a_x27_11_ = lean_nat_mod(v_j_3_, v_n_1_);
v___x_12_ = lean_nat_div(v_j_3_, v_n_1_);
v_b_x27_13_ = lean_nat_mod(v___x_12_, v_n_1_);
v___x_14_ = lean_nat_div(v___x_12_, v_n_1_);
lean_dec(v___x_12_);
v_c_x27_15_ = lean_nat_mod(v___x_14_, v_n_1_);
v___x_16_ = lean_nat_div(v___x_14_, v_n_1_);
lean_dec(v___x_14_);
v_d_x27_17_ = lean_nat_mod(v___x_16_, v_n_1_);
lean_dec(v___x_16_);
v___x_18_ = lean_nat_mul(v_a_4_, v_a_x27_11_);
v___x_19_ = lean_nat_mod(v___x_18_, v_n_1_);
lean_dec(v___x_18_);
v___x_20_ = lean_nat_mul(v_b_6_, v_c_x27_15_);
v___x_21_ = lean_nat_mod(v___x_20_, v_n_1_);
lean_dec(v___x_20_);
v___x_22_ = lean_nat_add(v___x_19_, v___x_21_);
lean_dec(v___x_21_);
lean_dec(v___x_19_);
v___x_23_ = lean_nat_mod(v___x_22_, v_n_1_);
lean_dec(v___x_22_);
v___x_24_ = lean_nat_mul(v_a_4_, v_b_x27_13_);
lean_dec(v_a_4_);
v___x_25_ = lean_nat_mod(v___x_24_, v_n_1_);
lean_dec(v___x_24_);
v___x_26_ = lean_nat_mul(v_b_6_, v_d_x27_17_);
lean_dec(v_b_6_);
v___x_27_ = lean_nat_mod(v___x_26_, v_n_1_);
lean_dec(v___x_26_);
v___x_28_ = lean_nat_add(v___x_25_, v___x_27_);
lean_dec(v___x_27_);
lean_dec(v___x_25_);
v___x_29_ = lean_nat_mod(v___x_28_, v_n_1_);
lean_dec(v___x_28_);
v___x_30_ = lean_nat_mul(v_c_8_, v_a_x27_11_);
lean_dec(v_a_x27_11_);
v___x_31_ = lean_nat_mod(v___x_30_, v_n_1_);
lean_dec(v___x_30_);
v___x_32_ = lean_nat_mul(v_d_10_, v_c_x27_15_);
lean_dec(v_c_x27_15_);
v___x_33_ = lean_nat_mod(v___x_32_, v_n_1_);
lean_dec(v___x_32_);
v___x_34_ = lean_nat_add(v___x_31_, v___x_33_);
lean_dec(v___x_33_);
lean_dec(v___x_31_);
v___x_35_ = lean_nat_mod(v___x_34_, v_n_1_);
lean_dec(v___x_34_);
v___x_36_ = lean_nat_mul(v_c_8_, v_b_x27_13_);
lean_dec(v_b_x27_13_);
lean_dec(v_c_8_);
v___x_37_ = lean_nat_mod(v___x_36_, v_n_1_);
lean_dec(v___x_36_);
v___x_38_ = lean_nat_mul(v_d_10_, v_d_x27_17_);
lean_dec(v_d_x27_17_);
lean_dec(v_d_10_);
v___x_39_ = lean_nat_mod(v___x_38_, v_n_1_);
lean_dec(v___x_38_);
v___x_40_ = lean_nat_add(v___x_37_, v___x_39_);
lean_dec(v___x_39_);
lean_dec(v___x_37_);
v___x_41_ = lean_nat_mod(v___x_40_, v_n_1_);
lean_dec(v___x_40_);
v___x_42_ = lean_nat_mul(v_n_1_, v___x_41_);
lean_dec(v___x_41_);
v___x_43_ = lean_nat_add(v___x_35_, v___x_42_);
lean_dec(v___x_42_);
lean_dec(v___x_35_);
v___x_44_ = lean_nat_mul(v_n_1_, v___x_43_);
lean_dec(v___x_43_);
v___x_45_ = lean_nat_add(v___x_29_, v___x_44_);
lean_dec(v___x_44_);
lean_dec(v___x_29_);
v___x_46_ = lean_nat_mul(v_n_1_, v___x_45_);
lean_dec(v___x_45_);
v___x_47_ = lean_nat_add(v___x_23_, v___x_46_);
lean_dec(v___x_46_);
lean_dec(v___x_23_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_mulNat___boxed(lean_object* v_n_48_, lean_object* v_i_49_, lean_object* v_j_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = lp_LanglandsOracles_Oracles_Mat2_mulNat(v_n_48_, v_i_49_, v_j_50_);
lean_dec(v_j_50_);
lean_dec(v_i_49_);
lean_dec(v_n_48_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_column_spec__0(lean_object* v_n_52_, lean_object* v_g_53_, lean_object* v_x_54_, lean_object* v_x_55_){
_start:
{
if (lean_obj_tag(v_x_55_) == 0)
{
return v_x_54_;
}
else
{
lean_object* v_head_56_; lean_object* v_tail_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v_head_56_ = lean_ctor_get(v_x_55_, 0);
v_tail_57_ = lean_ctor_get(v_x_55_, 1);
v___x_58_ = lp_LanglandsOracles_Oracles_Mat2_mulNat(v_n_52_, v_head_56_, v_g_53_);
v___x_59_ = lean_unsigned_to_nat(1024u);
v___x_60_ = lean_nat_pow(v___x_59_, v_head_56_);
v___x_61_ = lean_nat_mul(v___x_58_, v___x_60_);
lean_dec(v___x_60_);
lean_dec(v___x_58_);
v___x_62_ = lean_nat_add(v_x_54_, v___x_61_);
lean_dec(v___x_61_);
lean_dec(v_x_54_);
v_x_54_ = v___x_62_;
v_x_55_ = v_tail_57_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_column_spec__0___boxed(lean_object* v_n_64_, lean_object* v_g_65_, lean_object* v_x_66_, lean_object* v_x_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_column_spec__0(v_n_64_, v_g_65_, v_x_66_, v_x_67_);
lean_dec(v_x_67_);
lean_dec(v_g_65_);
lean_dec(v_n_64_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_column(lean_object* v_n_69_, lean_object* v_g_70_){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_71_ = lean_unsigned_to_nat(0u);
v___x_72_ = lean_unsigned_to_nat(4u);
v___x_73_ = lean_nat_pow(v_n_69_, v___x_72_);
v___x_74_ = l_List_range(v___x_73_);
v___x_75_ = lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_column_spec__0(v_n_69_, v_g_70_, v___x_71_, v___x_74_);
lean_dec(v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_column___boxed(lean_object* v_n_76_, lean_object* v_g_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = lp_LanglandsOracles_Oracles_Mat2_column(v_n_76_, v_g_77_);
lean_dec(v_g_77_);
lean_dec(v_n_76_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_colGet(lean_object* v_col_79_, lean_object* v_x_80_){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_81_ = lean_unsigned_to_nat(1024u);
v___x_82_ = lean_nat_pow(v___x_81_, v_x_80_);
v___x_83_ = lean_nat_div(v_col_79_, v___x_82_);
lean_dec(v___x_82_);
v___x_84_ = lean_nat_mod(v___x_83_, v___x_81_);
lean_dec(v___x_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_colGet___boxed(lean_object* v_col_85_, lean_object* v_x_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = lp_LanglandsOracles_Oracles_Mat2_colGet(v_col_85_, v_x_86_);
lean_dec(v_x_86_);
lean_dec(v_col_85_);
return v_res_87_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_colOk_spec__0(lean_object* v_col_88_, lean_object* v_n_89_, lean_object* v_g_90_, lean_object* v_x_91_){
_start:
{
if (lean_obj_tag(v_x_91_) == 0)
{
uint8_t v___x_92_; 
v___x_92_ = 1;
return v___x_92_;
}
else
{
lean_object* v_head_93_; lean_object* v_tail_94_; lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; 
v_head_93_ = lean_ctor_get(v_x_91_, 0);
v_tail_94_ = lean_ctor_get(v_x_91_, 1);
v___x_95_ = lp_LanglandsOracles_Oracles_Mat2_colGet(v_col_88_, v_head_93_);
v___x_96_ = lp_LanglandsOracles_Oracles_Mat2_mulNat(v_n_89_, v_head_93_, v_g_90_);
v___x_97_ = lean_nat_dec_eq(v___x_95_, v___x_96_);
lean_dec(v___x_96_);
lean_dec(v___x_95_);
if (v___x_97_ == 0)
{
return v___x_97_;
}
else
{
v_x_91_ = v_tail_94_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_colOk_spec__0___boxed(lean_object* v_col_99_, lean_object* v_n_100_, lean_object* v_g_101_, lean_object* v_x_102_){
_start:
{
uint8_t v_res_103_; lean_object* v_r_104_; 
v_res_103_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_colOk_spec__0(v_col_99_, v_n_100_, v_g_101_, v_x_102_);
lean_dec(v_x_102_);
lean_dec(v_g_101_);
lean_dec(v_n_100_);
lean_dec(v_col_99_);
v_r_104_ = lean_box(v_res_103_);
return v_r_104_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_colOk(lean_object* v_n_105_, lean_object* v_g_106_, lean_object* v_col_107_){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_108_ = lean_unsigned_to_nat(4u);
v___x_109_ = lean_nat_pow(v_n_105_, v___x_108_);
v___x_110_ = l_List_range(v___x_109_);
v___x_111_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_colOk_spec__0(v_col_107_, v_n_105_, v_g_106_, v___x_110_);
lean_dec(v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_colOk___boxed(lean_object* v_n_112_, lean_object* v_g_113_, lean_object* v_col_114_){
_start:
{
uint8_t v_res_115_; lean_object* v_r_116_; 
v_res_115_ = lp_LanglandsOracles_Oracles_Mat2_colOk(v_n_112_, v_g_113_, v_col_114_);
lean_dec(v_col_114_);
lean_dec(v_g_113_);
lean_dec(v_n_112_);
v_r_116_ = lean_box(v_res_115_);
return v_r_116_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_closureCols___lam__0(lean_object* v_i_117_, lean_object* v_c_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lp_LanglandsOracles_Oracles_Mat2_colGet(v_c_118_, v_i_117_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_closureCols___lam__0___boxed(lean_object* v_i_120_, lean_object* v_c_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = lp_LanglandsOracles_Oracles_Mat2_closureCols___lam__0(v_i_120_, v_c_121_);
lean_dec(v_c_121_);
lean_dec(v_i_120_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_closureCols(lean_object* v_n_124_, lean_object* v_cols_125_, lean_object* v_init_126_){
_start:
{
lean_object* v___f_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___f_127_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2_closureCols___closed__0));
v___x_128_ = lean_unsigned_to_nat(4u);
v___x_129_ = lean_nat_pow(v_n_124_, v___x_128_);
v___x_130_ = lean_unsigned_to_nat(0u);
v___x_131_ = lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_mask_spec__0(v___x_130_, v_init_126_);
v___x_132_ = lp_LanglandsOracles_Oracles_Mat2_closureIdx(v___f_127_, v_cols_125_, v___x_129_, v___x_131_, v_init_126_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_closureCols___boxed(lean_object* v_n_133_, lean_object* v_cols_134_, lean_object* v_init_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = lp_LanglandsOracles_Oracles_Mat2_closureCols(v_n_133_, v_cols_134_, v_init_135_);
lean_dec(v_n_133_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_classA_spec__0(lean_object* v_x_137_){
_start:
{
lean_object* v_a_138_; lean_object* v_d_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v_a_138_ = lean_ctor_get(v_x_137_, 0);
v_d_139_ = lean_ctor_get(v_x_137_, 3);
v___x_140_ = lean_unsigned_to_nat(5u);
v___x_141_ = l_Fin_add(v___x_140_, v_a_138_, v_d_139_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_classA_spec__0___boxed(lean_object* v_x_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_classA_spec__0(v_x_142_);
lean_dec_ref(v_x_142_);
return v_res_143_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_classA___closed__0(void){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_144_ = lean_unsigned_to_nat(5u);
v___x_145_ = lean_unsigned_to_nat(3u);
v___x_146_ = lean_nat_mod(v___x_145_, v___x_144_);
return v___x_146_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_classA___closed__1(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_147_ = lean_unsigned_to_nat(5u);
v___x_148_ = lean_unsigned_to_nat(2u);
v___x_149_ = lean_nat_mod(v___x_148_, v___x_147_);
return v___x_149_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_classA(lean_object* v_x_150_){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_151_ = lean_unsigned_to_nat(5u);
v___x_152_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_classA_spec__0(v_x_150_);
v___x_153_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_classA___closed__0, &lp_LanglandsOracles_Oracles_Mat2_classA___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_classA___closed__0);
v___x_154_ = lean_nat_dec_eq(v___x_152_, v___x_153_);
lean_dec(v___x_152_);
if (v___x_154_ == 0)
{
return v___x_154_;
}
else
{
lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_155_ = lp_LanglandsOracles_Oracles_Mat2_det(v___x_151_, v_x_150_);
v___x_156_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_classA___closed__1, &lp_LanglandsOracles_Oracles_Mat2_classA___closed__1_once, _init_lp_LanglandsOracles_Oracles_Mat2_classA___closed__1);
v___x_157_ = lean_nat_dec_eq(v___x_155_, v___x_156_);
lean_dec(v___x_155_);
return v___x_157_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classA___boxed(lean_object* v_x_158_){
_start:
{
uint8_t v_res_159_; lean_object* v_r_160_; 
v_res_159_ = lp_LanglandsOracles_Oracles_Mat2_classA(v_x_158_);
lean_dec_ref(v_x_158_);
v_r_160_ = lean_box(v_res_159_);
return v_r_160_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_classB(lean_object* v_x_161_){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; uint8_t v___x_165_; 
v___x_162_ = lean_unsigned_to_nat(5u);
v___x_163_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_classA_spec__0(v_x_161_);
v___x_164_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_classA___closed__1, &lp_LanglandsOracles_Oracles_Mat2_classA___closed__1_once, _init_lp_LanglandsOracles_Oracles_Mat2_classA___closed__1);
v___x_165_ = lean_nat_dec_eq(v___x_163_, v___x_164_);
lean_dec(v___x_163_);
if (v___x_165_ == 0)
{
return v___x_165_;
}
else
{
lean_object* v___x_166_; lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_166_ = lp_LanglandsOracles_Oracles_Mat2_det(v___x_162_, v_x_161_);
v___x_167_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_classA___closed__0, &lp_LanglandsOracles_Oracles_Mat2_classA___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_classA___closed__0);
v___x_168_ = lean_nat_dec_eq(v___x_166_, v___x_167_);
lean_dec(v___x_166_);
return v___x_168_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classB___boxed(lean_object* v_x_169_){
_start:
{
uint8_t v_res_170_; lean_object* v_r_171_; 
v_res_170_ = lp_LanglandsOracles_Oracles_Mat2_classB(v_x_169_);
lean_dec_ref(v_x_169_);
v_r_171_ = lean_box(v_res_170_);
return v_r_171_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_classB_x27_spec__0(lean_object* v_x_172_, lean_object* v_y_173_){
_start:
{
lean_object* v_a_174_; lean_object* v_b_175_; lean_object* v_c_176_; lean_object* v_d_177_; lean_object* v_a_178_; lean_object* v_b_179_; lean_object* v_c_180_; lean_object* v_d_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_201_; 
v_a_174_ = lean_ctor_get(v_x_172_, 0);
v_b_175_ = lean_ctor_get(v_x_172_, 1);
v_c_176_ = lean_ctor_get(v_x_172_, 2);
v_d_177_ = lean_ctor_get(v_x_172_, 3);
v_a_178_ = lean_ctor_get(v_y_173_, 0);
v_b_179_ = lean_ctor_get(v_y_173_, 1);
v_c_180_ = lean_ctor_get(v_y_173_, 2);
v_d_181_ = lean_ctor_get(v_y_173_, 3);
v_isSharedCheck_201_ = !lean_is_exclusive(v_y_173_);
if (v_isSharedCheck_201_ == 0)
{
v___x_183_ = v_y_173_;
v_isShared_184_ = v_isSharedCheck_201_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_d_181_);
lean_inc(v_c_180_);
lean_inc(v_b_179_);
lean_inc(v_a_178_);
lean_dec(v_y_173_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_201_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_199_; 
v___x_185_ = lean_unsigned_to_nat(5u);
v___x_186_ = l_Fin_mul(v___x_185_, v_a_174_, v_a_178_);
v___x_187_ = l_Fin_mul(v___x_185_, v_b_175_, v_c_180_);
v___x_188_ = l_Fin_add(v___x_185_, v___x_186_, v___x_187_);
lean_dec(v___x_187_);
lean_dec(v___x_186_);
v___x_189_ = l_Fin_mul(v___x_185_, v_a_174_, v_b_179_);
v___x_190_ = l_Fin_mul(v___x_185_, v_b_175_, v_d_181_);
v___x_191_ = l_Fin_add(v___x_185_, v___x_189_, v___x_190_);
lean_dec(v___x_190_);
lean_dec(v___x_189_);
v___x_192_ = l_Fin_mul(v___x_185_, v_c_176_, v_a_178_);
lean_dec(v_a_178_);
v___x_193_ = l_Fin_mul(v___x_185_, v_d_177_, v_c_180_);
lean_dec(v_c_180_);
v___x_194_ = l_Fin_add(v___x_185_, v___x_192_, v___x_193_);
lean_dec(v___x_193_);
lean_dec(v___x_192_);
v___x_195_ = l_Fin_mul(v___x_185_, v_c_176_, v_b_179_);
lean_dec(v_b_179_);
v___x_196_ = l_Fin_mul(v___x_185_, v_d_177_, v_d_181_);
lean_dec(v_d_181_);
v___x_197_ = l_Fin_add(v___x_185_, v___x_195_, v___x_196_);
lean_dec(v___x_196_);
lean_dec(v___x_195_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 3, v___x_197_);
lean_ctor_set(v___x_183_, 2, v___x_194_);
lean_ctor_set(v___x_183_, 1, v___x_191_);
lean_ctor_set(v___x_183_, 0, v___x_188_);
v___x_199_ = v___x_183_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_188_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v___x_191_);
lean_ctor_set(v_reuseFailAlloc_200_, 2, v___x_194_);
lean_ctor_set(v_reuseFailAlloc_200_, 3, v___x_197_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_classB_x27_spec__0___boxed(lean_object* v_x_202_, lean_object* v_y_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_classB_x27_spec__0(v_x_202_, v_y_203_);
lean_dec_ref(v_x_202_);
return v_res_204_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_classB_x27(lean_object* v_x_205_){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_206_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_classA_spec__0(v_x_205_);
v___x_207_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_classA___closed__1, &lp_LanglandsOracles_Oracles_Mat2_classA___closed__1_once, _init_lp_LanglandsOracles_Oracles_Mat2_classA___closed__1);
v___x_208_ = lean_nat_dec_eq(v___x_206_, v___x_207_);
lean_dec(v___x_206_);
if (v___x_208_ == 0)
{
lean_dec_ref(v_x_205_);
return v___x_208_;
}
else
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; uint8_t v___x_212_; 
lean_inc_ref(v_x_205_);
v___x_209_ = lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_classB_x27_spec__0(v_x_205_, v_x_205_);
lean_dec_ref(v_x_205_);
v___x_210_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_classA_spec__0(v___x_209_);
lean_dec_ref(v___x_209_);
v___x_211_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_classA___closed__0, &lp_LanglandsOracles_Oracles_Mat2_classA___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_classA___closed__0);
v___x_212_ = lean_nat_dec_eq(v___x_210_, v___x_211_);
lean_dec(v___x_210_);
return v___x_212_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classB_x27___boxed(lean_object* v_x_213_){
_start:
{
uint8_t v_res_214_; lean_object* v_r_215_; 
v_res_214_ = lp_LanglandsOracles_Oracles_Mat2_classB_x27(v_x_213_);
v_r_215_ = lean_box(v_res_214_);
return v_r_215_;
}
}
static lean_object* _init_lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__6(void){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__5));
v___x_262_ = l_String_toRawSubstring_x27(v___x_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1(lean_object* v_x_281_, lean_object* v_a_282_, lean_object* v_a_283_){
_start:
{
lean_object* v___x_284_; uint8_t v___x_285_; 
v___x_284_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__12));
v___x_285_ = l_Lean_Syntax_isOfKind(v_x_281_, v___x_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_286_ = lean_box(1);
v___x_287_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v_a_283_);
return v___x_287_;
}
else
{
lean_object* v_quotContext_288_; lean_object* v_currMacroScope_289_; lean_object* v_ref_290_; uint8_t v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v_quotContext_288_ = lean_ctor_get(v_a_282_, 1);
v_currMacroScope_289_ = lean_ctor_get(v_a_282_, 2);
v_ref_290_ = lean_ctor_get(v_a_282_, 5);
v___x_291_ = 0;
v___x_292_ = l_Lean_SourceInfo_fromRef(v_ref_290_, v___x_291_);
v___x_293_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__4));
v___x_294_ = lean_obj_once(&lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__6, &lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__6_once, _init_lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__6);
v___x_295_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__7));
lean_inc(v_currMacroScope_289_);
lean_inc(v_quotContext_288_);
v___x_296_ = l_Lean_addMacroScope(v_quotContext_288_, v___x_295_, v_currMacroScope_289_);
v___x_297_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__10));
lean_inc_n(v___x_292_, 4);
v___x_298_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_298_, 0, v___x_292_);
lean_ctor_set(v___x_298_, 1, v___x_294_);
lean_ctor_set(v___x_298_, 2, v___x_296_);
lean_ctor_set(v___x_298_, 3, v___x_297_);
v___x_299_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__12));
v___x_300_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__14));
v___x_301_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__15));
v___x_302_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_292_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = l_Lean_Syntax_node1(v___x_292_, v___x_300_, v___x_302_);
v___x_304_ = l_Lean_Syntax_node1(v___x_292_, v___x_299_, v___x_303_);
v___x_305_ = l_Lean_Syntax_node2(v___x_292_, v___x_293_, v___x_298_, v___x_304_);
v___x_306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_306_, 0, v___x_305_);
lean_ctor_set(v___x_306_, 1, v_a_283_);
return v___x_306_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___boxed(lean_object* v_x_307_, lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1(v_x_307_, v_a_308_, v_a_309_);
lean_dec_ref(v_a_308_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______unexpand__Oracles__isCSR__fin__1(lean_object* v_x_314_, lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__4));
lean_inc(v_x_314_);
v___x_318_ = l_Lean_Syntax_isOfKind(v_x_314_, v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; lean_object* v___x_320_; 
lean_dec(v_x_314_);
v___x_319_ = lean_box(0);
v___x_320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
lean_ctor_set(v___x_320_, 1, v_a_316_);
return v___x_320_;
}
else
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_321_ = lean_unsigned_to_nat(0u);
v___x_322_ = l_Lean_Syntax_getArg(v_x_314_, v___x_321_);
v___x_323_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______unexpand__Oracles__isCSR__fin__1___closed__1));
lean_inc(v___x_322_);
v___x_324_ = l_Lean_Syntax_isOfKind(v___x_322_, v___x_323_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; lean_object* v___x_326_; 
lean_dec(v___x_322_);
lean_dec(v_x_314_);
v___x_325_ = lean_box(0);
v___x_326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
lean_ctor_set(v___x_326_, 1, v_a_316_);
return v___x_326_;
}
else
{
lean_object* v___x_327_; lean_object* v___x_328_; uint8_t v___x_329_; 
v___x_327_ = lean_unsigned_to_nat(1u);
v___x_328_ = l_Lean_Syntax_getArg(v_x_314_, v___x_327_);
lean_dec(v_x_314_);
lean_inc(v___x_328_);
v___x_329_ = l_Lean_Syntax_matchesNull(v___x_328_, v___x_327_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; lean_object* v___x_331_; 
lean_dec(v___x_328_);
lean_dec(v___x_322_);
v___x_330_ = lean_box(0);
v___x_331_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
lean_ctor_set(v___x_331_, 1, v_a_316_);
return v___x_331_;
}
else
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_332_ = l_Lean_Syntax_getArg(v___x_328_, v___x_321_);
lean_dec(v___x_328_);
v___x_333_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__14));
v___x_334_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______macroRules____private__LanglandsOracles__ImageMod5__0__Oracles__Mat2__termR5__1___closed__15));
v___x_335_ = l_Lean_Syntax_matchesLit(v___x_332_, v___x_333_, v___x_334_);
lean_dec(v___x_332_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; lean_object* v___x_337_; 
lean_dec(v___x_322_);
v___x_336_ = lean_box(0);
v___x_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
lean_ctor_set(v___x_337_, 1, v_a_316_);
return v___x_337_;
}
else
{
lean_object* v_ref_338_; uint8_t v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_ref_338_ = l_Lean_replaceRef(v___x_322_, v_a_315_);
lean_dec(v___x_322_);
v___x_339_ = 0;
v___x_340_ = l_Lean_SourceInfo_fromRef(v_ref_338_, v___x_339_);
lean_dec(v_ref_338_);
v___x_341_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__12));
v___x_342_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2_termR5___closed__13));
lean_inc(v___x_340_);
v___x_343_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_343_, 0, v___x_340_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
v___x_344_ = l_Lean_Syntax_node1(v___x_340_, v___x_341_, v___x_343_);
v___x_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_345_, 0, v___x_344_);
lean_ctor_set(v___x_345_, 1, v_a_316_);
return v___x_345_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______unexpand__Oracles__isCSR__fin__1___boxed(lean_object* v_x_346_, lean_object* v_a_347_, lean_object* v_a_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = lp_LanglandsOracles___private_LanglandsOracles_ImageMod5_0__Oracles_Mat2___aux__LanglandsOracles__ImageMod5______unexpand__Oracles__isCSR__fin__1(v_x_346_, v_a_347_, v_a_348_);
lean_dec(v_a_347_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_apply5(lean_object* v_w_350_, lean_object* v_v_351_){
_start:
{
lean_object* v_a_352_; lean_object* v_b_353_; lean_object* v_c_354_; lean_object* v_d_355_; lean_object* v_fst_356_; lean_object* v_snd_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_371_; 
v_a_352_ = lean_ctor_get(v_w_350_, 0);
v_b_353_ = lean_ctor_get(v_w_350_, 1);
v_c_354_ = lean_ctor_get(v_w_350_, 2);
v_d_355_ = lean_ctor_get(v_w_350_, 3);
v_fst_356_ = lean_ctor_get(v_v_351_, 0);
v_snd_357_ = lean_ctor_get(v_v_351_, 1);
v_isSharedCheck_371_ = !lean_is_exclusive(v_v_351_);
if (v_isSharedCheck_371_ == 0)
{
v___x_359_ = v_v_351_;
v_isShared_360_ = v_isSharedCheck_371_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_snd_357_);
lean_inc(v_fst_356_);
lean_dec(v_v_351_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_371_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_369_; 
v___x_361_ = lean_unsigned_to_nat(5u);
v___x_362_ = l_Fin_mul(v___x_361_, v_a_352_, v_fst_356_);
v___x_363_ = l_Fin_mul(v___x_361_, v_b_353_, v_snd_357_);
v___x_364_ = l_Fin_add(v___x_361_, v___x_362_, v___x_363_);
lean_dec(v___x_363_);
lean_dec(v___x_362_);
v___x_365_ = l_Fin_mul(v___x_361_, v_c_354_, v_fst_356_);
lean_dec(v_fst_356_);
v___x_366_ = l_Fin_mul(v___x_361_, v_d_355_, v_snd_357_);
lean_dec(v_snd_357_);
v___x_367_ = l_Fin_add(v___x_361_, v___x_365_, v___x_366_);
lean_dec(v___x_366_);
lean_dec(v___x_365_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 1, v___x_367_);
lean_ctor_set(v___x_359_, 0, v___x_364_);
v___x_369_ = v___x_359_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v___x_364_);
lean_ctor_set(v_reuseFailAlloc_370_, 1, v___x_367_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_apply5___boxed(lean_object* v_w_372_, lean_object* v_v_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = lp_LanglandsOracles_Oracles_Mat2_apply5(v_w_372_, v_v_373_);
lean_dec_ref(v_w_372_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__0(lean_object* v_i_375_, lean_object* v_a_376_, lean_object* v_a_377_){
_start:
{
if (lean_obj_tag(v_a_376_) == 0)
{
lean_object* v___x_378_; 
v___x_378_ = lean_array_to_list(v_a_377_);
return v___x_378_;
}
else
{
lean_object* v_head_379_; lean_object* v_tail_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_397_; 
v_head_379_ = lean_ctor_get(v_a_376_, 0);
v_tail_380_ = lean_ctor_get(v_a_376_, 1);
v_isSharedCheck_397_ = !lean_is_exclusive(v_a_376_);
if (v_isSharedCheck_397_ == 0)
{
v___x_382_ = v_a_376_;
v_isShared_383_ = v_isSharedCheck_397_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_tail_380_);
lean_inc(v_head_379_);
lean_dec(v_a_376_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_397_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_393_ = lean_unsigned_to_nat(0u);
v___x_394_ = lean_nat_dec_eq(v_i_375_, v___x_393_);
if (v___x_394_ == 0)
{
goto v___jp_384_;
}
else
{
uint8_t v___x_395_; 
v___x_395_ = lean_nat_dec_eq(v_head_379_, v___x_393_);
if (v___x_395_ == 0)
{
goto v___jp_384_;
}
else
{
lean_del_object(v___x_382_);
lean_dec(v_head_379_);
v_a_376_ = v_tail_380_;
goto _start;
}
}
v___jp_384_:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_389_; 
v___x_385_ = lean_unsigned_to_nat(5u);
v___x_386_ = lean_nat_mod(v_i_375_, v___x_385_);
v___x_387_ = lean_nat_mod(v_head_379_, v___x_385_);
lean_dec(v_head_379_);
if (v_isShared_383_ == 0)
{
lean_ctor_set_tag(v___x_382_, 0);
lean_ctor_set(v___x_382_, 1, v___x_387_);
lean_ctor_set(v___x_382_, 0, v___x_386_);
v___x_389_ = v___x_382_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_386_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v___x_387_);
v___x_389_ = v_reuseFailAlloc_392_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
lean_object* v___x_390_; 
v___x_390_ = lean_array_push(v_a_377_, v___x_389_);
v_a_376_ = v_tail_380_;
v_a_377_ = v___x_390_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__0___boxed(lean_object* v_i_398_, lean_object* v_a_399_, lean_object* v_a_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__0(v_i_398_, v_a_399_, v_a_400_);
lean_dec(v_i_398_);
return v_res_401_;
}
}
static lean_object* _init_lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___closed__0(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_402_ = lean_unsigned_to_nat(5u);
v___x_403_ = l_List_range(v___x_402_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1(lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
if (lean_obj_tag(v_a_406_) == 0)
{
lean_object* v___x_408_; 
v___x_408_ = lean_array_to_list(v_a_407_);
return v___x_408_;
}
else
{
lean_object* v_head_409_; lean_object* v_tail_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v_head_409_ = lean_ctor_get(v_a_406_, 0);
v_tail_410_ = lean_ctor_get(v_a_406_, 1);
v___x_411_ = lean_obj_once(&lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___closed__0, &lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___closed__0_once, _init_lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___closed__0);
v___x_412_ = ((lean_object*)(lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___closed__1));
v___x_413_ = lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__0(v_head_409_, v___x_411_, v___x_412_);
v___x_414_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_407_, v___x_413_);
v_a_406_ = v_tail_410_;
v_a_407_ = v___x_414_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___boxed(lean_object* v_a_416_, lean_object* v_a_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1(v_a_416_, v_a_417_);
lean_dec(v_a_416_);
return v_res_418_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_nonzeroVecs___closed__0(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_419_ = ((lean_object*)(lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___closed__1));
v___x_420_ = lean_obj_once(&lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___closed__0, &lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___closed__0_once, _init_lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1___closed__0);
v___x_421_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_nonzeroVecs_spec__1(v___x_420_, v___x_419_);
return v___x_421_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_nonzeroVecs(void){
_start:
{
lean_object* v___x_422_; 
v___x_422_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_nonzeroVecs___closed__0, &lp_LanglandsOracles_Oracles_Mat2_nonzeroVecs___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_nonzeroVecs___closed__0);
return v___x_422_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_inv5___closed__0(void){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_423_ = lean_unsigned_to_nat(5u);
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = lean_nat_mod(v___x_424_, v___x_423_);
return v___x_425_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_inv5___closed__1(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_426_ = lean_unsigned_to_nat(5u);
v___x_427_ = lean_unsigned_to_nat(1u);
v___x_428_ = lean_nat_mod(v___x_427_, v___x_426_);
return v___x_428_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_inv5___closed__2(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_429_ = lean_unsigned_to_nat(5u);
v___x_430_ = lean_unsigned_to_nat(4u);
v___x_431_ = lean_nat_mod(v___x_430_, v___x_429_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_inv5(lean_object* v_x_432_){
_start:
{
lean_object* v___x_433_; lean_object* v___y_435_; lean_object* v___x_454_; lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_433_ = lean_unsigned_to_nat(5u);
v___x_454_ = lp_LanglandsOracles_Oracles_Mat2_det(v___x_433_, v_x_432_);
v___x_455_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_inv5___closed__1, &lp_LanglandsOracles_Oracles_Mat2_inv5___closed__1_once, _init_lp_LanglandsOracles_Oracles_Mat2_inv5___closed__1);
v___x_456_ = lean_nat_dec_eq(v___x_454_, v___x_455_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_457_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_classA___closed__1, &lp_LanglandsOracles_Oracles_Mat2_classA___closed__1_once, _init_lp_LanglandsOracles_Oracles_Mat2_classA___closed__1);
v___x_458_ = lean_nat_dec_eq(v___x_454_, v___x_457_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_459_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_classA___closed__0, &lp_LanglandsOracles_Oracles_Mat2_classA___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_classA___closed__0);
v___x_460_ = lean_nat_dec_eq(v___x_454_, v___x_459_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_461_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_inv5___closed__2, &lp_LanglandsOracles_Oracles_Mat2_inv5___closed__2_once, _init_lp_LanglandsOracles_Oracles_Mat2_inv5___closed__2);
v___x_462_ = lean_nat_dec_eq(v___x_454_, v___x_461_);
lean_dec(v___x_454_);
if (v___x_462_ == 0)
{
lean_object* v___x_463_; 
v___x_463_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_inv5___closed__0, &lp_LanglandsOracles_Oracles_Mat2_inv5___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_inv5___closed__0);
v___y_435_ = v___x_463_;
goto v___jp_434_;
}
else
{
v___y_435_ = v___x_461_;
goto v___jp_434_;
}
}
else
{
lean_dec(v___x_454_);
v___y_435_ = v___x_457_;
goto v___jp_434_;
}
}
else
{
lean_object* v___x_464_; 
lean_dec(v___x_454_);
v___x_464_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_classA___closed__0, &lp_LanglandsOracles_Oracles_Mat2_classA___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_classA___closed__0);
v___y_435_ = v___x_464_;
goto v___jp_434_;
}
}
else
{
lean_dec(v___x_454_);
v___y_435_ = v___x_455_;
goto v___jp_434_;
}
v___jp_434_:
{
lean_object* v_a_436_; lean_object* v_b_437_; lean_object* v_c_438_; lean_object* v_d_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_453_; 
v_a_436_ = lean_ctor_get(v_x_432_, 0);
v_b_437_ = lean_ctor_get(v_x_432_, 1);
v_c_438_ = lean_ctor_get(v_x_432_, 2);
v_d_439_ = lean_ctor_get(v_x_432_, 3);
v_isSharedCheck_453_ = !lean_is_exclusive(v_x_432_);
if (v_isSharedCheck_453_ == 0)
{
v___x_441_ = v_x_432_;
v_isShared_442_ = v_isSharedCheck_453_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_d_439_);
lean_inc(v_c_438_);
lean_inc(v_b_437_);
lean_inc(v_a_436_);
lean_dec(v_x_432_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_453_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_451_; 
v___x_443_ = l_Fin_mul(v___x_433_, v___y_435_, v_d_439_);
lean_dec(v_d_439_);
v___x_444_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_inv5___closed__0, &lp_LanglandsOracles_Oracles_Mat2_inv5___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_inv5___closed__0);
v___x_445_ = l_Fin_sub(v___x_433_, v___x_444_, v_b_437_);
lean_dec(v_b_437_);
v___x_446_ = l_Fin_mul(v___x_433_, v___y_435_, v___x_445_);
lean_dec(v___x_445_);
v___x_447_ = l_Fin_sub(v___x_433_, v___x_444_, v_c_438_);
lean_dec(v_c_438_);
v___x_448_ = l_Fin_mul(v___x_433_, v___y_435_, v___x_447_);
lean_dec(v___x_447_);
v___x_449_ = l_Fin_mul(v___x_433_, v___y_435_, v_a_436_);
lean_dec(v_a_436_);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 3, v___x_449_);
lean_ctor_set(v___x_441_, 2, v___x_448_);
lean_ctor_set(v___x_441_, 1, v___x_446_);
lean_ctor_set(v___x_441_, 0, v___x_443_);
v___x_451_ = v___x_441_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v___x_443_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v___x_446_);
lean_ctor_set(v_reuseFailAlloc_452_, 2, v___x_448_);
lean_ctor_set(v_reuseFailAlloc_452_, 3, v___x_449_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Mat2_glIdx5_spec__0(lean_object* v_a_465_, lean_object* v_a_466_){
_start:
{
if (lean_obj_tag(v_a_465_) == 0)
{
lean_object* v___x_467_; 
v___x_467_ = l_List_reverse___redArg(v_a_466_);
return v___x_467_;
}
else
{
lean_object* v_head_468_; lean_object* v_tail_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_479_; 
v_head_468_ = lean_ctor_get(v_a_465_, 0);
v_tail_469_ = lean_ctor_get(v_a_465_, 1);
v_isSharedCheck_479_ = !lean_is_exclusive(v_a_465_);
if (v_isSharedCheck_479_ == 0)
{
v___x_471_ = v_a_465_;
v_isShared_472_ = v_isSharedCheck_479_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_tail_469_);
lean_inc(v_head_468_);
lean_dec(v_a_465_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_479_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_473_ = lean_unsigned_to_nat(5u);
v___x_474_ = lp_LanglandsOracles_Oracles_Mat2_encode(v___x_473_, v_head_468_);
lean_dec(v_head_468_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 1, v_a_466_);
lean_ctor_set(v___x_471_, 0, v___x_474_);
v___x_476_ = v___x_471_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v___x_474_);
lean_ctor_set(v_reuseFailAlloc_478_, 1, v_a_466_);
v___x_476_ = v_reuseFailAlloc_478_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
v_a_465_ = v_tail_469_;
v_a_466_ = v___x_476_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__0(void){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = lean_unsigned_to_nat(5u);
v___x_481_ = lp_LanglandsOracles_Oracles_Mat2_gl(v___x_480_);
return v___x_481_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__1(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_482_ = lean_box(0);
v___x_483_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__0, &lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__0);
v___x_484_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Mat2_glIdx5_spec__0(v___x_483_, v___x_482_);
return v___x_484_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_glIdx5(void){
_start:
{
lean_object* v___x_485_; 
v___x_485_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__1, &lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__1_once, _init_lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__1);
return v___x_485_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_gRep___closed__0(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_486_ = lean_unsigned_to_nat(455u);
v___x_487_ = lean_unsigned_to_nat(5u);
v___x_488_ = lp_LanglandsOracles_Oracles_Mat2_decode___redArg(v___x_487_, v___x_486_);
return v___x_488_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_gRep(void){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_gRep___closed__0, &lp_LanglandsOracles_Oracles_Mat2_gRep___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_gRep___closed__0);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Mat2_colsB_spec__1(lean_object* v_a_490_, lean_object* v_a_491_){
_start:
{
if (lean_obj_tag(v_a_490_) == 0)
{
lean_object* v___x_492_; 
v___x_492_ = l_List_reverse___redArg(v_a_491_);
return v___x_492_;
}
else
{
lean_object* v_head_493_; lean_object* v_tail_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_506_; 
v_head_493_ = lean_ctor_get(v_a_490_, 0);
v_tail_494_ = lean_ctor_get(v_a_490_, 1);
v_isSharedCheck_506_ = !lean_is_exclusive(v_a_490_);
if (v_isSharedCheck_506_ == 0)
{
v___x_496_ = v_a_490_;
v_isShared_497_ = v_isSharedCheck_506_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_tail_494_);
lean_inc(v_head_493_);
lean_dec(v_a_490_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_506_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_498_ = lean_unsigned_to_nat(5u);
v___x_499_ = lp_LanglandsOracles_Oracles_Mat2_encode(v___x_498_, v_head_493_);
lean_dec(v_head_493_);
v___x_500_ = lp_LanglandsOracles_Oracles_Mat2_column(v___x_498_, v___x_499_);
v___x_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_499_);
lean_ctor_set(v___x_501_, 1, v___x_500_);
if (v_isShared_497_ == 0)
{
lean_ctor_set(v___x_496_, 1, v_a_491_);
lean_ctor_set(v___x_496_, 0, v___x_501_);
v___x_503_ = v___x_496_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_501_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v_a_491_);
v___x_503_ = v_reuseFailAlloc_505_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
v_a_490_ = v_tail_494_;
v_a_491_ = v___x_503_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_colsB_spec__0(lean_object* v_a_507_, lean_object* v_a_508_){
_start:
{
if (lean_obj_tag(v_a_507_) == 0)
{
lean_object* v___x_509_; 
v___x_509_ = l_List_reverse___redArg(v_a_508_);
return v___x_509_;
}
else
{
lean_object* v_head_510_; lean_object* v_tail_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_521_; 
v_head_510_ = lean_ctor_get(v_a_507_, 0);
v_tail_511_ = lean_ctor_get(v_a_507_, 1);
v_isSharedCheck_521_ = !lean_is_exclusive(v_a_507_);
if (v_isSharedCheck_521_ == 0)
{
v___x_513_ = v_a_507_;
v_isShared_514_ = v_isSharedCheck_521_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_tail_511_);
lean_inc(v_head_510_);
lean_dec(v_a_507_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_521_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
uint8_t v___x_515_; 
lean_inc(v_head_510_);
v___x_515_ = lp_LanglandsOracles_Oracles_Mat2_classB_x27(v_head_510_);
if (v___x_515_ == 0)
{
lean_del_object(v___x_513_);
lean_dec(v_head_510_);
v_a_507_ = v_tail_511_;
goto _start;
}
else
{
lean_object* v___x_518_; 
if (v_isShared_514_ == 0)
{
lean_ctor_set(v___x_513_, 1, v_a_508_);
v___x_518_ = v___x_513_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_head_510_);
lean_ctor_set(v_reuseFailAlloc_520_, 1, v_a_508_);
v___x_518_ = v_reuseFailAlloc_520_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
v_a_507_ = v_tail_511_;
v_a_508_ = v___x_518_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_colsB___closed__0(void){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_522_ = lean_box(0);
v___x_523_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__0, &lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_glIdx5___closed__0);
v___x_524_ = lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_colsB_spec__0(v___x_523_, v___x_522_);
return v___x_524_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_colsB___closed__1(void){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_525_ = lean_box(0);
v___x_526_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_colsB___closed__0, &lp_LanglandsOracles_Oracles_Mat2_colsB___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_colsB___closed__0);
v___x_527_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Mat2_colsB_spec__1(v___x_526_, v___x_525_);
return v___x_527_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_colsB(void){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_colsB___closed__1, &lp_LanglandsOracles_Oracles_Mat2_colsB___closed__1_once, _init_lp_LanglandsOracles_Oracles_Mat2_colsB___closed__1);
return v___x_528_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_colRep___closed__0(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_529_ = lp_LanglandsOracles_Oracles_Mat2_gRep;
v___x_530_ = lean_unsigned_to_nat(5u);
v___x_531_ = lp_LanglandsOracles_Oracles_Mat2_encode(v___x_530_, v___x_529_);
return v___x_531_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_colRep___closed__1(void){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_532_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_colRep___closed__0, &lp_LanglandsOracles_Oracles_Mat2_colRep___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_colRep___closed__0);
v___x_533_ = lean_unsigned_to_nat(5u);
v___x_534_ = lp_LanglandsOracles_Oracles_Mat2_column(v___x_533_, v___x_532_);
return v___x_534_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_colRep(void){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_colRep___closed__1, &lp_LanglandsOracles_Oracles_Mat2_colRep___closed__1_once, _init_lp_LanglandsOracles_Oracles_Mat2_colRep___closed__1);
return v___x_535_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ImageMod2(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Data(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_ImageMod5(uint8_t builtin) {
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
res = initialize_LanglandsOracles_LanglandsOracles_ImageMod2(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_LanglandsOracles_Oracles_Mat2_nonzeroVecs = _init_lp_LanglandsOracles_Oracles_Mat2_nonzeroVecs();
lean_mark_persistent(lp_LanglandsOracles_Oracles_Mat2_nonzeroVecs);
lp_LanglandsOracles_Oracles_Mat2_glIdx5 = _init_lp_LanglandsOracles_Oracles_Mat2_glIdx5();
lean_mark_persistent(lp_LanglandsOracles_Oracles_Mat2_glIdx5);
lp_LanglandsOracles_Oracles_Mat2_gRep = _init_lp_LanglandsOracles_Oracles_Mat2_gRep();
lean_mark_persistent(lp_LanglandsOracles_Oracles_Mat2_gRep);
lp_LanglandsOracles_Oracles_Mat2_colsB = _init_lp_LanglandsOracles_Oracles_Mat2_colsB();
lean_mark_persistent(lp_LanglandsOracles_Oracles_Mat2_colsB);
lp_LanglandsOracles_Oracles_Mat2_colRep = _init_lp_LanglandsOracles_Oracles_Mat2_colRep();
lean_mark_persistent(lp_LanglandsOracles_Oracles_Mat2_colRep);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
