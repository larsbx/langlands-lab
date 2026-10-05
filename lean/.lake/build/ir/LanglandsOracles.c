// Lean compiler output
// Module: LanglandsOracles
// Imports: public import Init public meta import Init public import LanglandsOracles.QForms public import LanglandsOracles.TraceFormula public import LanglandsOracles.Matrix public import LanglandsOracles.Carlitz public import LanglandsOracles.Certificates public import LanglandsOracles.Data public import LanglandsOracles.BrandtCertificates public import LanglandsOracles.LSeriesCertificates public import LanglandsOracles.FunctionFieldCertificates public import LanglandsOracles.Excursion public import LanglandsOracles.CommSemiring public import LanglandsOracles.Pseudocharacter public import LanglandsOracles.ExcursionInstance public import LanglandsOracles.LevelNCertificates public import LanglandsOracles.Isogeny public import LanglandsOracles.ExcursionGL1 public import LanglandsOracles.ExcursionGL2 public import LanglandsOracles.ExcursionGL2Ring public import LanglandsOracles.ImageMod3 public import LanglandsOracles.Generation public import LanglandsOracles.ImageMod2 public import LanglandsOracles.PseudocharSearch public import LanglandsOracles.CertTypes public import LanglandsOracles.ImageModL public import LanglandsOracles.ModLImages
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
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_QForms(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_TraceFormula(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Matrix(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Carlitz(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Certificates(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Data(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_BrandtCertificates(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_LSeriesCertificates(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_FunctionFieldCertificates(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Excursion(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_CommSemiring(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Pseudocharacter(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ExcursionInstance(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_LevelNCertificates(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Isogeny(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ExcursionGL1(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ExcursionGL2(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ExcursionGL2Ring(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ImageMod3(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Generation(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ImageMod2(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_PseudocharSearch(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_CertTypes(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ImageModL(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ModLImages(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles(uint8_t builtin) {
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
res = initialize_LanglandsOracles_LanglandsOracles_QForms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_TraceFormula(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_Matrix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_Carlitz(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_Certificates(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_BrandtCertificates(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_LSeriesCertificates(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_FunctionFieldCertificates(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_Excursion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_CommSemiring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_Pseudocharacter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ExcursionInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_LevelNCertificates(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_Isogeny(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ExcursionGL1(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ExcursionGL2(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ExcursionGL2Ring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ImageMod3(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_Generation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ImageMod2(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_PseudocharSearch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_CertTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ImageModL(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ModLImages(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
