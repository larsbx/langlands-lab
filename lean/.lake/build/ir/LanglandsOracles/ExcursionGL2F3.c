// Lean compiler output
// Module: LanglandsOracles.ExcursionGL2F3
// Imports: public import Init public meta import Init public import LanglandsOracles.Pseudocharacter public import LanglandsOracles.ExcursionGL2
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
lean_object* lp_LanglandsOracles_Oracles_Mat2_mul(lean_object*, lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_trace(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_det(lean_object*, lean_object*);
lean_object* l_Fin_mul(lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_sub(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_one3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_one3___closed__0;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_one3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_one3___closed__1;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_one3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_one3___closed__2;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_one3;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_inv3(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_grpGL3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_grpGL3___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_LanglandsOracles_Oracles_Mat2_grpGL3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_Oracles_Mat2_grpGL3___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_grpGL3___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_grpGL3___closed__0_value;
static const lean_closure_object lp_LanglandsOracles_Oracles_Mat2_grpGL3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_Oracles_Mat2_inv3, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_grpGL3___closed__1 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_grpGL3___closed__1_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_grpGL3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_grpGL3___closed__2;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_grpGL3;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_traceGL3(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_traceGL3___boxed(lean_object*);
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_one3___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_unsigned_to_nat(3u);
v___x_2_ = lean_unsigned_to_nat(1u);
v___x_3_ = lean_nat_mod(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_one3___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_unsigned_to_nat(3u);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_nat_mod(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_one3___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_one3___closed__1, &lp_LanglandsOracles_Oracles_Mat2_one3___closed__1_once, _init_lp_LanglandsOracles_Oracles_Mat2_one3___closed__1);
v___x_8_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_one3___closed__0, &lp_LanglandsOracles_Oracles_Mat2_one3___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_one3___closed__0);
v___x_9_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
lean_ctor_set(v___x_9_, 1, v___x_7_);
lean_ctor_set(v___x_9_, 2, v___x_7_);
lean_ctor_set(v___x_9_, 3, v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_one3(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_one3___closed__2, &lp_LanglandsOracles_Oracles_Mat2_one3___closed__2_once, _init_lp_LanglandsOracles_Oracles_Mat2_one3___closed__2);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_inv3(lean_object* v_x_11_){
_start:
{
lean_object* v_a_12_; lean_object* v_b_13_; lean_object* v_c_14_; lean_object* v_d_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_31_; 
v_a_12_ = lean_ctor_get(v_x_11_, 0);
lean_inc(v_a_12_);
v_b_13_ = lean_ctor_get(v_x_11_, 1);
lean_inc(v_b_13_);
v_c_14_ = lean_ctor_get(v_x_11_, 2);
lean_inc(v_c_14_);
v_d_15_ = lean_ctor_get(v_x_11_, 3);
lean_inc(v_d_15_);
v___x_16_ = lean_unsigned_to_nat(3u);
v___x_17_ = lp_LanglandsOracles_Oracles_Mat2_det(v___x_16_, v_x_11_);
v_isSharedCheck_31_ = !lean_is_exclusive(v_x_11_);
if (v_isSharedCheck_31_ == 0)
{
lean_object* v_unused_32_; lean_object* v_unused_33_; lean_object* v_unused_34_; lean_object* v_unused_35_; 
v_unused_32_ = lean_ctor_get(v_x_11_, 3);
lean_dec(v_unused_32_);
v_unused_33_ = lean_ctor_get(v_x_11_, 2);
lean_dec(v_unused_33_);
v_unused_34_ = lean_ctor_get(v_x_11_, 1);
lean_dec(v_unused_34_);
v_unused_35_ = lean_ctor_get(v_x_11_, 0);
lean_dec(v_unused_35_);
v___x_19_ = v_x_11_;
v_isShared_20_ = v_isSharedCheck_31_;
goto v_resetjp_18_;
}
else
{
lean_dec(v_x_11_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_31_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_29_; 
v___x_21_ = l_Fin_mul(v___x_16_, v___x_17_, v_d_15_);
lean_dec(v_d_15_);
v___x_22_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_one3___closed__1, &lp_LanglandsOracles_Oracles_Mat2_one3___closed__1_once, _init_lp_LanglandsOracles_Oracles_Mat2_one3___closed__1);
v___x_23_ = l_Fin_sub(v___x_16_, v___x_22_, v_b_13_);
lean_dec(v_b_13_);
v___x_24_ = l_Fin_mul(v___x_16_, v___x_17_, v___x_23_);
lean_dec(v___x_23_);
v___x_25_ = l_Fin_sub(v___x_16_, v___x_22_, v_c_14_);
lean_dec(v_c_14_);
v___x_26_ = l_Fin_mul(v___x_16_, v___x_17_, v___x_25_);
lean_dec(v___x_25_);
v___x_27_ = l_Fin_mul(v___x_16_, v___x_17_, v_a_12_);
lean_dec(v_a_12_);
lean_dec(v___x_17_);
if (v_isShared_20_ == 0)
{
lean_ctor_set(v___x_19_, 3, v___x_27_);
lean_ctor_set(v___x_19_, 2, v___x_26_);
lean_ctor_set(v___x_19_, 1, v___x_24_);
lean_ctor_set(v___x_19_, 0, v___x_21_);
v___x_29_ = v___x_19_;
goto v_reusejp_28_;
}
else
{
lean_object* v_reuseFailAlloc_30_; 
v_reuseFailAlloc_30_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_30_, 0, v___x_21_);
lean_ctor_set(v_reuseFailAlloc_30_, 1, v___x_24_);
lean_ctor_set(v_reuseFailAlloc_30_, 2, v___x_26_);
lean_ctor_set(v_reuseFailAlloc_30_, 3, v___x_27_);
v___x_29_ = v_reuseFailAlloc_30_;
goto v_reusejp_28_;
}
v_reusejp_28_:
{
return v___x_29_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_grpGL3___lam__0(lean_object* v_x_36_, lean_object* v_y_37_){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = lean_unsigned_to_nat(3u);
v___x_39_ = lp_LanglandsOracles_Oracles_Mat2_mul(v___x_38_, v_x_36_, v_y_37_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_grpGL3___lam__0___boxed(lean_object* v_x_40_, lean_object* v_y_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = lp_LanglandsOracles_Oracles_Mat2_grpGL3___lam__0(v_x_40_, v_y_41_);
lean_dec_ref(v_x_40_);
return v_res_42_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_grpGL3___closed__2(void){
_start:
{
lean_object* v___f_45_; lean_object* v___x_46_; lean_object* v___f_47_; lean_object* v___x_48_; 
v___f_45_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2_grpGL3___closed__1));
v___x_46_ = lp_LanglandsOracles_Oracles_Mat2_one3;
v___f_47_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2_grpGL3___closed__0));
v___x_48_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_48_, 0, v___f_47_);
lean_ctor_set(v___x_48_, 1, v___x_46_);
lean_ctor_set(v___x_48_, 2, v___f_45_);
return v___x_48_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_grpGL3(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_grpGL3___closed__2, &lp_LanglandsOracles_Oracles_Mat2_grpGL3___closed__2_once, _init_lp_LanglandsOracles_Oracles_Mat2_grpGL3___closed__2);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_traceGL3(lean_object* v_x_50_){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_unsigned_to_nat(3u);
v___x_52_ = lp_LanglandsOracles_Oracles_Mat2_trace(v___x_51_, v_x_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_traceGL3___boxed(lean_object* v_x_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = lp_LanglandsOracles_Oracles_Mat2_traceGL3(v_x_53_);
lean_dec_ref(v_x_53_);
return v_res_54_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Pseudocharacter(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ExcursionGL2(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_ExcursionGL2F3(uint8_t builtin) {
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
res = initialize_LanglandsOracles_LanglandsOracles_Pseudocharacter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ExcursionGL2(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_LanglandsOracles_Oracles_Mat2_one3 = _init_lp_LanglandsOracles_Oracles_Mat2_one3();
lean_mark_persistent(lp_LanglandsOracles_Oracles_Mat2_one3);
lp_LanglandsOracles_Oracles_Mat2_grpGL3 = _init_lp_LanglandsOracles_Oracles_Mat2_grpGL3();
lean_mark_persistent(lp_LanglandsOracles_Oracles_Mat2_grpGL3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
