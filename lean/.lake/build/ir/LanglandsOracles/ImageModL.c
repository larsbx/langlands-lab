// Lean compiler output
// Module: LanglandsOracles.ImageModL
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
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_encode(lean_object*, lean_object*);
uint8_t l_List_beq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Fin_mul(lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_add(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Nat_blt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t l_List_any___redArg(lean_object*, lean_object*);
uint8_t l_List_all___redArg(lean_object*, lean_object*);
lean_object* l_Fin_sub(lean_object*, lean_object*, lean_object*);
lean_object* l_List_find_x3f___redArg(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_fins(lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Fin_add___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_mul___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_M2_mul___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_apGeneral(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_decode___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_mulNat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_mulNat___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_evalW(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_evalW___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_evalWord(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_evalWord___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_evalW_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_evalW_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_evalW_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_evalW_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__0 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__0_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__1 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__1_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "LanglandsOracles"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__2 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__2_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__1_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__2_value),LEAN_SCALAR_PTR_LITERAL(129, 76, 196, 53, 240, 30, 156, 155)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__3 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__3_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ImageModL"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__4 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__4_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__3_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 42, 158, 35, 82, 213, 97, 98)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__5 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__5_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(175, 7, 185, 28, 230, 207, 228, 174)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__6 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__6_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Oracles"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__7 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__7_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__6_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__7_value),LEAN_SCALAR_PTR_LITERAL(41, 224, 7, 190, 43, 44, 23, 121)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__8 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__8_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Mat2"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__9 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__9_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__8_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__9_value),LEAN_SCALAR_PTR_LITERAL(189, 183, 21, 201, 251, 186, 164, 242)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__10 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__10_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "termR"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__11 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__11_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__10_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__11_value),LEAN_SCALAR_PTR_LITERAL(182, 118, 7, 245, 218, 110, 214, 201)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__12 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__12_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "R"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__13 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__13_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__13_value)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__14 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__14_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__12_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__14_value)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__15 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__15_value;
LEAN_EXPORT const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__15_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__2 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__2_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__3 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__3_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__4_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__4_value_aux_1),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__4_value_aux_2),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__4 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__4_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "isCSR_fin"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__5 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__5_value;
static lean_once_cell_t lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__6;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(231, 148, 81, 8, 39, 87, 8, 130)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__7 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__7_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__7_value),LEAN_SCALAR_PTR_LITERAL(37, 62, 120, 162, 179, 49, 32, 29)}};
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__8_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(57, 82, 15, 153, 4, 190, 55, 41)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__8 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__8_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__9 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__9_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__10 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__10_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__11 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__11_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__12 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__12_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__13 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__13_value;
static lean_once_cell_t lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__14;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(85, 67, 188, 79, 172, 243, 130, 138)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__15 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__15_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(85, 67, 188, 79, 172, 243, 130, 138)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__16 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__16_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__17 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__17_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__16_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(232, 131, 65, 253, 20, 145, 180, 103)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__18 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__18_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__18_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__2_value),LEAN_SCALAR_PTR_LITERAL(154, 62, 149, 59, 6, 211, 147, 115)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__19 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__19_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__19_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__4_value),LEAN_SCALAR_PTR_LITERAL(185, 179, 252, 18, 232, 235, 87, 63)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__20 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__20_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__20_value),((lean_object*)(((size_t)(1226545339) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(233, 222, 57, 136, 151, 162, 97, 241)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__21 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__21_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__22 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__22_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__21_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(186, 65, 204, 112, 241, 1, 180, 39)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__23 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__23_value;
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__24 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__24_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__23_value),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(134, 232, 199, 55, 204, 156, 43, 199)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__25 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__25_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__25_value),((lean_object*)(((size_t)(7) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(149, 20, 159, 133, 172, 166, 29, 22)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__26 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__26_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__27 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__27_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__27_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__28 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__28_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______unexpand__Oracles__isCSR__fin__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______unexpand__Oracles__isCSR__fin__1___closed__0 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______unexpand__Oracles__isCSR__fin__1___closed__0_value;
static const lean_ctor_object lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______unexpand__Oracles__isCSR__fin__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______unexpand__Oracles__isCSR__fin__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______unexpand__Oracles__isCSR__fin__1___closed__1 = (const lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______unexpand__Oracles__isCSR__fin__1___closed__1_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______unexpand__Oracles__isCSR__fin__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______unexpand__Oracles__isCSR__fin__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_applyV(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_applyV___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_invOf___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_invOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_invOf___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_invOf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E21___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_diag___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_diag___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_diag(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_diag___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_M2pow___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_M2pow___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_M2pow(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_M2pow___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_finPow___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_finPow___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_finPow(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_finPow___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_any___at___00Oracles_Mat2_zetaGen_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_any___at___00Oracles_Mat2_zetaGen_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_zetaGen_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_zetaGen_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_zetaGen(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_zetaGen___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__2___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classMats___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classMats(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_S__generates___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_S__generates___redArg___closed__0;
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_S__generates___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_S__generates___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_S__generates(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_S__generates___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pointwise___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pointwise___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pointwise(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pointwise___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pairOk(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pairOk___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_apMod(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_apMod___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_curveOk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_curveOk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_curveOk_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_curveOk_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_any___at___00Oracles_Mat2_invTable_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_any___at___00Oracles_Mat2_invTable_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_invTable_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_invTable_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_invTable(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_invTable___boxed(lean_object*);
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticTrace_sq_tac"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__0_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__7_value),LEAN_SCALAR_PTR_LITERAL(37, 62, 120, 162, 179, 49, 32, 29)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__1_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__9_value),LEAN_SCALAR_PTR_LITERAL(105, 3, 156, 167, 176, 247, 235, 154)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__1_value_aux_1),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 203, 38, 208, 55, 243, 214, 26)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__1 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__1_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "trace_sq_tac"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__2 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__2_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__3 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__3_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__3_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__4 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__4_value;
LEAN_EXPORT const lean_object* lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__4_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__0_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__1 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__1_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__2_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__2_value_aux_1),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__2_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 253, 122, 28, 77, 248, 149, 120)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__2 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__2_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__3 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__3_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__4 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__4_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__5_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__5_value_aux_1),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__5_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__5 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__5_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__6 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__6_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__7_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__7_value_aux_1),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__7_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__7 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__7_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__8 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__8_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__9_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__9_value_aux_1),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__9_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(41, 145, 9, 18, 75, 146, 159, 78)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__9 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__9_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__10 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__10_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__11;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__12 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__12_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__13 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__13_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__14;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(47, 22, 244, 233, 226, 169, 241, 142)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__15 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__15_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__16 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__16_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__17;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(38, 183, 255, 58, 84, 31, 100, 5)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__18 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__18_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "d"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__19 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__19_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__20;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(48, 234, 148, 175, 115, 149, 2, 231)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__21 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__21_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__22;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rwSeq"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__23 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__23_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__24_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__24_value_aux_1),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__24_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(50, 16, 185, 246, 153, 187, 181, 153)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__24 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__24_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "rw"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__25 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__25_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__26 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__26_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__27_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__27_value_aux_1),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__27_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__26_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__27 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__27_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rwRuleSeq"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__28 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__28_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__29_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__29_value_aux_1),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__29_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(170, 212, 96, 120, 212, 17, 101, 100)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__29 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__29_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__30 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__30_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rwRule"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__31 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__31_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__32_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__32_value_aux_1),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__32_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__31_value),LEAN_SCALAR_PTR_LITERAL(163, 12, 102, 31, 194, 63, 248, 122)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__32 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__32_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__33 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__33_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__34_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__34_value_aux_1),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__34_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 149, 207, 196, 17, 4, 77, 74)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__34 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__34_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__35_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__35_value_aux_1),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__35_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__35 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__35_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__36 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__36_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__37_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__37_value_aux_1),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__37_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__37 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__37_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__38 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__38_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__38_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__39 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__39_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__40 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__40_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__41;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__7_value),LEAN_SCALAR_PTR_LITERAL(37, 62, 120, 162, 179, 49, 32, 29)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__42_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__9_value),LEAN_SCALAR_PTR_LITERAL(105, 3, 156, 167, 176, 247, 235, 154)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__42 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__42_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__42_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__43 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__43_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__43_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__44 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__44_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__45 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__45_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__45_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__46 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__46_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__47 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__47_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__48_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__48_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__48_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__48_value_aux_1),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__48_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__47_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__48 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__48_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__49 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__49_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__50 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__50_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__51 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__51_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mul_add"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__52 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__52_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__53;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__52_value),LEAN_SCALAR_PTR_LITERAL(99, 98, 107, 61, 217, 120, 118, 191)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__54 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__54_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__55 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__55_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "add_mul"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__56 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__56_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__57;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__56_value),LEAN_SCALAR_PTR_LITERAL(207, 208, 252, 7, 47, 200, 83, 4)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__58 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__58_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mul_comm"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__59 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__59_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__60;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__59_value),LEAN_SCALAR_PTR_LITERAL(208, 157, 4, 183, 17, 39, 221, 175)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__61 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__61_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__62 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__62_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "generalize"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__63 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__63_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__64_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__64_value_aux_1),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__64_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__63_value),LEAN_SCALAR_PTR_LITERAL(63, 25, 193, 30, 218, 249, 163, 156)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__64 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__64_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "generalizeArg"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__65 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__65_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__66_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__66_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__66_value_aux_1),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__66_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__65_value),LEAN_SCALAR_PTR_LITERAL(166, 171, 182, 208, 25, 25, 73, 83)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__66 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__66_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_*_"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__67 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__67_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__67_value),LEAN_SCALAR_PTR_LITERAL(166, 30, 182, 203, 156, 152, 64, 201)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__68 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__68_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__69 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__69_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__70 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__70_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "P"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__71 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__71_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__72;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(160, 230, 119, 31, 245, 11, 149, 236)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__73 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__73_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "T"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__74 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__74_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__75;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__74_value),LEAN_SCALAR_PTR_LITERAL(135, 253, 241, 228, 175, 24, 236, 176)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__76 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__76_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "U"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__77 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__77_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__78_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__78;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(160, 210, 9, 197, 156, 33, 178, 111)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__79 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__79_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Q"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__80 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__80_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__81_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__81;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__80_value),LEAN_SCALAR_PTR_LITERAL(89, 164, 225, 150, 4, 27, 219, 195)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__82 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__82_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "omega"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__83 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__83_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__84_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__84_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__84_value_aux_0),((lean_object*)&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__84_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__84_value_aux_1),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__84_value_aux_2),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__83_value),LEAN_SCALAR_PTR_LITERAL(138, 49, 229, 237, 137, 52, 176, 206)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__84 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__84_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "11a1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__0_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "17a1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__1 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__1_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "19a1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__2 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__2_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "37a1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__3 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__3_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "37b1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__4 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__4_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "43a1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__5 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__5_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "53a1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__6 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__6_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "61a1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__7 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__7_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "67a1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__8 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__8_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "73a1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__9 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__9_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "79a1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__10 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__10_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "83a1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__11 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__11_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "89a1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__12 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__12_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "89b1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__13 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__13_value;
static const lean_string_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "101a1"};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__14 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__14_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__15 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__15_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__13_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__15_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__16 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__16_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__12_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__16_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__17 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__17_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__11_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__17_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__18 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__18_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__10_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__18_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__19 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__19_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__9_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__19_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__20 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__20_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__8_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__20_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__21 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__21_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__7_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__21_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__22 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__22_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__6_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__22_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__23 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__23_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__5_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__23_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__24 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__24_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__4_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__24_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__25 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__25_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__3_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__25_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__26 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__26_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__2_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__26_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__27 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__27_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__1_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__27_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__28 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__28_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__0_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__28_value)}};
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__29 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__29_value;
LEAN_EXPORT const lean_object* lp_LanglandsOracles_Oracles_Mat2_allLabels = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_allLabels___closed__29_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_mulNat(lean_object* v_n_1_, lean_object* v_i_2_, lean_object* v_j_3_){
_start:
{
lean_object* v_a_4_; lean_object* v_i1_5_; lean_object* v_b_6_; lean_object* v_i2_7_; lean_object* v_c_8_; lean_object* v___x_9_; lean_object* v_d_10_; lean_object* v_a_x27_11_; lean_object* v_j1_12_; lean_object* v_b_x27_13_; lean_object* v_j2_14_; lean_object* v_c_x27_15_; lean_object* v___x_16_; lean_object* v_d_x27_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_a_4_ = lean_nat_mod(v_i_2_, v_n_1_);
v_i1_5_ = lean_nat_div(v_i_2_, v_n_1_);
v_b_6_ = lean_nat_mod(v_i1_5_, v_n_1_);
v_i2_7_ = lean_nat_div(v_i1_5_, v_n_1_);
lean_dec(v_i1_5_);
v_c_8_ = lean_nat_mod(v_i2_7_, v_n_1_);
v___x_9_ = lean_nat_div(v_i2_7_, v_n_1_);
lean_dec(v_i2_7_);
v_d_10_ = lean_nat_mod(v___x_9_, v_n_1_);
lean_dec(v___x_9_);
v_a_x27_11_ = lean_nat_mod(v_j_3_, v_n_1_);
v_j1_12_ = lean_nat_div(v_j_3_, v_n_1_);
v_b_x27_13_ = lean_nat_mod(v_j1_12_, v_n_1_);
v_j2_14_ = lean_nat_div(v_j1_12_, v_n_1_);
lean_dec(v_j1_12_);
v_c_x27_15_ = lean_nat_mod(v_j2_14_, v_n_1_);
v___x_16_ = lean_nat_div(v_j2_14_, v_n_1_);
lean_dec(v_j2_14_);
v_d_x27_17_ = lean_nat_mod(v___x_16_, v_n_1_);
lean_dec(v___x_16_);
v___x_18_ = lean_nat_mul(v_a_4_, v_a_x27_11_);
v___x_19_ = lean_nat_mul(v_b_6_, v_c_x27_15_);
v___x_20_ = lean_nat_add(v___x_18_, v___x_19_);
lean_dec(v___x_19_);
lean_dec(v___x_18_);
v___x_21_ = lean_nat_mod(v___x_20_, v_n_1_);
lean_dec(v___x_20_);
v___x_22_ = lean_nat_mul(v_a_4_, v_b_x27_13_);
lean_dec(v_a_4_);
v___x_23_ = lean_nat_mul(v_b_6_, v_d_x27_17_);
lean_dec(v_b_6_);
v___x_24_ = lean_nat_add(v___x_22_, v___x_23_);
lean_dec(v___x_23_);
lean_dec(v___x_22_);
v___x_25_ = lean_nat_mod(v___x_24_, v_n_1_);
lean_dec(v___x_24_);
v___x_26_ = lean_nat_mul(v_c_8_, v_a_x27_11_);
lean_dec(v_a_x27_11_);
v___x_27_ = lean_nat_mul(v_d_10_, v_c_x27_15_);
lean_dec(v_c_x27_15_);
v___x_28_ = lean_nat_add(v___x_26_, v___x_27_);
lean_dec(v___x_27_);
lean_dec(v___x_26_);
v___x_29_ = lean_nat_mod(v___x_28_, v_n_1_);
lean_dec(v___x_28_);
v___x_30_ = lean_nat_mul(v_c_8_, v_b_x27_13_);
lean_dec(v_b_x27_13_);
lean_dec(v_c_8_);
v___x_31_ = lean_nat_mul(v_d_10_, v_d_x27_17_);
lean_dec(v_d_x27_17_);
lean_dec(v_d_10_);
v___x_32_ = lean_nat_add(v___x_30_, v___x_31_);
lean_dec(v___x_31_);
lean_dec(v___x_30_);
v___x_33_ = lean_nat_mod(v___x_32_, v_n_1_);
lean_dec(v___x_32_);
v___x_34_ = lean_nat_mul(v_n_1_, v___x_33_);
lean_dec(v___x_33_);
v___x_35_ = lean_nat_add(v___x_29_, v___x_34_);
lean_dec(v___x_34_);
lean_dec(v___x_29_);
v___x_36_ = lean_nat_mul(v_n_1_, v___x_35_);
lean_dec(v___x_35_);
v___x_37_ = lean_nat_add(v___x_25_, v___x_36_);
lean_dec(v___x_36_);
lean_dec(v___x_25_);
v___x_38_ = lean_nat_mul(v_n_1_, v___x_37_);
lean_dec(v___x_37_);
v___x_39_ = lean_nat_add(v___x_21_, v___x_38_);
lean_dec(v___x_38_);
lean_dec(v___x_21_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_mulNat___boxed(lean_object* v_n_40_, lean_object* v_i_41_, lean_object* v_j_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = lp_LanglandsOracles_Oracles_Mat2_mulNat(v_n_40_, v_i_41_, v_j_42_);
lean_dec(v_j_42_);
lean_dec(v_i_41_);
lean_dec(v_n_40_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_evalW(lean_object* v_n_44_, lean_object* v_g_45_, lean_object* v_h_46_, lean_object* v_x_47_, lean_object* v_x_48_){
_start:
{
lean_object* v_zero_49_; uint8_t v_isZero_50_; 
v_zero_49_ = lean_unsigned_to_nat(0u);
v_isZero_50_ = lean_nat_dec_eq(v_x_47_, v_zero_49_);
if (v_isZero_50_ == 1)
{
return v_zero_49_;
}
else
{
lean_object* v___x_51_; uint8_t v___x_52_; 
v___x_51_ = lean_unsigned_to_nat(2u);
v___x_52_ = l_Nat_blt(v_x_48_, v___x_51_);
if (v___x_52_ == 0)
{
lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_53_ = lean_unsigned_to_nat(4u);
v___x_54_ = l_Nat_blt(v_x_48_, v___x_53_);
if (v___x_54_ == 0)
{
lean_object* v_one_55_; lean_object* v_n_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; 
v_one_55_ = lean_unsigned_to_nat(1u);
v_n_56_ = lean_nat_sub(v_x_47_, v_one_55_);
v___x_57_ = lean_nat_shiftr(v_x_48_, v_one_55_);
v___x_58_ = lp_LanglandsOracles_Oracles_Mat2_evalW(v_n_44_, v_g_45_, v_h_46_, v_n_56_, v___x_57_);
lean_dec(v___x_57_);
lean_dec(v_n_56_);
v___x_59_ = lean_nat_mod(v_x_48_, v___x_51_);
v___x_60_ = lean_nat_dec_eq(v___x_59_, v_one_55_);
lean_dec(v___x_59_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; 
v___x_61_ = lp_LanglandsOracles_Oracles_Mat2_mulNat(v_n_44_, v___x_58_, v_g_45_);
lean_dec(v___x_58_);
return v___x_61_;
}
else
{
lean_object* v___x_62_; 
v___x_62_ = lp_LanglandsOracles_Oracles_Mat2_mulNat(v_n_44_, v___x_58_, v_h_46_);
lean_dec(v___x_58_);
return v___x_62_;
}
}
else
{
lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_63_ = lean_nat_mod(v_x_48_, v___x_51_);
v___x_64_ = lean_unsigned_to_nat(1u);
v___x_65_ = lean_nat_dec_eq(v___x_63_, v___x_64_);
lean_dec(v___x_63_);
if (v___x_65_ == 0)
{
lean_inc(v_g_45_);
return v_g_45_;
}
else
{
lean_inc(v_h_46_);
return v_h_46_;
}
}
}
else
{
return v_zero_49_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_evalW___boxed(lean_object* v_n_66_, lean_object* v_g_67_, lean_object* v_h_68_, lean_object* v_x_69_, lean_object* v_x_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = lp_LanglandsOracles_Oracles_Mat2_evalW(v_n_66_, v_g_67_, v_h_68_, v_x_69_, v_x_70_);
lean_dec(v_x_70_);
lean_dec(v_x_69_);
lean_dec(v_h_68_);
lean_dec(v_g_67_);
lean_dec(v_n_66_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_evalWord(lean_object* v_n_72_, lean_object* v_g_73_, lean_object* v_h_74_, lean_object* v_w_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lp_LanglandsOracles_Oracles_Mat2_evalW(v_n_72_, v_g_73_, v_h_74_, v_w_75_, v_w_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_evalWord___boxed(lean_object* v_n_77_, lean_object* v_g_78_, lean_object* v_h_79_, lean_object* v_w_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = lp_LanglandsOracles_Oracles_Mat2_evalWord(v_n_77_, v_g_78_, v_h_79_, v_w_80_);
lean_dec(v_w_80_);
lean_dec(v_h_79_);
lean_dec(v_g_78_);
lean_dec(v_n_77_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_evalW_match__1_splitter___redArg(lean_object* v_x_82_, lean_object* v_x_83_, lean_object* v_h__1_84_, lean_object* v_h__2_85_){
_start:
{
lean_object* v_zero_86_; uint8_t v_isZero_87_; 
v_zero_86_ = lean_unsigned_to_nat(0u);
v_isZero_87_ = lean_nat_dec_eq(v_x_82_, v_zero_86_);
if (v_isZero_87_ == 1)
{
lean_object* v___x_88_; 
lean_dec(v_h__2_85_);
v___x_88_ = lean_apply_1(v_h__1_84_, v_x_83_);
return v___x_88_;
}
else
{
lean_object* v_one_89_; lean_object* v_n_90_; lean_object* v___x_91_; 
lean_dec(v_h__1_84_);
v_one_89_ = lean_unsigned_to_nat(1u);
v_n_90_ = lean_nat_sub(v_x_82_, v_one_89_);
v___x_91_ = lean_apply_2(v_h__2_85_, v_n_90_, v_x_83_);
return v___x_91_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_evalW_match__1_splitter___redArg___boxed(lean_object* v_x_92_, lean_object* v_x_93_, lean_object* v_h__1_94_, lean_object* v_h__2_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_evalW_match__1_splitter___redArg(v_x_92_, v_x_93_, v_h__1_94_, v_h__2_95_);
lean_dec(v_x_92_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_evalW_match__1_splitter(lean_object* v_motive_97_, lean_object* v_x_98_, lean_object* v_x_99_, lean_object* v_h__1_100_, lean_object* v_h__2_101_){
_start:
{
lean_object* v_zero_102_; uint8_t v_isZero_103_; 
v_zero_102_ = lean_unsigned_to_nat(0u);
v_isZero_103_ = lean_nat_dec_eq(v_x_98_, v_zero_102_);
if (v_isZero_103_ == 1)
{
lean_object* v___x_104_; 
lean_dec(v_h__2_101_);
v___x_104_ = lean_apply_1(v_h__1_100_, v_x_99_);
return v___x_104_;
}
else
{
lean_object* v_one_105_; lean_object* v_n_106_; lean_object* v___x_107_; 
lean_dec(v_h__1_100_);
v_one_105_ = lean_unsigned_to_nat(1u);
v_n_106_ = lean_nat_sub(v_x_98_, v_one_105_);
v___x_107_ = lean_apply_2(v_h__2_101_, v_n_106_, v_x_99_);
return v___x_107_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_evalW_match__1_splitter___boxed(lean_object* v_motive_108_, lean_object* v_x_109_, lean_object* v_x_110_, lean_object* v_h__1_111_, lean_object* v_h__2_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_evalW_match__1_splitter(v_motive_108_, v_x_109_, v_x_110_, v_h__1_111_, v_h__2_112_);
lean_dec(v_x_109_);
return v_res_113_;
}
}
static lean_object* _init_lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__6(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__5));
v___x_160_ = l_String_toRawSubstring_x27(v___x_159_);
return v___x_160_;
}
}
static lean_object* _init_lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__14(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__13));
v___x_177_ = l_String_toRawSubstring_x27(v___x_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1(lean_object* v_x_213_, lean_object* v_a_214_, lean_object* v_a_215_){
_start:
{
lean_object* v___x_216_; uint8_t v___x_217_; 
v___x_216_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__12));
v___x_217_ = l_Lean_Syntax_isOfKind(v_x_213_, v___x_216_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = lean_box(1);
v___x_219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
lean_ctor_set(v___x_219_, 1, v_a_215_);
return v___x_219_;
}
else
{
lean_object* v_quotContext_220_; lean_object* v_currMacroScope_221_; lean_object* v_ref_222_; uint8_t v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v_quotContext_220_ = lean_ctor_get(v_a_214_, 1);
v_currMacroScope_221_ = lean_ctor_get(v_a_214_, 2);
v_ref_222_ = lean_ctor_get(v_a_214_, 5);
v___x_223_ = 0;
v___x_224_ = l_Lean_SourceInfo_fromRef(v_ref_222_, v___x_223_);
v___x_225_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__4));
v___x_226_ = lean_obj_once(&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__6, &lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__6_once, _init_lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__6);
v___x_227_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__7));
lean_inc_n(v_currMacroScope_221_, 2);
lean_inc_n(v_quotContext_220_, 2);
v___x_228_ = l_Lean_addMacroScope(v_quotContext_220_, v___x_227_, v_currMacroScope_221_);
v___x_229_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__10));
lean_inc_n(v___x_224_, 3);
v___x_230_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_230_, 0, v___x_224_);
lean_ctor_set(v___x_230_, 1, v___x_226_);
lean_ctor_set(v___x_230_, 2, v___x_228_);
lean_ctor_set(v___x_230_, 3, v___x_229_);
v___x_231_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__12));
v___x_232_ = lean_obj_once(&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__14, &lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__14_once, _init_lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__14);
v___x_233_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__15));
v___x_234_ = l_Lean_addMacroScope(v_quotContext_220_, v___x_233_, v_currMacroScope_221_);
v___x_235_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__28));
v___x_236_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_236_, 0, v___x_224_);
lean_ctor_set(v___x_236_, 1, v___x_232_);
lean_ctor_set(v___x_236_, 2, v___x_234_);
lean_ctor_set(v___x_236_, 3, v___x_235_);
v___x_237_ = l_Lean_Syntax_node1(v___x_224_, v___x_231_, v___x_236_);
v___x_238_ = l_Lean_Syntax_node2(v___x_224_, v___x_225_, v___x_230_, v___x_237_);
v___x_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
lean_ctor_set(v___x_239_, 1, v_a_215_);
return v___x_239_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___boxed(lean_object* v_x_240_, lean_object* v_a_241_, lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1(v_x_240_, v_a_241_, v_a_242_);
lean_dec_ref(v_a_241_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______unexpand__Oracles__isCSR__fin__1(lean_object* v_x_247_, lean_object* v_a_248_, lean_object* v_a_249_){
_start:
{
lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_250_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__4));
lean_inc(v_x_247_);
v___x_251_ = l_Lean_Syntax_isOfKind(v_x_247_, v___x_250_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_dec(v_x_247_);
v___x_252_ = lean_box(0);
v___x_253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
lean_ctor_set(v___x_253_, 1, v_a_249_);
return v___x_253_;
}
else
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_254_ = lean_unsigned_to_nat(0u);
v___x_255_ = l_Lean_Syntax_getArg(v_x_247_, v___x_254_);
v___x_256_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______unexpand__Oracles__isCSR__fin__1___closed__1));
lean_inc(v___x_255_);
v___x_257_ = l_Lean_Syntax_isOfKind(v___x_255_, v___x_256_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; lean_object* v___x_259_; 
lean_dec(v___x_255_);
lean_dec(v_x_247_);
v___x_258_ = lean_box(0);
v___x_259_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
lean_ctor_set(v___x_259_, 1, v_a_249_);
return v___x_259_;
}
else
{
lean_object* v___x_260_; lean_object* v___x_261_; uint8_t v___x_262_; 
v___x_260_ = lean_unsigned_to_nat(1u);
v___x_261_ = l_Lean_Syntax_getArg(v_x_247_, v___x_260_);
lean_dec(v_x_247_);
lean_inc(v___x_261_);
v___x_262_ = l_Lean_Syntax_matchesNull(v___x_261_, v___x_260_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec(v___x_261_);
lean_dec(v___x_255_);
v___x_263_ = lean_box(0);
v___x_264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
lean_ctor_set(v___x_264_, 1, v_a_249_);
return v___x_264_;
}
else
{
lean_object* v___x_265_; lean_object* v___x_266_; uint8_t v___x_267_; 
v___x_265_ = l_Lean_Syntax_getArg(v___x_261_, v___x_254_);
lean_dec(v___x_261_);
v___x_266_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__15));
v___x_267_ = l_Lean_Syntax_matchesIdent(v___x_265_, v___x_266_);
lean_dec(v___x_265_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; lean_object* v___x_269_; 
lean_dec(v___x_255_);
v___x_268_ = lean_box(0);
v___x_269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
lean_ctor_set(v___x_269_, 1, v_a_249_);
return v___x_269_;
}
else
{
lean_object* v_ref_270_; uint8_t v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_ref_270_ = l_Lean_replaceRef(v___x_255_, v_a_248_);
lean_dec(v___x_255_);
v___x_271_ = 0;
v___x_272_ = l_Lean_SourceInfo_fromRef(v_ref_270_, v___x_271_);
lean_dec(v_ref_270_);
v___x_273_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__12));
v___x_274_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_termR___closed__13));
lean_inc(v___x_272_);
v___x_275_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_272_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
v___x_276_ = l_Lean_Syntax_node1(v___x_272_, v___x_273_, v___x_275_);
v___x_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v_a_249_);
return v___x_277_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______unexpand__Oracles__isCSR__fin__1___boxed(lean_object* v_x_278_, lean_object* v_a_279_, lean_object* v_a_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______unexpand__Oracles__isCSR__fin__1(v_x_278_, v_a_279_, v_a_280_);
lean_dec(v_a_279_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_applyV(lean_object* v_n_282_, lean_object* v_w_283_, lean_object* v_v_284_){
_start:
{
lean_object* v_a_285_; lean_object* v_b_286_; lean_object* v_c_287_; lean_object* v_d_288_; lean_object* v_fst_289_; lean_object* v_snd_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_303_; 
v_a_285_ = lean_ctor_get(v_w_283_, 0);
v_b_286_ = lean_ctor_get(v_w_283_, 1);
v_c_287_ = lean_ctor_get(v_w_283_, 2);
v_d_288_ = lean_ctor_get(v_w_283_, 3);
v_fst_289_ = lean_ctor_get(v_v_284_, 0);
v_snd_290_ = lean_ctor_get(v_v_284_, 1);
v_isSharedCheck_303_ = !lean_is_exclusive(v_v_284_);
if (v_isSharedCheck_303_ == 0)
{
v___x_292_ = v_v_284_;
v_isShared_293_ = v_isSharedCheck_303_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_snd_290_);
lean_inc(v_fst_289_);
lean_dec(v_v_284_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_303_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_301_; 
v___x_294_ = l_Fin_mul(v_n_282_, v_a_285_, v_fst_289_);
v___x_295_ = l_Fin_mul(v_n_282_, v_b_286_, v_snd_290_);
v___x_296_ = l_Fin_add(v_n_282_, v___x_294_, v___x_295_);
lean_dec(v___x_295_);
lean_dec(v___x_294_);
v___x_297_ = l_Fin_mul(v_n_282_, v_c_287_, v_fst_289_);
lean_dec(v_fst_289_);
v___x_298_ = l_Fin_mul(v_n_282_, v_d_288_, v_snd_290_);
lean_dec(v_snd_290_);
v___x_299_ = l_Fin_add(v_n_282_, v___x_297_, v___x_298_);
lean_dec(v___x_298_);
lean_dec(v___x_297_);
if (v_isShared_293_ == 0)
{
lean_ctor_set(v___x_292_, 1, v___x_299_);
lean_ctor_set(v___x_292_, 0, v___x_296_);
v___x_301_ = v___x_292_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v___x_296_);
lean_ctor_set(v_reuseFailAlloc_302_, 1, v___x_299_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_applyV___boxed(lean_object* v_n_304_, lean_object* v_w_305_, lean_object* v_v_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = lp_LanglandsOracles_Oracles_Mat2_applyV(v_n_304_, v_w_305_, v_v_306_);
lean_dec_ref(v_w_305_);
lean_dec(v_n_304_);
return v_res_307_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_invOf___redArg___lam__0(lean_object* v_b_308_, lean_object* v_n_309_, lean_object* v_u_310_){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_311_ = lean_nat_mul(v_b_308_, v_u_310_);
v___x_312_ = lean_nat_mod(v___x_311_, v_n_309_);
lean_dec(v___x_311_);
v___x_313_ = lean_unsigned_to_nat(1u);
v___x_314_ = lean_nat_dec_eq(v___x_312_, v___x_313_);
lean_dec(v___x_312_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_invOf___redArg___lam__0___boxed(lean_object* v_b_315_, lean_object* v_n_316_, lean_object* v_u_317_){
_start:
{
uint8_t v_res_318_; lean_object* v_r_319_; 
v_res_318_ = lp_LanglandsOracles_Oracles_Mat2_invOf___redArg___lam__0(v_b_315_, v_n_316_, v_u_317_);
lean_dec(v_u_317_);
lean_dec(v_n_316_);
lean_dec(v_b_315_);
v_r_319_ = lean_box(v_res_318_);
return v_r_319_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_invOf___redArg(lean_object* v_n_320_, lean_object* v_b_321_){
_start:
{
lean_object* v___f_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
lean_inc_n(v_n_320_, 2);
v___f_322_ = lean_alloc_closure((void*)(lp_LanglandsOracles_Oracles_Mat2_invOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_322_, 0, v_b_321_);
lean_closure_set(v___f_322_, 1, v_n_320_);
v___x_323_ = l_List_range(v_n_320_);
v___x_324_ = l_List_find_x3f___redArg(v___f_322_, v___x_323_);
if (lean_obj_tag(v___x_324_) == 0)
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = lean_unsigned_to_nat(0u);
v___x_326_ = lean_nat_mod(v___x_325_, v_n_320_);
lean_dec(v_n_320_);
return v___x_326_;
}
else
{
lean_object* v_val_327_; lean_object* v___x_328_; 
v_val_327_ = lean_ctor_get(v___x_324_, 0);
lean_inc(v_val_327_);
lean_dec_ref_known(v___x_324_, 1);
v___x_328_ = lean_nat_mod(v_val_327_, v_n_320_);
lean_dec(v_n_320_);
lean_dec(v_val_327_);
return v___x_328_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_invOf(lean_object* v_n_329_, lean_object* v_inst_330_, lean_object* v_b_331_){
_start:
{
lean_object* v___x_332_; 
v___x_332_ = lp_LanglandsOracles_Oracles_Mat2_invOf___redArg(v_n_329_, v_b_331_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E12___redArg(lean_object* v_n_333_, lean_object* v_u_334_){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_335_ = lean_unsigned_to_nat(1u);
v___x_336_ = lean_nat_mod(v___x_335_, v_n_333_);
v___x_337_ = lean_unsigned_to_nat(0u);
v___x_338_ = lean_nat_mod(v___x_337_, v_n_333_);
lean_inc(v___x_336_);
v___x_339_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_339_, 0, v___x_336_);
lean_ctor_set(v___x_339_, 1, v_u_334_);
lean_ctor_set(v___x_339_, 2, v___x_338_);
lean_ctor_set(v___x_339_, 3, v___x_336_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E12___redArg___boxed(lean_object* v_n_340_, lean_object* v_u_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = lp_LanglandsOracles_Oracles_Mat2_E12___redArg(v_n_340_, v_u_341_);
lean_dec(v_n_340_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E12(lean_object* v_n_343_, lean_object* v_inst_344_, lean_object* v_u_345_){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = lp_LanglandsOracles_Oracles_Mat2_E12___redArg(v_n_343_, v_u_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E12___boxed(lean_object* v_n_347_, lean_object* v_inst_348_, lean_object* v_u_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = lp_LanglandsOracles_Oracles_Mat2_E12(v_n_347_, v_inst_348_, v_u_349_);
lean_dec(v_n_347_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E21___redArg(lean_object* v_n_351_, lean_object* v_u_352_){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_353_ = lean_unsigned_to_nat(1u);
v___x_354_ = lean_nat_mod(v___x_353_, v_n_351_);
v___x_355_ = lean_unsigned_to_nat(0u);
v___x_356_ = lean_nat_mod(v___x_355_, v_n_351_);
lean_inc(v___x_354_);
v___x_357_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_357_, 0, v___x_354_);
lean_ctor_set(v___x_357_, 1, v___x_356_);
lean_ctor_set(v___x_357_, 2, v_u_352_);
lean_ctor_set(v___x_357_, 3, v___x_354_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E21___redArg___boxed(lean_object* v_n_358_, lean_object* v_u_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = lp_LanglandsOracles_Oracles_Mat2_E21___redArg(v_n_358_, v_u_359_);
lean_dec(v_n_358_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E21(lean_object* v_n_361_, lean_object* v_inst_362_, lean_object* v_u_363_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = lp_LanglandsOracles_Oracles_Mat2_E21___redArg(v_n_361_, v_u_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_E21___boxed(lean_object* v_n_365_, lean_object* v_inst_366_, lean_object* v_u_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = lp_LanglandsOracles_Oracles_Mat2_E21(v_n_365_, v_inst_366_, v_u_367_);
lean_dec(v_n_365_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_diag___redArg(lean_object* v_n_369_, lean_object* v_u_370_){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_371_ = lean_unsigned_to_nat(1u);
v___x_372_ = lean_nat_mod(v___x_371_, v_n_369_);
v___x_373_ = lean_unsigned_to_nat(0u);
v___x_374_ = lean_nat_mod(v___x_373_, v_n_369_);
lean_inc(v___x_374_);
v___x_375_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_375_, 0, v___x_372_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
lean_ctor_set(v___x_375_, 2, v___x_374_);
lean_ctor_set(v___x_375_, 3, v_u_370_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_diag___redArg___boxed(lean_object* v_n_376_, lean_object* v_u_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = lp_LanglandsOracles_Oracles_Mat2_diag___redArg(v_n_376_, v_u_377_);
lean_dec(v_n_376_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_diag(lean_object* v_n_379_, lean_object* v_inst_380_, lean_object* v_u_381_){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = lp_LanglandsOracles_Oracles_Mat2_diag___redArg(v_n_379_, v_u_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_diag___boxed(lean_object* v_n_383_, lean_object* v_inst_384_, lean_object* v_u_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = lp_LanglandsOracles_Oracles_Mat2_diag(v_n_383_, v_inst_384_, v_u_385_);
lean_dec(v_n_383_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_M2pow___redArg(lean_object* v_n_387_, lean_object* v_x_388_, lean_object* v_x_389_){
_start:
{
lean_object* v_zero_390_; uint8_t v_isZero_391_; 
v_zero_390_ = lean_unsigned_to_nat(0u);
v_isZero_391_ = lean_nat_dec_eq(v_x_389_, v_zero_390_);
if (v_isZero_391_ == 1)
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
lean_dec_ref(v_x_388_);
v___x_392_ = lean_nat_mod(v_zero_390_, v_n_387_);
v___x_393_ = lean_unsigned_to_nat(1u);
v___x_394_ = lean_nat_mod(v___x_393_, v_n_387_);
lean_dec(v_n_387_);
lean_inc(v___x_392_);
lean_inc(v___x_394_);
v___x_395_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
lean_ctor_set(v___x_395_, 1, v___x_392_);
lean_ctor_set(v___x_395_, 2, v___x_392_);
lean_ctor_set(v___x_395_, 3, v___x_394_);
return v___x_395_;
}
else
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v_one_398_; lean_object* v_n_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
lean_inc_n(v_n_387_, 2);
v___x_396_ = lean_alloc_closure((void*)(l_Fin_add___boxed), 3, 1);
lean_closure_set(v___x_396_, 0, v_n_387_);
v___x_397_ = lean_alloc_closure((void*)(l_Fin_mul___boxed), 3, 1);
lean_closure_set(v___x_397_, 0, v_n_387_);
v_one_398_ = lean_unsigned_to_nat(1u);
v_n_399_ = lean_nat_sub(v_x_389_, v_one_398_);
lean_inc_ref(v_x_388_);
v___x_400_ = lp_LanglandsOracles_Oracles_Mat2_M2pow___redArg(v_n_387_, v_x_388_, v_n_399_);
lean_dec(v_n_399_);
v___x_401_ = lp_LanglandsOracles_Oracles_M2_mul___redArg(v___x_396_, v___x_397_, v___x_400_, v_x_388_);
return v___x_401_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_M2pow___redArg___boxed(lean_object* v_n_402_, lean_object* v_x_403_, lean_object* v_x_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = lp_LanglandsOracles_Oracles_Mat2_M2pow___redArg(v_n_402_, v_x_403_, v_x_404_);
lean_dec(v_x_404_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_M2pow(lean_object* v_n_406_, lean_object* v_inst_407_, lean_object* v_x_408_, lean_object* v_x_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = lp_LanglandsOracles_Oracles_Mat2_M2pow___redArg(v_n_406_, v_x_408_, v_x_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_M2pow___boxed(lean_object* v_n_411_, lean_object* v_inst_412_, lean_object* v_x_413_, lean_object* v_x_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = lp_LanglandsOracles_Oracles_Mat2_M2pow(v_n_411_, v_inst_412_, v_x_413_, v_x_414_);
lean_dec(v_x_414_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_finPow___redArg(lean_object* v_n_416_, lean_object* v_z_417_, lean_object* v_x_418_){
_start:
{
lean_object* v_zero_419_; uint8_t v_isZero_420_; 
v_zero_419_ = lean_unsigned_to_nat(0u);
v_isZero_420_ = lean_nat_dec_eq(v_x_418_, v_zero_419_);
if (v_isZero_420_ == 1)
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = lean_unsigned_to_nat(1u);
v___x_422_ = lean_nat_mod(v___x_421_, v_n_416_);
return v___x_422_;
}
else
{
lean_object* v_one_423_; lean_object* v_n_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v_one_423_ = lean_unsigned_to_nat(1u);
v_n_424_ = lean_nat_sub(v_x_418_, v_one_423_);
v___x_425_ = lp_LanglandsOracles_Oracles_Mat2_finPow___redArg(v_n_416_, v_z_417_, v_n_424_);
lean_dec(v_n_424_);
v___x_426_ = l_Fin_mul(v_n_416_, v___x_425_, v_z_417_);
lean_dec(v___x_425_);
return v___x_426_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_finPow___redArg___boxed(lean_object* v_n_427_, lean_object* v_z_428_, lean_object* v_x_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = lp_LanglandsOracles_Oracles_Mat2_finPow___redArg(v_n_427_, v_z_428_, v_x_429_);
lean_dec(v_x_429_);
lean_dec(v_z_428_);
lean_dec(v_n_427_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_finPow(lean_object* v_n_431_, lean_object* v_inst_432_, lean_object* v_z_433_, lean_object* v_x_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = lp_LanglandsOracles_Oracles_Mat2_finPow___redArg(v_n_431_, v_z_433_, v_x_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_finPow___boxed(lean_object* v_n_436_, lean_object* v_inst_437_, lean_object* v_z_438_, lean_object* v_x_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = lp_LanglandsOracles_Oracles_Mat2_finPow(v_n_436_, v_inst_437_, v_z_438_, v_x_439_);
lean_dec(v_x_439_);
lean_dec(v_z_438_);
lean_dec(v_n_436_);
return v_res_440_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_any___at___00Oracles_Mat2_zetaGen_spec__0(lean_object* v_z_441_, lean_object* v_n_442_, lean_object* v_d_443_, lean_object* v_x_444_){
_start:
{
if (lean_obj_tag(v_x_444_) == 0)
{
uint8_t v___x_445_; 
v___x_445_ = 0;
return v___x_445_;
}
else
{
lean_object* v_head_446_; lean_object* v_tail_447_; lean_object* v___x_448_; lean_object* v___x_449_; uint8_t v___x_450_; 
v_head_446_ = lean_ctor_get(v_x_444_, 0);
v_tail_447_ = lean_ctor_get(v_x_444_, 1);
v___x_448_ = lean_nat_pow(v_z_441_, v_head_446_);
v___x_449_ = lean_nat_mod(v___x_448_, v_n_442_);
lean_dec(v___x_448_);
v___x_450_ = lean_nat_dec_eq(v___x_449_, v_d_443_);
lean_dec(v___x_449_);
if (v___x_450_ == 0)
{
v_x_444_ = v_tail_447_;
goto _start;
}
else
{
return v___x_450_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_any___at___00Oracles_Mat2_zetaGen_spec__0___boxed(lean_object* v_z_452_, lean_object* v_n_453_, lean_object* v_d_454_, lean_object* v_x_455_){
_start:
{
uint8_t v_res_456_; lean_object* v_r_457_; 
v_res_456_ = lp_LanglandsOracles_List_any___at___00Oracles_Mat2_zetaGen_spec__0(v_z_452_, v_n_453_, v_d_454_, v_x_455_);
lean_dec(v_x_455_);
lean_dec(v_d_454_);
lean_dec(v_n_453_);
lean_dec(v_z_452_);
v_r_457_ = lean_box(v_res_456_);
return v_r_457_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_zetaGen_spec__1(lean_object* v_z_458_, lean_object* v_n_459_, lean_object* v___x_460_, lean_object* v_x_461_){
_start:
{
if (lean_obj_tag(v_x_461_) == 0)
{
uint8_t v___x_462_; 
v___x_462_ = 1;
return v___x_462_;
}
else
{
lean_object* v_head_463_; lean_object* v_tail_464_; uint8_t v___y_466_; lean_object* v___x_468_; uint8_t v___x_469_; 
v_head_463_ = lean_ctor_get(v_x_461_, 0);
v_tail_464_ = lean_ctor_get(v_x_461_, 1);
v___x_468_ = lean_unsigned_to_nat(0u);
v___x_469_ = lean_nat_dec_eq(v_head_463_, v___x_468_);
if (v___x_469_ == 0)
{
uint8_t v___x_470_; 
v___x_470_ = lp_LanglandsOracles_List_any___at___00Oracles_Mat2_zetaGen_spec__0(v_z_458_, v_n_459_, v_head_463_, v___x_460_);
v___y_466_ = v___x_470_;
goto v___jp_465_;
}
else
{
v___y_466_ = v___x_469_;
goto v___jp_465_;
}
v___jp_465_:
{
if (v___y_466_ == 0)
{
return v___y_466_;
}
else
{
v_x_461_ = v_tail_464_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_zetaGen_spec__1___boxed(lean_object* v_z_471_, lean_object* v_n_472_, lean_object* v___x_473_, lean_object* v_x_474_){
_start:
{
uint8_t v_res_475_; lean_object* v_r_476_; 
v_res_475_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_zetaGen_spec__1(v_z_471_, v_n_472_, v___x_473_, v_x_474_);
lean_dec(v_x_474_);
lean_dec(v___x_473_);
lean_dec(v_n_472_);
lean_dec(v_z_471_);
v_r_476_ = lean_box(v_res_475_);
return v_r_476_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_zetaGen(lean_object* v_n_477_, lean_object* v_z_478_){
_start:
{
lean_object* v___x_479_; uint8_t v___x_480_; 
lean_inc(v_n_477_);
v___x_479_ = l_List_range(v_n_477_);
v___x_480_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_zetaGen_spec__1(v_z_478_, v_n_477_, v___x_479_, v___x_479_);
lean_dec(v___x_479_);
lean_dec(v_n_477_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_zetaGen___boxed(lean_object* v_n_481_, lean_object* v_z_482_){
_start:
{
uint8_t v_res_483_; lean_object* v_r_484_; 
v_res_483_ = lp_LanglandsOracles_Oracles_Mat2_zetaGen(v_n_481_, v_z_482_);
lean_dec(v_z_482_);
v_r_484_ = lean_box(v_res_483_);
return v_r_484_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__0(lean_object* v_a_485_, lean_object* v___x_486_, lean_object* v___x_487_, lean_object* v_c_488_){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_489_, 0, v_a_485_);
lean_ctor_set(v___x_489_, 1, v___x_486_);
lean_ctor_set(v___x_489_, 2, v_c_488_);
lean_ctor_set(v___x_489_, 3, v___x_487_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__1(lean_object* v_n_490_, lean_object* v_t_491_, lean_object* v_a_492_, lean_object* v_d_493_, lean_object* v_b_494_){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; uint8_t v___x_497_; 
v___x_495_ = lean_unsigned_to_nat(0u);
v___x_496_ = lean_nat_mod(v___x_495_, v_n_490_);
v___x_497_ = lean_nat_dec_eq(v_b_494_, v___x_496_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
lean_dec(v___x_496_);
v___x_498_ = l_Fin_sub(v_n_490_, v_t_491_, v_a_492_);
v___x_499_ = l_Fin_mul(v_n_490_, v_a_492_, v___x_498_);
v___x_500_ = l_Fin_sub(v_n_490_, v___x_499_, v_d_493_);
lean_dec(v___x_499_);
lean_inc(v_b_494_);
lean_inc(v_n_490_);
v___x_501_ = lp_LanglandsOracles_Oracles_Mat2_invOf___redArg(v_n_490_, v_b_494_);
v___x_502_ = l_Fin_mul(v_n_490_, v___x_500_, v___x_501_);
lean_dec(v___x_501_);
lean_dec(v___x_500_);
lean_dec(v_n_490_);
v___x_503_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_503_, 0, v_a_492_);
lean_ctor_set(v___x_503_, 1, v_b_494_);
lean_ctor_set(v___x_503_, 2, v___x_502_);
lean_ctor_set(v___x_503_, 3, v___x_498_);
v___x_504_ = lean_box(0);
v___x_505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_503_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
return v___x_505_;
}
else
{
lean_object* v___x_506_; lean_object* v___x_507_; uint8_t v___x_508_; 
lean_dec(v_b_494_);
v___x_506_ = l_Fin_sub(v_n_490_, v_t_491_, v_a_492_);
v___x_507_ = l_Fin_mul(v_n_490_, v_a_492_, v___x_506_);
v___x_508_ = lean_nat_dec_eq(v___x_507_, v_d_493_);
lean_dec(v___x_507_);
if (v___x_508_ == 0)
{
lean_object* v___x_509_; 
lean_dec(v___x_506_);
lean_dec(v___x_496_);
lean_dec(v_a_492_);
lean_dec(v_n_490_);
v___x_509_ = lean_box(0);
return v___x_509_;
}
else
{
lean_object* v___f_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v___f_510_ = lean_alloc_closure((void*)(lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__0), 4, 3);
lean_closure_set(v___f_510_, 0, v_a_492_);
lean_closure_set(v___f_510_, 1, v___x_496_);
lean_closure_set(v___f_510_, 2, v___x_506_);
v___x_511_ = lp_LanglandsOracles_Oracles_Mat2_fins(v_n_490_);
v___x_512_ = lean_box(0);
v___x_513_ = l_List_mapTR_loop___redArg(v___f_510_, v___x_511_, v___x_512_);
return v___x_513_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__1___boxed(lean_object* v_n_514_, lean_object* v_t_515_, lean_object* v_a_516_, lean_object* v_d_517_, lean_object* v_b_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__1(v_n_514_, v_t_515_, v_a_516_, v_d_517_, v_b_518_);
lean_dec(v_d_517_);
lean_dec(v_t_515_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__2(lean_object* v_n_522_, lean_object* v_t_523_, lean_object* v_d_524_, lean_object* v_a_525_){
_start:
{
lean_object* v___f_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
lean_inc(v_n_522_);
v___f_526_ = lean_alloc_closure((void*)(lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_526_, 0, v_n_522_);
lean_closure_set(v___f_526_, 1, v_t_523_);
lean_closure_set(v___f_526_, 2, v_a_525_);
lean_closure_set(v___f_526_, 3, v_d_524_);
v___x_527_ = lp_LanglandsOracles_Oracles_Mat2_fins(v_n_522_);
v___x_528_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__2___closed__0));
v___x_529_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___redArg(v___f_526_, v___x_527_, v___x_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classMats___redArg(lean_object* v_n_530_, lean_object* v_t_531_, lean_object* v_d_532_){
_start:
{
lean_object* v___f_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
lean_inc(v_n_530_);
v___f_533_ = lean_alloc_closure((void*)(lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__2), 4, 3);
lean_closure_set(v___f_533_, 0, v_n_530_);
lean_closure_set(v___f_533_, 1, v_t_531_);
lean_closure_set(v___f_533_, 2, v_d_532_);
v___x_534_ = lp_LanglandsOracles_Oracles_Mat2_fins(v_n_530_);
v___x_535_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2_classMats___redArg___lam__2___closed__0));
v___x_536_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___redArg(v___f_533_, v___x_534_, v___x_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_classMats(lean_object* v_n_537_, lean_object* v_inst_538_, lean_object* v_t_539_, lean_object* v_d_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = lp_LanglandsOracles_Oracles_Mat2_classMats___redArg(v_n_537_, v_t_539_, v_d_540_);
return v___x_541_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_S__generates___redArg___closed__0(void){
_start:
{
lean_object* v___x_542_; lean_object* v___f_543_; 
v___x_542_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___f_543_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_543_, 0, v___x_542_);
return v___f_543_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_S__generates___redArg(lean_object* v_n_544_, lean_object* v_z_545_, lean_object* v_S_546_){
_start:
{
lean_object* v___f_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; uint8_t v___x_561_; 
v___f_547_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_S__generates___redArg___closed__0, &lp_LanglandsOracles_Oracles_Mat2_S__generates___redArg___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_S__generates___redArg___closed__0);
v___x_548_ = lean_unsigned_to_nat(1u);
v___x_549_ = lean_nat_mod(v___x_548_, v_n_544_);
lean_inc(v___x_549_);
v___x_550_ = lp_LanglandsOracles_Oracles_Mat2_E12___redArg(v_n_544_, v___x_549_);
v___x_551_ = lp_LanglandsOracles_Oracles_Mat2_encode(v_n_544_, v___x_550_);
lean_dec_ref(v___x_550_);
v___x_552_ = lp_LanglandsOracles_Oracles_Mat2_E21___redArg(v_n_544_, v___x_549_);
v___x_553_ = lp_LanglandsOracles_Oracles_Mat2_encode(v_n_544_, v___x_552_);
lean_dec_ref(v___x_552_);
v___x_554_ = lean_nat_mod(v_z_545_, v_n_544_);
v___x_555_ = lp_LanglandsOracles_Oracles_Mat2_diag___redArg(v_n_544_, v___x_554_);
v___x_556_ = lp_LanglandsOracles_Oracles_Mat2_encode(v_n_544_, v___x_555_);
lean_dec_ref(v___x_555_);
v___x_557_ = lean_box(0);
v___x_558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_556_);
lean_ctor_set(v___x_558_, 1, v___x_557_);
v___x_559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_559_, 0, v___x_553_);
lean_ctor_set(v___x_559_, 1, v___x_558_);
v___x_560_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_560_, 0, v___x_551_);
lean_ctor_set(v___x_560_, 1, v___x_559_);
v___x_561_ = l_List_beq___redArg(v___f_547_, v_S_546_, v___x_560_);
if (v___x_561_ == 0)
{
lean_dec(v_n_544_);
return v___x_561_;
}
else
{
uint8_t v___x_562_; 
v___x_562_ = lp_LanglandsOracles_Oracles_Mat2_zetaGen(v_n_544_, v_z_545_);
return v___x_562_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_S__generates___redArg___boxed(lean_object* v_n_563_, lean_object* v_z_564_, lean_object* v_S_565_){
_start:
{
uint8_t v_res_566_; lean_object* v_r_567_; 
v_res_566_ = lp_LanglandsOracles_Oracles_Mat2_S__generates___redArg(v_n_563_, v_z_564_, v_S_565_);
lean_dec(v_z_564_);
v_r_567_ = lean_box(v_res_566_);
return v_r_567_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_S__generates(lean_object* v_n_568_, lean_object* v_inst_569_, lean_object* v_z_570_, lean_object* v_S_571_){
_start:
{
uint8_t v___x_572_; 
v___x_572_ = lp_LanglandsOracles_Oracles_Mat2_S__generates___redArg(v_n_568_, v_z_570_, v_S_571_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_S__generates___boxed(lean_object* v_n_573_, lean_object* v_inst_574_, lean_object* v_z_575_, lean_object* v_S_576_){
_start:
{
uint8_t v_res_577_; lean_object* v_r_578_; 
v_res_577_ = lp_LanglandsOracles_Oracles_Mat2_S__generates(v_n_573_, v_inst_574_, v_z_575_, v_S_576_);
lean_dec(v_z_575_);
v_r_578_ = lean_box(v_res_577_);
return v_r_578_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pointwise___redArg(lean_object* v_p_579_, lean_object* v_x_580_, lean_object* v_x_581_){
_start:
{
if (lean_obj_tag(v_x_580_) == 0)
{
lean_dec_ref(v_p_579_);
if (lean_obj_tag(v_x_581_) == 0)
{
uint8_t v___x_582_; 
v___x_582_ = 1;
return v___x_582_;
}
else
{
uint8_t v___x_583_; 
lean_dec(v_x_581_);
v___x_583_ = 0;
return v___x_583_;
}
}
else
{
if (lean_obj_tag(v_x_581_) == 1)
{
lean_object* v_head_584_; lean_object* v_tail_585_; lean_object* v_head_586_; lean_object* v_tail_587_; lean_object* v___x_588_; uint8_t v___x_589_; 
v_head_584_ = lean_ctor_get(v_x_580_, 0);
lean_inc(v_head_584_);
v_tail_585_ = lean_ctor_get(v_x_580_, 1);
lean_inc(v_tail_585_);
lean_dec_ref_known(v_x_580_, 2);
v_head_586_ = lean_ctor_get(v_x_581_, 0);
lean_inc(v_head_586_);
v_tail_587_ = lean_ctor_get(v_x_581_, 1);
lean_inc(v_tail_587_);
lean_dec_ref_known(v_x_581_, 2);
lean_inc_ref(v_p_579_);
v___x_588_ = lean_apply_2(v_p_579_, v_head_584_, v_head_586_);
v___x_589_ = lean_unbox(v___x_588_);
if (v___x_589_ == 0)
{
uint8_t v___x_590_; 
lean_dec(v_tail_587_);
lean_dec(v_tail_585_);
lean_dec_ref(v_p_579_);
v___x_590_ = lean_unbox(v___x_588_);
return v___x_590_;
}
else
{
v_x_580_ = v_tail_585_;
v_x_581_ = v_tail_587_;
goto _start;
}
}
else
{
uint8_t v___x_592_; 
lean_dec_ref_known(v_x_580_, 2);
lean_dec(v_x_581_);
lean_dec_ref(v_p_579_);
v___x_592_ = 0;
return v___x_592_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pointwise___redArg___boxed(lean_object* v_p_593_, lean_object* v_x_594_, lean_object* v_x_595_){
_start:
{
uint8_t v_res_596_; lean_object* v_r_597_; 
v_res_596_ = lp_LanglandsOracles_Oracles_Mat2_pointwise___redArg(v_p_593_, v_x_594_, v_x_595_);
v_r_597_ = lean_box(v_res_596_);
return v_r_597_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pointwise(lean_object* v_00_u03b1_598_, lean_object* v_00_u03b2_599_, lean_object* v_p_600_, lean_object* v_x_601_, lean_object* v_x_602_){
_start:
{
uint8_t v___x_603_; 
v___x_603_ = lp_LanglandsOracles_Oracles_Mat2_pointwise___redArg(v_p_600_, v_x_601_, v_x_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pointwise___boxed(lean_object* v_00_u03b1_604_, lean_object* v_00_u03b2_605_, lean_object* v_p_606_, lean_object* v_x_607_, lean_object* v_x_608_){
_start:
{
uint8_t v_res_609_; lean_object* v_r_610_; 
v_res_609_ = lp_LanglandsOracles_Oracles_Mat2_pointwise(v_00_u03b1_604_, v_00_u03b2_605_, v_p_606_, v_x_607_, v_x_608_);
v_r_610_ = lean_box(v_res_609_);
return v_r_610_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__0(lean_object* v_s_611_, lean_object* v_n_612_, lean_object* v_gRep_613_, lean_object* v_fst_614_, lean_object* v_sw_615_){
_start:
{
lean_object* v_fst_616_; lean_object* v_snd_617_; uint8_t v___x_618_; 
v_fst_616_ = lean_ctor_get(v_sw_615_, 0);
v_snd_617_ = lean_ctor_get(v_sw_615_, 1);
v___x_618_ = lean_nat_dec_eq(v_fst_616_, v_s_611_);
if (v___x_618_ == 0)
{
return v___x_618_;
}
else
{
lean_object* v___x_619_; uint8_t v___x_620_; 
v___x_619_ = lp_LanglandsOracles_Oracles_Mat2_evalW(v_n_612_, v_gRep_613_, v_fst_614_, v_snd_617_, v_snd_617_);
v___x_620_ = lean_nat_dec_eq(v___x_619_, v_s_611_);
lean_dec(v___x_619_);
return v___x_620_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__0___boxed(lean_object* v_s_621_, lean_object* v_n_622_, lean_object* v_gRep_623_, lean_object* v_fst_624_, lean_object* v_sw_625_){
_start:
{
uint8_t v_res_626_; lean_object* v_r_627_; 
v_res_626_ = lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__0(v_s_621_, v_n_622_, v_gRep_623_, v_fst_624_, v_sw_625_);
lean_dec_ref(v_sw_625_);
lean_dec(v_fst_624_);
lean_dec(v_gRep_623_);
lean_dec(v_n_622_);
lean_dec(v_s_621_);
v_r_627_ = lean_box(v_res_626_);
return v_r_627_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__1(lean_object* v_n_628_, lean_object* v_gRep_629_, lean_object* v_fst_630_, lean_object* v_snd_631_, lean_object* v_s_632_){
_start:
{
lean_object* v___f_633_; uint8_t v___x_634_; 
v___f_633_ = lean_alloc_closure((void*)(lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_633_, 0, v_s_632_);
lean_closure_set(v___f_633_, 1, v_n_628_);
lean_closure_set(v___f_633_, 2, v_gRep_629_);
lean_closure_set(v___f_633_, 3, v_fst_630_);
v___x_634_ = l_List_any___redArg(v_snd_631_, v___f_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__1___boxed(lean_object* v_n_635_, lean_object* v_gRep_636_, lean_object* v_fst_637_, lean_object* v_snd_638_, lean_object* v_s_639_){
_start:
{
uint8_t v_res_640_; lean_object* v_r_641_; 
v_res_640_ = lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__1(v_n_635_, v_gRep_636_, v_fst_637_, v_snd_638_, v_s_639_);
v_r_641_ = lean_box(v_res_640_);
return v_r_641_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__2(lean_object* v_n_642_, lean_object* v_gRep_643_, lean_object* v_S_644_, lean_object* v_h_645_, lean_object* v_e_646_){
_start:
{
lean_object* v_fst_647_; lean_object* v_snd_648_; lean_object* v___x_649_; uint8_t v___x_650_; 
v_fst_647_ = lean_ctor_get(v_e_646_, 0);
lean_inc(v_fst_647_);
v_snd_648_ = lean_ctor_get(v_e_646_, 1);
lean_inc(v_snd_648_);
lean_dec_ref(v_e_646_);
v___x_649_ = lp_LanglandsOracles_Oracles_Mat2_encode(v_n_642_, v_h_645_);
v___x_650_ = lean_nat_dec_eq(v_fst_647_, v___x_649_);
lean_dec(v___x_649_);
if (v___x_650_ == 0)
{
lean_dec(v_snd_648_);
lean_dec(v_fst_647_);
lean_dec(v_S_644_);
lean_dec(v_gRep_643_);
lean_dec(v_n_642_);
return v___x_650_;
}
else
{
lean_object* v___f_651_; uint8_t v___x_652_; 
v___f_651_ = lean_alloc_closure((void*)(lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_651_, 0, v_n_642_);
lean_closure_set(v___f_651_, 1, v_gRep_643_);
lean_closure_set(v___f_651_, 2, v_fst_647_);
lean_closure_set(v___f_651_, 3, v_snd_648_);
v___x_652_ = l_List_all___redArg(v_S_644_, v___f_651_);
return v___x_652_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__2___boxed(lean_object* v_n_653_, lean_object* v_gRep_654_, lean_object* v_S_655_, lean_object* v_h_656_, lean_object* v_e_657_){
_start:
{
uint8_t v_res_658_; lean_object* v_r_659_; 
v_res_658_ = lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__2(v_n_653_, v_gRep_654_, v_S_655_, v_h_656_, v_e_657_);
lean_dec_ref(v_h_656_);
v_r_659_ = lean_box(v_res_658_);
return v_r_659_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__3(lean_object* v_n_660_, lean_object* v_gRep_661_, lean_object* v_g_662_, lean_object* v_w_663_){
_start:
{
lean_object* v_fst_664_; lean_object* v_snd_665_; uint8_t v___y_667_; lean_object* v___x_680_; uint8_t v___x_681_; 
v_fst_664_ = lean_ctor_get(v_w_663_, 0);
v_snd_665_ = lean_ctor_get(v_w_663_, 1);
v___x_680_ = lp_LanglandsOracles_Oracles_Mat2_encode(v_n_660_, v_g_662_);
v___x_681_ = lean_nat_dec_eq(v_fst_664_, v___x_680_);
if (v___x_681_ == 0)
{
lean_dec(v___x_680_);
v___y_667_ = v___x_681_;
goto v___jp_666_;
}
else
{
lean_object* v_fst_682_; lean_object* v_snd_683_; lean_object* v___x_684_; lean_object* v___x_685_; uint8_t v___x_686_; 
v_fst_682_ = lean_ctor_get(v_snd_665_, 0);
v_snd_683_ = lean_ctor_get(v_snd_665_, 1);
v___x_684_ = lp_LanglandsOracles_Oracles_Mat2_mulNat(v_n_660_, v_fst_682_, v_gRep_661_);
v___x_685_ = lp_LanglandsOracles_Oracles_Mat2_mulNat(v_n_660_, v___x_684_, v_snd_683_);
lean_dec(v___x_684_);
v___x_686_ = lean_nat_dec_eq(v___x_685_, v___x_680_);
lean_dec(v___x_680_);
lean_dec(v___x_685_);
v___y_667_ = v___x_686_;
goto v___jp_666_;
}
v___jp_666_:
{
if (v___y_667_ == 0)
{
return v___y_667_;
}
else
{
lean_object* v_fst_668_; lean_object* v_snd_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; uint8_t v___x_677_; 
v_fst_668_ = lean_ctor_get(v_snd_665_, 0);
v_snd_669_ = lean_ctor_get(v_snd_665_, 1);
v___x_670_ = lp_LanglandsOracles_Oracles_Mat2_mulNat(v_n_660_, v_fst_668_, v_snd_669_);
v___x_671_ = lean_unsigned_to_nat(0u);
v___x_672_ = lean_nat_mod(v___x_671_, v_n_660_);
v___x_673_ = lean_unsigned_to_nat(1u);
v___x_674_ = lean_nat_mod(v___x_673_, v_n_660_);
lean_inc(v___x_672_);
lean_inc(v___x_674_);
v___x_675_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
lean_ctor_set(v___x_675_, 1, v___x_672_);
lean_ctor_set(v___x_675_, 2, v___x_672_);
lean_ctor_set(v___x_675_, 3, v___x_674_);
v___x_676_ = lp_LanglandsOracles_Oracles_Mat2_encode(v_n_660_, v___x_675_);
lean_dec_ref_known(v___x_675_, 4);
v___x_677_ = lean_nat_dec_eq(v___x_670_, v___x_676_);
lean_dec(v___x_670_);
if (v___x_677_ == 0)
{
lean_dec(v___x_676_);
return v___x_677_;
}
else
{
lean_object* v___x_678_; uint8_t v___x_679_; 
v___x_678_ = lp_LanglandsOracles_Oracles_Mat2_mulNat(v_n_660_, v_snd_669_, v_fst_668_);
v___x_679_ = lean_nat_dec_eq(v___x_678_, v___x_676_);
lean_dec(v___x_676_);
lean_dec(v___x_678_);
return v___x_679_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__3___boxed(lean_object* v_n_687_, lean_object* v_gRep_688_, lean_object* v_g_689_, lean_object* v_w_690_){
_start:
{
uint8_t v_res_691_; lean_object* v_r_692_; 
v_res_691_ = lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__3(v_n_687_, v_gRep_688_, v_g_689_, v_w_690_);
lean_dec_ref(v_w_690_);
lean_dec_ref(v_g_689_);
lean_dec(v_gRep_688_);
lean_dec(v_n_687_);
v_r_692_ = lean_box(v_res_691_);
return v_r_692_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg(lean_object* v_n_693_, lean_object* v_S_694_, lean_object* v_pr_695_){
_start:
{
lean_object* v_tA_696_; lean_object* v_dA_697_; lean_object* v_tB_698_; lean_object* v_dB_699_; lean_object* v_gRep_700_; lean_object* v_witnessesA_701_; lean_object* v_wordsB_702_; lean_object* v___f_703_; uint8_t v___y_705_; lean_object* v___x_710_; lean_object* v___x_711_; uint8_t v___x_712_; 
v_tA_696_ = lean_ctor_get(v_pr_695_, 0);
lean_inc(v_tA_696_);
v_dA_697_ = lean_ctor_get(v_pr_695_, 1);
lean_inc(v_dA_697_);
v_tB_698_ = lean_ctor_get(v_pr_695_, 2);
lean_inc(v_tB_698_);
v_dB_699_ = lean_ctor_get(v_pr_695_, 3);
lean_inc(v_dB_699_);
v_gRep_700_ = lean_ctor_get(v_pr_695_, 4);
lean_inc_n(v_gRep_700_, 2);
v_witnessesA_701_ = lean_ctor_get(v_pr_695_, 5);
lean_inc(v_witnessesA_701_);
v_wordsB_702_ = lean_ctor_get(v_pr_695_, 6);
lean_inc(v_wordsB_702_);
lean_dec_ref(v_pr_695_);
lean_inc(v_n_693_);
v___f_703_ = lean_alloc_closure((void*)(lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_703_, 0, v_n_693_);
lean_closure_set(v___f_703_, 1, v_gRep_700_);
lean_closure_set(v___f_703_, 2, v_S_694_);
v___x_710_ = lp_LanglandsOracles_Oracles_Mat2_decode___redArg(v_n_693_, v_gRep_700_);
v___x_711_ = lp_LanglandsOracles_Oracles_Mat2_encode(v_n_693_, v___x_710_);
lean_dec_ref(v___x_710_);
v___x_712_ = lean_nat_dec_eq(v___x_711_, v_gRep_700_);
lean_dec(v___x_711_);
if (v___x_712_ == 0)
{
lean_dec(v_witnessesA_701_);
lean_dec(v_gRep_700_);
lean_dec(v_dA_697_);
lean_dec(v_tA_696_);
v___y_705_ = v___x_712_;
goto v___jp_704_;
}
else
{
lean_object* v___f_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; uint8_t v___x_717_; 
lean_inc_n(v_n_693_, 2);
v___f_713_ = lean_alloc_closure((void*)(lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_713_, 0, v_n_693_);
lean_closure_set(v___f_713_, 1, v_gRep_700_);
v___x_714_ = lean_nat_mod(v_tA_696_, v_n_693_);
lean_dec(v_tA_696_);
v___x_715_ = lean_nat_mod(v_dA_697_, v_n_693_);
lean_dec(v_dA_697_);
v___x_716_ = lp_LanglandsOracles_Oracles_Mat2_classMats___redArg(v_n_693_, v___x_714_, v___x_715_);
v___x_717_ = lp_LanglandsOracles_Oracles_Mat2_pointwise___redArg(v___f_713_, v___x_716_, v_witnessesA_701_);
v___y_705_ = v___x_717_;
goto v___jp_704_;
}
v___jp_704_:
{
if (v___y_705_ == 0)
{
lean_dec_ref(v___f_703_);
lean_dec(v_wordsB_702_);
lean_dec(v_dB_699_);
lean_dec(v_tB_698_);
lean_dec(v_n_693_);
return v___y_705_;
}
else
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_706_ = lean_nat_mod(v_tB_698_, v_n_693_);
lean_dec(v_tB_698_);
v___x_707_ = lean_nat_mod(v_dB_699_, v_n_693_);
lean_dec(v_dB_699_);
v___x_708_ = lp_LanglandsOracles_Oracles_Mat2_classMats___redArg(v_n_693_, v___x_706_, v___x_707_);
v___x_709_ = lp_LanglandsOracles_Oracles_Mat2_pointwise___redArg(v___f_703_, v___x_708_, v_wordsB_702_);
return v___x_709_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg___boxed(lean_object* v_n_718_, lean_object* v_S_719_, lean_object* v_pr_720_){
_start:
{
uint8_t v_res_721_; lean_object* v_r_722_; 
v_res_721_ = lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg(v_n_718_, v_S_719_, v_pr_720_);
v_r_722_ = lean_box(v_res_721_);
return v_r_722_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_pairOk(lean_object* v_n_723_, lean_object* v_inst_724_, lean_object* v_S_725_, lean_object* v_pr_726_){
_start:
{
uint8_t v___x_727_; 
v___x_727_ = lp_LanglandsOracles_Oracles_Mat2_pairOk___redArg(v_n_723_, v_S_725_, v_pr_726_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_pairOk___boxed(lean_object* v_n_728_, lean_object* v_inst_729_, lean_object* v_S_730_, lean_object* v_pr_731_){
_start:
{
uint8_t v_res_732_; lean_object* v_r_733_; 
v_res_732_ = lp_LanglandsOracles_Oracles_Mat2_pairOk(v_n_728_, v_inst_729_, v_S_730_, v_pr_731_);
v_r_733_ = lean_box(v_res_732_);
return v_r_733_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_apMod(lean_object* v_n_734_, lean_object* v_a_735_, lean_object* v_p_736_){
_start:
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_737_ = lp_LanglandsOracles_Oracles_apGeneral(v_a_735_, v_p_736_);
v___x_738_ = lean_nat_to_int(v_n_734_);
v___x_739_ = lean_int_emod(v___x_737_, v___x_738_);
lean_dec(v___x_737_);
v___x_740_ = lean_int_add(v___x_739_, v___x_738_);
lean_dec(v___x_739_);
v___x_741_ = lean_int_emod(v___x_740_, v___x_738_);
lean_dec(v___x_738_);
lean_dec(v___x_740_);
v___x_742_ = l_Int_toNat(v___x_741_);
lean_dec(v___x_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_apMod___boxed(lean_object* v_n_743_, lean_object* v_a_744_, lean_object* v_p_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = lp_LanglandsOracles_Oracles_Mat2_apMod(v_n_743_, v_a_744_, v_p_745_);
lean_dec(v_a_744_);
return v_res_746_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_curveOk(lean_object* v_n_747_, lean_object* v_d_748_, lean_object* v_c_749_){
_start:
{
lean_object* v_pairs_750_; lean_object* v_ainvs_751_; lean_object* v_pair_752_; lean_object* v_p1_753_; lean_object* v_p2_754_; lean_object* v___x_755_; 
v_pairs_750_ = lean_ctor_get(v_d_748_, 3);
v_ainvs_751_ = lean_ctor_get(v_c_749_, 1);
lean_inc(v_ainvs_751_);
v_pair_752_ = lean_ctor_get(v_c_749_, 2);
lean_inc(v_pair_752_);
v_p1_753_ = lean_ctor_get(v_c_749_, 3);
lean_inc(v_p1_753_);
v_p2_754_ = lean_ctor_get(v_c_749_, 4);
lean_inc(v_p2_754_);
lean_dec_ref(v_c_749_);
v___x_755_ = l_List_get_x3fInternal___redArg(v_pairs_750_, v_pair_752_);
if (lean_obj_tag(v___x_755_) == 0)
{
uint8_t v___x_756_; 
lean_dec(v_p2_754_);
lean_dec(v_p1_753_);
lean_dec(v_ainvs_751_);
lean_dec(v_n_747_);
v___x_756_ = 0;
return v___x_756_;
}
else
{
lean_object* v_val_757_; lean_object* v_tA_758_; lean_object* v_dA_759_; lean_object* v_tB_760_; lean_object* v_dB_761_; uint8_t v___y_763_; lean_object* v___x_768_; uint8_t v___x_769_; 
v_val_757_ = lean_ctor_get(v___x_755_, 0);
lean_inc(v_val_757_);
lean_dec_ref_known(v___x_755_, 1);
v_tA_758_ = lean_ctor_get(v_val_757_, 0);
lean_inc(v_tA_758_);
v_dA_759_ = lean_ctor_get(v_val_757_, 1);
lean_inc(v_dA_759_);
v_tB_760_ = lean_ctor_get(v_val_757_, 2);
lean_inc(v_tB_760_);
v_dB_761_ = lean_ctor_get(v_val_757_, 3);
lean_inc(v_dB_761_);
lean_dec(v_val_757_);
lean_inc(v_p1_753_);
lean_inc(v_n_747_);
v___x_768_ = lp_LanglandsOracles_Oracles_Mat2_apMod(v_n_747_, v_ainvs_751_, v_p1_753_);
v___x_769_ = lean_nat_dec_eq(v___x_768_, v_tA_758_);
lean_dec(v_tA_758_);
lean_dec(v___x_768_);
if (v___x_769_ == 0)
{
lean_dec(v_dA_759_);
lean_dec(v_p1_753_);
v___y_763_ = v___x_769_;
goto v___jp_762_;
}
else
{
lean_object* v___x_770_; uint8_t v___x_771_; 
v___x_770_ = lean_nat_mod(v_p1_753_, v_n_747_);
lean_dec(v_p1_753_);
v___x_771_ = lean_nat_dec_eq(v___x_770_, v_dA_759_);
lean_dec(v_dA_759_);
lean_dec(v___x_770_);
v___y_763_ = v___x_771_;
goto v___jp_762_;
}
v___jp_762_:
{
if (v___y_763_ == 0)
{
lean_dec(v_dB_761_);
lean_dec(v_tB_760_);
lean_dec(v_p2_754_);
lean_dec(v_ainvs_751_);
lean_dec(v_n_747_);
return v___y_763_;
}
else
{
lean_object* v___x_764_; uint8_t v___x_765_; 
lean_inc(v_p2_754_);
lean_inc(v_n_747_);
v___x_764_ = lp_LanglandsOracles_Oracles_Mat2_apMod(v_n_747_, v_ainvs_751_, v_p2_754_);
lean_dec(v_ainvs_751_);
v___x_765_ = lean_nat_dec_eq(v___x_764_, v_tB_760_);
lean_dec(v_tB_760_);
lean_dec(v___x_764_);
if (v___x_765_ == 0)
{
lean_dec(v_dB_761_);
lean_dec(v_p2_754_);
lean_dec(v_n_747_);
return v___x_765_;
}
else
{
lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_766_ = lean_nat_mod(v_p2_754_, v_n_747_);
lean_dec(v_n_747_);
lean_dec(v_p2_754_);
v___x_767_ = lean_nat_dec_eq(v___x_766_, v_dB_761_);
lean_dec(v_dB_761_);
lean_dec(v___x_766_);
return v___x_767_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_curveOk___boxed(lean_object* v_n_772_, lean_object* v_d_773_, lean_object* v_c_774_){
_start:
{
uint8_t v_res_775_; lean_object* v_r_776_; 
v_res_775_ = lp_LanglandsOracles_Oracles_Mat2_curveOk(v_n_772_, v_d_773_, v_c_774_);
lean_dec_ref(v_d_773_);
v_r_776_ = lean_box(v_res_775_);
return v_r_776_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_curveOk_match__1_splitter___redArg(lean_object* v_x_777_, lean_object* v_h__1_778_, lean_object* v_h__2_779_){
_start:
{
if (lean_obj_tag(v_x_777_) == 0)
{
lean_object* v___x_780_; lean_object* v___x_781_; 
lean_dec(v_h__1_778_);
v___x_780_ = lean_box(0);
v___x_781_ = lean_apply_1(v_h__2_779_, v___x_780_);
return v___x_781_;
}
else
{
lean_object* v_val_782_; lean_object* v___x_783_; 
lean_dec(v_h__2_779_);
v_val_782_ = lean_ctor_get(v_x_777_, 0);
lean_inc(v_val_782_);
lean_dec_ref_known(v_x_777_, 1);
v___x_783_ = lean_apply_1(v_h__1_778_, v_val_782_);
return v___x_783_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2_curveOk_match__1_splitter(lean_object* v_motive_784_, lean_object* v_x_785_, lean_object* v_h__1_786_, lean_object* v_h__2_787_){
_start:
{
if (lean_obj_tag(v_x_785_) == 0)
{
lean_object* v___x_788_; lean_object* v___x_789_; 
lean_dec(v_h__1_786_);
v___x_788_ = lean_box(0);
v___x_789_ = lean_apply_1(v_h__2_787_, v___x_788_);
return v___x_789_;
}
else
{
lean_object* v_val_790_; lean_object* v___x_791_; 
lean_dec(v_h__2_787_);
v_val_790_ = lean_ctor_get(v_x_785_, 0);
lean_inc(v_val_790_);
lean_dec_ref_known(v_x_785_, 1);
v___x_791_ = lean_apply_1(v_h__1_786_, v_val_790_);
return v___x_791_;
}
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_any___at___00Oracles_Mat2_invTable_spec__0(lean_object* v_c_792_, lean_object* v_n_793_, lean_object* v_x_794_){
_start:
{
if (lean_obj_tag(v_x_794_) == 0)
{
uint8_t v___x_795_; 
v___x_795_ = 0;
return v___x_795_;
}
else
{
lean_object* v_head_796_; lean_object* v_tail_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; uint8_t v___x_801_; 
v_head_796_ = lean_ctor_get(v_x_794_, 0);
v_tail_797_ = lean_ctor_get(v_x_794_, 1);
v___x_798_ = lean_nat_mul(v_c_792_, v_head_796_);
v___x_799_ = lean_nat_mod(v___x_798_, v_n_793_);
lean_dec(v___x_798_);
v___x_800_ = lean_unsigned_to_nat(1u);
v___x_801_ = lean_nat_dec_eq(v___x_799_, v___x_800_);
lean_dec(v___x_799_);
if (v___x_801_ == 0)
{
v_x_794_ = v_tail_797_;
goto _start;
}
else
{
return v___x_801_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_any___at___00Oracles_Mat2_invTable_spec__0___boxed(lean_object* v_c_803_, lean_object* v_n_804_, lean_object* v_x_805_){
_start:
{
uint8_t v_res_806_; lean_object* v_r_807_; 
v_res_806_ = lp_LanglandsOracles_List_any___at___00Oracles_Mat2_invTable_spec__0(v_c_803_, v_n_804_, v_x_805_);
lean_dec(v_x_805_);
lean_dec(v_n_804_);
lean_dec(v_c_803_);
v_r_807_ = lean_box(v_res_806_);
return v_r_807_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_invTable_spec__1(lean_object* v_n_808_, lean_object* v___x_809_, lean_object* v_x_810_){
_start:
{
if (lean_obj_tag(v_x_810_) == 0)
{
uint8_t v___x_811_; 
v___x_811_ = 1;
return v___x_811_;
}
else
{
lean_object* v_head_812_; lean_object* v_tail_813_; uint8_t v___y_815_; lean_object* v___x_817_; uint8_t v___x_818_; 
v_head_812_ = lean_ctor_get(v_x_810_, 0);
v_tail_813_ = lean_ctor_get(v_x_810_, 1);
v___x_817_ = lean_unsigned_to_nat(0u);
v___x_818_ = lean_nat_dec_eq(v_head_812_, v___x_817_);
if (v___x_818_ == 0)
{
uint8_t v___x_819_; 
v___x_819_ = lp_LanglandsOracles_List_any___at___00Oracles_Mat2_invTable_spec__0(v_head_812_, v_n_808_, v___x_809_);
v___y_815_ = v___x_819_;
goto v___jp_814_;
}
else
{
v___y_815_ = v___x_818_;
goto v___jp_814_;
}
v___jp_814_:
{
if (v___y_815_ == 0)
{
return v___y_815_;
}
else
{
v_x_810_ = v_tail_813_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_invTable_spec__1___boxed(lean_object* v_n_820_, lean_object* v___x_821_, lean_object* v_x_822_){
_start:
{
uint8_t v_res_823_; lean_object* v_r_824_; 
v_res_823_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_invTable_spec__1(v_n_820_, v___x_821_, v_x_822_);
lean_dec(v_x_822_);
lean_dec(v___x_821_);
lean_dec(v_n_820_);
v_r_824_ = lean_box(v_res_823_);
return v_r_824_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_invTable(lean_object* v_n_825_){
_start:
{
lean_object* v___x_826_; uint8_t v___x_827_; 
lean_inc(v_n_825_);
v___x_826_ = l_List_range(v_n_825_);
v___x_827_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_invTable_spec__1(v_n_825_, v___x_826_, v___x_826_);
lean_dec(v___x_826_);
lean_dec(v_n_825_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_invTable___boxed(lean_object* v_n_828_){
_start:
{
uint8_t v_res_829_; lean_object* v_r_830_; 
v_res_829_ = lp_LanglandsOracles_Oracles_Mat2_invTable(v_n_828_);
v_r_830_ = lean_box(v_res_829_);
return v_r_830_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__11(void){
_start:
{
lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_872_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__10));
v___x_873_ = l_String_toRawSubstring_x27(v___x_872_);
return v___x_873_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__14(void){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_877_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__13));
v___x_878_ = l_String_toRawSubstring_x27(v___x_877_);
return v___x_878_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__17(void){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__16));
v___x_883_ = l_String_toRawSubstring_x27(v___x_882_);
return v___x_883_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__20(void){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__19));
v___x_888_ = l_String_toRawSubstring_x27(v___x_887_);
return v___x_888_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__22(void){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = l_Array_mkArray0(lean_box(0));
return v___x_891_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__41(void){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__40));
v___x_940_ = l_String_toRawSubstring_x27(v___x_939_);
return v___x_940_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__53(void){
_start:
{
lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_965_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__52));
v___x_966_ = l_String_toRawSubstring_x27(v___x_965_);
return v___x_966_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__57(void){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__56));
v___x_972_ = l_String_toRawSubstring_x27(v___x_971_);
return v___x_972_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__60(void){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_976_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__59));
v___x_977_ = l_String_toRawSubstring_x27(v___x_976_);
return v___x_977_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__72(void){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__71));
v___x_1000_ = l_String_toRawSubstring_x27(v___x_999_);
return v___x_1000_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__75(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__74));
v___x_1005_ = l_String_toRawSubstring_x27(v___x_1004_);
return v___x_1005_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__78(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1009_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__77));
v___x_1010_ = l_String_toRawSubstring_x27(v___x_1009_);
return v___x_1010_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__81(void){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1014_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__80));
v___x_1015_ = l_String_toRawSubstring_x27(v___x_1014_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1(lean_object* v_x_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_){
_start:
{
lean_object* v___x_1027_; uint8_t v___x_1028_; 
v___x_1027_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2_tacticTrace__sq__tac___closed__1));
v___x_1028_ = l_Lean_Syntax_isOfKind(v_x_1024_, v___x_1027_);
if (v___x_1028_ == 0)
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1029_ = lean_box(1);
v___x_1030_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1029_);
lean_ctor_set(v___x_1030_, 1, v_a_1026_);
return v___x_1030_;
}
else
{
lean_object* v_quotContext_1031_; lean_object* v_currMacroScope_1032_; lean_object* v_ref_1033_; uint8_t v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; 
v_quotContext_1031_ = lean_ctor_get(v_a_1025_, 1);
v_currMacroScope_1032_ = lean_ctor_get(v_a_1025_, 2);
v_ref_1033_ = lean_ctor_get(v_a_1025_, 5);
v___x_1034_ = 0;
v___x_1035_ = l_Lean_SourceInfo_fromRef(v_ref_1033_, v___x_1034_);
v___x_1036_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__2));
v___x_1037_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__3));
lean_inc_n(v___x_1035_, 70);
v___x_1038_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1035_);
lean_ctor_set(v___x_1038_, 1, v___x_1037_);
v___x_1039_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__5));
v___x_1040_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__7));
v___x_1041_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__12));
v___x_1042_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__8));
v___x_1043_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__9));
v___x_1044_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1035_);
lean_ctor_set(v___x_1044_, 1, v___x_1042_);
v___x_1045_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__11, &lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__11_once, _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__11);
v___x_1046_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__12));
lean_inc_n(v_currMacroScope_1032_, 13);
lean_inc_n(v_quotContext_1031_, 13);
v___x_1047_ = l_Lean_addMacroScope(v_quotContext_1031_, v___x_1046_, v_currMacroScope_1032_);
v___x_1048_ = lean_box(0);
v___x_1049_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1035_);
lean_ctor_set(v___x_1049_, 1, v___x_1045_);
lean_ctor_set(v___x_1049_, 2, v___x_1047_);
lean_ctor_set(v___x_1049_, 3, v___x_1048_);
v___x_1050_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__14, &lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__14_once, _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__14);
v___x_1051_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__15));
v___x_1052_ = l_Lean_addMacroScope(v_quotContext_1031_, v___x_1051_, v_currMacroScope_1032_);
v___x_1053_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1035_);
lean_ctor_set(v___x_1053_, 1, v___x_1050_);
lean_ctor_set(v___x_1053_, 2, v___x_1052_);
lean_ctor_set(v___x_1053_, 3, v___x_1048_);
v___x_1054_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__17, &lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__17_once, _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__17);
v___x_1055_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__18));
v___x_1056_ = l_Lean_addMacroScope(v_quotContext_1031_, v___x_1055_, v_currMacroScope_1032_);
v___x_1057_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1035_);
lean_ctor_set(v___x_1057_, 1, v___x_1054_);
lean_ctor_set(v___x_1057_, 2, v___x_1056_);
lean_ctor_set(v___x_1057_, 3, v___x_1048_);
v___x_1058_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__20, &lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__20_once, _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__20);
v___x_1059_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__21));
v___x_1060_ = l_Lean_addMacroScope(v_quotContext_1031_, v___x_1059_, v_currMacroScope_1032_);
v___x_1061_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1035_);
lean_ctor_set(v___x_1061_, 1, v___x_1058_);
lean_ctor_set(v___x_1061_, 2, v___x_1060_);
lean_ctor_set(v___x_1061_, 3, v___x_1048_);
lean_inc_ref_n(v___x_1061_, 4);
lean_inc_ref_n(v___x_1057_, 2);
lean_inc_ref_n(v___x_1053_, 2);
lean_inc_ref_n(v___x_1049_, 4);
v___x_1062_ = l_Lean_Syntax_node4(v___x_1035_, v___x_1041_, v___x_1049_, v___x_1053_, v___x_1057_, v___x_1061_);
v___x_1063_ = l_Lean_Syntax_node2(v___x_1035_, v___x_1043_, v___x_1044_, v___x_1062_);
v___x_1064_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__22, &lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__22_once, _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__22);
v___x_1065_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1035_);
lean_ctor_set(v___x_1065_, 1, v___x_1041_);
lean_ctor_set(v___x_1065_, 2, v___x_1064_);
v___x_1066_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__24));
v___x_1067_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__25));
v___x_1068_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1035_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
v___x_1069_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__27));
lean_inc_ref_n(v___x_1065_, 19);
v___x_1070_ = l_Lean_Syntax_node1(v___x_1035_, v___x_1069_, v___x_1065_);
v___x_1071_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__29));
v___x_1072_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__30));
v___x_1073_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1035_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
v___x_1074_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__32));
v___x_1075_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__34));
v___x_1076_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__35));
v___x_1077_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__37));
v___x_1078_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__39));
v___x_1079_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__41, &lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__41_once, _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__41);
v___x_1080_ = lean_box(0);
v___x_1081_ = l_Lean_addMacroScope(v_quotContext_1031_, v___x_1080_, v_currMacroScope_1032_);
v___x_1082_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__44));
v___x_1083_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1035_);
lean_ctor_set(v___x_1083_, 1, v___x_1079_);
lean_ctor_set(v___x_1083_, 2, v___x_1081_);
lean_ctor_set(v___x_1083_, 3, v___x_1082_);
v___x_1084_ = l_Lean_Syntax_node1(v___x_1035_, v___x_1078_, v___x_1083_);
lean_inc_ref(v___x_1038_);
v___x_1085_ = l_Lean_Syntax_node2(v___x_1035_, v___x_1077_, v___x_1038_, v___x_1084_);
v___x_1086_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__4));
v___x_1087_ = lean_obj_once(&lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__6, &lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__6_once, _init_lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__6);
v___x_1088_ = ((lean_object*)(lp_LanglandsOracles___private_LanglandsOracles_ImageModL_0__Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules____private__LanglandsOracles__ImageModL__0__Oracles__Mat2__termR__1___closed__7));
v___x_1089_ = l_Lean_addMacroScope(v_quotContext_1031_, v___x_1088_, v_currMacroScope_1032_);
v___x_1090_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__46));
v___x_1091_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1035_);
lean_ctor_set(v___x_1091_, 1, v___x_1087_);
lean_ctor_set(v___x_1091_, 2, v___x_1089_);
lean_ctor_set(v___x_1091_, 3, v___x_1090_);
v___x_1092_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__48));
v___x_1093_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__49));
v___x_1094_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1035_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v___x_1095_ = l_Lean_Syntax_node1(v___x_1035_, v___x_1092_, v___x_1094_);
v___x_1096_ = l_Lean_Syntax_node1(v___x_1035_, v___x_1041_, v___x_1095_);
v___x_1097_ = l_Lean_Syntax_node2(v___x_1035_, v___x_1086_, v___x_1091_, v___x_1096_);
v___x_1098_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__50));
v___x_1099_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1035_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
lean_inc_ref(v___x_1099_);
v___x_1100_ = l_Lean_Syntax_node3(v___x_1035_, v___x_1076_, v___x_1085_, v___x_1097_, v___x_1099_);
v___x_1101_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__51));
v___x_1102_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1035_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__53, &lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__53_once, _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__53);
v___x_1104_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__54));
v___x_1105_ = l_Lean_addMacroScope(v_quotContext_1031_, v___x_1104_, v_currMacroScope_1032_);
v___x_1106_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1035_);
lean_ctor_set(v___x_1106_, 1, v___x_1103_);
lean_ctor_set(v___x_1106_, 2, v___x_1105_);
lean_ctor_set(v___x_1106_, 3, v___x_1048_);
lean_inc_ref_n(v___x_1102_, 2);
lean_inc_n(v___x_1100_, 2);
v___x_1107_ = l_Lean_Syntax_node3(v___x_1035_, v___x_1075_, v___x_1100_, v___x_1102_, v___x_1106_);
v___x_1108_ = l_Lean_Syntax_node2(v___x_1035_, v___x_1074_, v___x_1065_, v___x_1107_);
v___x_1109_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__55));
v___x_1110_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1035_);
lean_ctor_set(v___x_1110_, 1, v___x_1109_);
v___x_1111_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__57, &lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__57_once, _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__57);
v___x_1112_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__58));
v___x_1113_ = l_Lean_addMacroScope(v_quotContext_1031_, v___x_1112_, v_currMacroScope_1032_);
v___x_1114_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1035_);
lean_ctor_set(v___x_1114_, 1, v___x_1111_);
lean_ctor_set(v___x_1114_, 2, v___x_1113_);
lean_ctor_set(v___x_1114_, 3, v___x_1048_);
v___x_1115_ = l_Lean_Syntax_node3(v___x_1035_, v___x_1075_, v___x_1100_, v___x_1102_, v___x_1114_);
v___x_1116_ = l_Lean_Syntax_node2(v___x_1035_, v___x_1074_, v___x_1065_, v___x_1115_);
v___x_1117_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__60, &lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__60_once, _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__60);
v___x_1118_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__61));
v___x_1119_ = l_Lean_addMacroScope(v_quotContext_1031_, v___x_1118_, v_currMacroScope_1032_);
v___x_1120_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1035_);
lean_ctor_set(v___x_1120_, 1, v___x_1117_);
lean_ctor_set(v___x_1120_, 2, v___x_1119_);
lean_ctor_set(v___x_1120_, 3, v___x_1048_);
v___x_1121_ = l_Lean_Syntax_node3(v___x_1035_, v___x_1075_, v___x_1100_, v___x_1102_, v___x_1120_);
v___x_1122_ = l_Lean_Syntax_node2(v___x_1035_, v___x_1041_, v___x_1061_, v___x_1049_);
lean_inc(v___x_1121_);
v___x_1123_ = l_Lean_Syntax_node2(v___x_1035_, v___x_1086_, v___x_1121_, v___x_1122_);
v___x_1124_ = l_Lean_Syntax_node2(v___x_1035_, v___x_1074_, v___x_1065_, v___x_1123_);
v___x_1125_ = l_Lean_Syntax_node2(v___x_1035_, v___x_1041_, v___x_1057_, v___x_1053_);
v___x_1126_ = l_Lean_Syntax_node2(v___x_1035_, v___x_1086_, v___x_1121_, v___x_1125_);
v___x_1127_ = l_Lean_Syntax_node2(v___x_1035_, v___x_1074_, v___x_1065_, v___x_1126_);
v___x_1128_ = lean_unsigned_to_nat(9u);
v___x_1129_ = lean_mk_empty_array_with_capacity(v___x_1128_);
v___x_1130_ = lean_array_push(v___x_1129_, v___x_1108_);
lean_inc_ref_n(v___x_1110_, 3);
v___x_1131_ = lean_array_push(v___x_1130_, v___x_1110_);
lean_inc(v___x_1116_);
v___x_1132_ = lean_array_push(v___x_1131_, v___x_1116_);
v___x_1133_ = lean_array_push(v___x_1132_, v___x_1110_);
v___x_1134_ = lean_array_push(v___x_1133_, v___x_1116_);
v___x_1135_ = lean_array_push(v___x_1134_, v___x_1110_);
v___x_1136_ = lean_array_push(v___x_1135_, v___x_1124_);
v___x_1137_ = lean_array_push(v___x_1136_, v___x_1110_);
v___x_1138_ = lean_array_push(v___x_1137_, v___x_1127_);
v___x_1139_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1035_);
lean_ctor_set(v___x_1139_, 1, v___x_1041_);
lean_ctor_set(v___x_1139_, 2, v___x_1138_);
v___x_1140_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__62));
v___x_1141_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1035_);
lean_ctor_set(v___x_1141_, 1, v___x_1140_);
v___x_1142_ = l_Lean_Syntax_node3(v___x_1035_, v___x_1071_, v___x_1073_, v___x_1139_, v___x_1141_);
lean_inc(v___x_1070_);
v___x_1143_ = l_Lean_Syntax_node4(v___x_1035_, v___x_1066_, v___x_1068_, v___x_1070_, v___x_1142_, v___x_1065_);
v___x_1144_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__63));
v___x_1145_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__64));
v___x_1146_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1035_);
lean_ctor_set(v___x_1146_, 1, v___x_1144_);
v___x_1147_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__66));
v___x_1148_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__68));
v___x_1149_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__69));
v___x_1150_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1035_);
lean_ctor_set(v___x_1150_, 1, v___x_1149_);
lean_inc_ref_n(v___x_1150_, 3);
v___x_1151_ = l_Lean_Syntax_node3(v___x_1035_, v___x_1148_, v___x_1049_, v___x_1150_, v___x_1049_);
v___x_1152_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__70));
v___x_1153_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1035_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
v___x_1154_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__72, &lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__72_once, _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__72);
v___x_1155_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__73));
v___x_1156_ = l_Lean_addMacroScope(v_quotContext_1031_, v___x_1155_, v_currMacroScope_1032_);
v___x_1157_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1035_);
lean_ctor_set(v___x_1157_, 1, v___x_1154_);
lean_ctor_set(v___x_1157_, 2, v___x_1156_);
lean_ctor_set(v___x_1157_, 3, v___x_1048_);
lean_inc_ref_n(v___x_1153_, 3);
v___x_1158_ = l_Lean_Syntax_node4(v___x_1035_, v___x_1147_, v___x_1065_, v___x_1151_, v___x_1153_, v___x_1157_);
v___x_1159_ = l_Lean_Syntax_node1(v___x_1035_, v___x_1041_, v___x_1158_);
lean_inc_ref_n(v___x_1146_, 3);
v___x_1160_ = l_Lean_Syntax_node3(v___x_1035_, v___x_1145_, v___x_1146_, v___x_1159_, v___x_1065_);
v___x_1161_ = l_Lean_Syntax_node3(v___x_1035_, v___x_1148_, v___x_1049_, v___x_1150_, v___x_1061_);
v___x_1162_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__75, &lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__75_once, _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__75);
v___x_1163_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__76));
v___x_1164_ = l_Lean_addMacroScope(v_quotContext_1031_, v___x_1163_, v_currMacroScope_1032_);
v___x_1165_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1035_);
lean_ctor_set(v___x_1165_, 1, v___x_1162_);
lean_ctor_set(v___x_1165_, 2, v___x_1164_);
lean_ctor_set(v___x_1165_, 3, v___x_1048_);
v___x_1166_ = l_Lean_Syntax_node4(v___x_1035_, v___x_1147_, v___x_1065_, v___x_1161_, v___x_1153_, v___x_1165_);
v___x_1167_ = l_Lean_Syntax_node1(v___x_1035_, v___x_1041_, v___x_1166_);
v___x_1168_ = l_Lean_Syntax_node3(v___x_1035_, v___x_1145_, v___x_1146_, v___x_1167_, v___x_1065_);
v___x_1169_ = l_Lean_Syntax_node3(v___x_1035_, v___x_1148_, v___x_1061_, v___x_1150_, v___x_1061_);
v___x_1170_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__78, &lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__78_once, _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__78);
v___x_1171_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__79));
v___x_1172_ = l_Lean_addMacroScope(v_quotContext_1031_, v___x_1171_, v_currMacroScope_1032_);
v___x_1173_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1035_);
lean_ctor_set(v___x_1173_, 1, v___x_1170_);
lean_ctor_set(v___x_1173_, 2, v___x_1172_);
lean_ctor_set(v___x_1173_, 3, v___x_1048_);
v___x_1174_ = l_Lean_Syntax_node4(v___x_1035_, v___x_1147_, v___x_1065_, v___x_1169_, v___x_1153_, v___x_1173_);
v___x_1175_ = l_Lean_Syntax_node1(v___x_1035_, v___x_1041_, v___x_1174_);
v___x_1176_ = l_Lean_Syntax_node3(v___x_1035_, v___x_1145_, v___x_1146_, v___x_1175_, v___x_1065_);
v___x_1177_ = l_Lean_Syntax_node3(v___x_1035_, v___x_1148_, v___x_1053_, v___x_1150_, v___x_1057_);
v___x_1178_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__81, &lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__81_once, _init_lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__81);
v___x_1179_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__82));
v___x_1180_ = l_Lean_addMacroScope(v_quotContext_1031_, v___x_1179_, v_currMacroScope_1032_);
v___x_1181_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1035_);
lean_ctor_set(v___x_1181_, 1, v___x_1178_);
lean_ctor_set(v___x_1181_, 2, v___x_1180_);
lean_ctor_set(v___x_1181_, 3, v___x_1048_);
v___x_1182_ = l_Lean_Syntax_node4(v___x_1035_, v___x_1147_, v___x_1065_, v___x_1177_, v___x_1153_, v___x_1181_);
v___x_1183_ = l_Lean_Syntax_node1(v___x_1035_, v___x_1041_, v___x_1182_);
v___x_1184_ = l_Lean_Syntax_node3(v___x_1035_, v___x_1145_, v___x_1146_, v___x_1183_, v___x_1065_);
v___x_1185_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__83));
v___x_1186_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___closed__84));
v___x_1187_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1035_);
lean_ctor_set(v___x_1187_, 1, v___x_1185_);
v___x_1188_ = l_Lean_Syntax_node2(v___x_1035_, v___x_1186_, v___x_1187_, v___x_1070_);
v___x_1189_ = lean_unsigned_to_nat(13u);
v___x_1190_ = lean_mk_empty_array_with_capacity(v___x_1189_);
v___x_1191_ = lean_array_push(v___x_1190_, v___x_1063_);
v___x_1192_ = lean_array_push(v___x_1191_, v___x_1065_);
v___x_1193_ = lean_array_push(v___x_1192_, v___x_1143_);
v___x_1194_ = lean_array_push(v___x_1193_, v___x_1065_);
v___x_1195_ = lean_array_push(v___x_1194_, v___x_1160_);
v___x_1196_ = lean_array_push(v___x_1195_, v___x_1065_);
v___x_1197_ = lean_array_push(v___x_1196_, v___x_1168_);
v___x_1198_ = lean_array_push(v___x_1197_, v___x_1065_);
v___x_1199_ = lean_array_push(v___x_1198_, v___x_1176_);
v___x_1200_ = lean_array_push(v___x_1199_, v___x_1065_);
v___x_1201_ = lean_array_push(v___x_1200_, v___x_1184_);
v___x_1202_ = lean_array_push(v___x_1201_, v___x_1065_);
v___x_1203_ = lean_array_push(v___x_1202_, v___x_1188_);
v___x_1204_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1204_, 0, v___x_1035_);
lean_ctor_set(v___x_1204_, 1, v___x_1041_);
lean_ctor_set(v___x_1204_, 2, v___x_1203_);
v___x_1205_ = l_Lean_Syntax_node1(v___x_1035_, v___x_1040_, v___x_1204_);
v___x_1206_ = l_Lean_Syntax_node1(v___x_1035_, v___x_1039_, v___x_1205_);
v___x_1207_ = l_Lean_Syntax_node3(v___x_1035_, v___x_1036_, v___x_1038_, v___x_1206_, v___x_1099_);
v___x_1208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1207_);
lean_ctor_set(v___x_1208_, 1, v_a_1026_);
return v___x_1208_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1___boxed(lean_object* v_x_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = lp_LanglandsOracles_Oracles_Mat2___aux__LanglandsOracles__ImageModL______macroRules__Oracles__Mat2__tacticTrace__sq__tac__1(v_x_1209_, v_a_1210_, v_a_1211_);
lean_dec_ref(v_a_1210_);
return v_res_1212_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ImageMod2(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Data(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_ImageModL(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
