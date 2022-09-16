// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// lls
Rcpp::NumericVector lls(arma::sp_mat& mat, arma::vec& s, arma::vec& x, arma::vec& bg, int& size_dnb);
RcppExport SEXP _MLEcell_lls(SEXP matSEXP, SEXP sSEXP, SEXP xSEXP, SEXP bgSEXP, SEXP size_dnbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type s(sSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< int& >::type size_dnb(size_dnbSEXP);
    rcpp_result_gen = Rcpp::wrap(lls(mat, s, x, bg, size_dnb));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MLEcell_lls", (DL_FUNC) &_MLEcell_lls, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_MLEcell(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
