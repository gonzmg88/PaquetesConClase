// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// GradientDescentSumaCuadrados
Rcpp::NumericVector GradientDescentSumaCuadrados(SEXP A, SEXP b);
RcppExport SEXP GradDesc_GradientDescentSumaCuadrados(SEXP ASEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type A(ASEXP);
    Rcpp::traits::input_parameter< SEXP >::type b(bSEXP);
    __result = Rcpp::wrap(GradientDescentSumaCuadrados(A, b));
    return __result;
END_RCPP
}
