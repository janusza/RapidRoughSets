// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// compute_indiscernibility
List compute_indiscernibility(List input, CharacterVector attr_val, CharacterVector unique_attr_val);
RcppExport SEXP RapidRoughSets_compute_indiscernibility(SEXP inputSEXP, SEXP attr_valSEXP, SEXP unique_attr_valSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type input(inputSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type attr_val(attr_valSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type unique_attr_val(unique_attr_valSEXP);
    __result = Rcpp::wrap(compute_indiscernibility(input, attr_val, unique_attr_val));
    return __result;
END_RCPP
}
// compute_chaos
List compute_chaos(List input, CharacterVector dec_val, CharacterVector unique_dec_val);
RcppExport SEXP RapidRoughSets_compute_chaos(SEXP inputSEXP, SEXP dec_valSEXP, SEXP unique_dec_valSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type input(inputSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type dec_val(dec_valSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type unique_dec_val(unique_dec_valSEXP);
    __result = Rcpp::wrap(compute_chaos(input, dec_val, unique_dec_val));
    return __result;
END_RCPP
}
