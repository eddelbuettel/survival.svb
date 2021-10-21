// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "survival.svb_types.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// fit_partial
Rcpp::List fit_partial(vec T, vec delta, mat X, double lambda, double a_0, double b_0, vec m, vec s, vec g, int maxiter, double tol, bool verbose);
RcppExport SEXP _survival_svb_fit_partial(SEXP TSEXP, SEXP deltaSEXP, SEXP XSEXP, SEXP lambdaSEXP, SEXP a_0SEXP, SEXP b_0SEXP, SEXP mSEXP, SEXP sSEXP, SEXP gSEXP, SEXP maxiterSEXP, SEXP tolSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< vec >::type T(TSEXP);
    Rcpp::traits::input_parameter< vec >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type a_0(a_0SEXP);
    Rcpp::traits::input_parameter< double >::type b_0(b_0SEXP);
    Rcpp::traits::input_parameter< vec >::type m(mSEXP);
    Rcpp::traits::input_parameter< vec >::type s(sSEXP);
    Rcpp::traits::input_parameter< vec >::type g(gSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(fit_partial(T, delta, X, lambda, a_0, b_0, m, s, g, maxiter, tol, verbose));
    return rcpp_result_gen;
END_RCPP
}
// pm
double pm(double mu, double sigma, const vec& P, const vec& x_j, const std::vector<unsigned int>& delta_ord);
RcppExport SEXP _survival_svb_pm(SEXP muSEXP, SEXP sigmaSEXP, SEXP PSEXP, SEXP x_jSEXP, SEXP delta_ordSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const vec& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const vec& >::type x_j(x_jSEXP);
    Rcpp::traits::input_parameter< const std::vector<unsigned int>& >::type delta_ord(delta_ordSEXP);
    rcpp_result_gen = Rcpp::wrap(pm(mu, sigma, P, x_j, delta_ord));
    return rcpp_result_gen;
END_RCPP
}
// opt_par_mu
double opt_par_mu(double mu, double sigma, double lambda, const vec& P, const vec& x_j, const std::vector<unsigned int>& delta_ord);
RcppExport SEXP _survival_svb_opt_par_mu(SEXP muSEXP, SEXP sigmaSEXP, SEXP lambdaSEXP, SEXP PSEXP, SEXP x_jSEXP, SEXP delta_ordSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const vec& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const vec& >::type x_j(x_jSEXP);
    Rcpp::traits::input_parameter< const std::vector<unsigned int>& >::type delta_ord(delta_ordSEXP);
    rcpp_result_gen = Rcpp::wrap(opt_par_mu(mu, sigma, lambda, P, x_j, delta_ord));
    return rcpp_result_gen;
END_RCPP
}
// opt_par_sig
double opt_par_sig(double sigma, double mu, double lambda, const vec& P, const vec& x_j, const std::vector<unsigned int>& delta_ord);
RcppExport SEXP _survival_svb_opt_par_sig(SEXP sigmaSEXP, SEXP muSEXP, SEXP lambdaSEXP, SEXP PSEXP, SEXP x_jSEXP, SEXP delta_ordSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const vec& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const vec& >::type x_j(x_jSEXP);
    Rcpp::traits::input_parameter< const std::vector<unsigned int>& >::type delta_ord(delta_ordSEXP);
    rcpp_result_gen = Rcpp::wrap(opt_par_sig(sigma, mu, lambda, P, x_j, delta_ord));
    return rcpp_result_gen;
END_RCPP
}
// opt_par_gam
double opt_par_gam(double mu, double sigma, double lambda, double a_0, double b_0, const vec& P, const vec& x_j, const std::vector<unsigned int>& delta_ord);
RcppExport SEXP _survival_svb_opt_par_gam(SEXP muSEXP, SEXP sigmaSEXP, SEXP lambdaSEXP, SEXP a_0SEXP, SEXP b_0SEXP, SEXP PSEXP, SEXP x_jSEXP, SEXP delta_ordSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type a_0(a_0SEXP);
    Rcpp::traits::input_parameter< double >::type b_0(b_0SEXP);
    Rcpp::traits::input_parameter< const vec& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const vec& >::type x_j(x_jSEXP);
    Rcpp::traits::input_parameter< const std::vector<unsigned int>& >::type delta_ord(delta_ordSEXP);
    rcpp_result_gen = Rcpp::wrap(opt_par_gam(mu, sigma, lambda, a_0, b_0, P, x_j, delta_ord));
    return rcpp_result_gen;
END_RCPP
}
// normal_mgf
double normal_mgf(double x, double m, double s);
RcppExport SEXP _survival_svb_normal_mgf(SEXP xSEXP, SEXP mSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(normal_mgf(x, m, s));
    return rcpp_result_gen;
END_RCPP
}
// log_normal_mgf
vec log_normal_mgf(const vec& x, double m, double s);
RcppExport SEXP _survival_svb_log_normal_mgf(SEXP xSEXP, SEXP mSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(log_normal_mgf(x, m, s));
    return rcpp_result_gen;
END_RCPP
}
// sigmoid
double sigmoid(double x);
RcppExport SEXP _survival_svb_sigmoid(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(sigmoid(x));
    return rcpp_result_gen;
END_RCPP
}
// init_log_P
vec init_log_P(const mat& X, const vec& m, const vec& s, const vec& g);
RcppExport SEXP _survival_svb_init_log_P(SEXP XSEXP, SEXP mSEXP, SEXP sSEXP, SEXP gSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const vec& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const vec& >::type s(sSEXP);
    Rcpp::traits::input_parameter< const vec& >::type g(gSEXP);
    rcpp_result_gen = Rcpp::wrap(init_log_P(X, m, s, g));
    return rcpp_result_gen;
END_RCPP
}
// order_T
std::vector<unsigned int> order_T(const vec& T);
RcppExport SEXP _survival_svb_order_T(SEXP TSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const vec& >::type T(TSEXP);
    rcpp_result_gen = Rcpp::wrap(order_T(T));
    return rcpp_result_gen;
END_RCPP
}
// order_delta
std::vector<unsigned int> order_delta(const vec& T, const vec& delta);
RcppExport SEXP _survival_svb_order_delta(SEXP TSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const vec& >::type T(TSEXP);
    Rcpp::traits::input_parameter< const vec& >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(order_delta(T, delta));
    return rcpp_result_gen;
END_RCPP
}
// log_likelihood
double log_likelihood(const vec& T, const vec& delta, const mat& X, const vec& b);
RcppExport SEXP _survival_svb_log_likelihood(SEXP TSEXP, SEXP deltaSEXP, SEXP XSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const vec& >::type T(TSEXP);
    Rcpp::traits::input_parameter< const vec& >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< const mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const vec& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(log_likelihood(T, delta, X, b));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_survival_svb_fit_partial", (DL_FUNC) &_survival_svb_fit_partial, 12},
    {"_survival_svb_pm", (DL_FUNC) &_survival_svb_pm, 5},
    {"_survival_svb_opt_par_mu", (DL_FUNC) &_survival_svb_opt_par_mu, 6},
    {"_survival_svb_opt_par_sig", (DL_FUNC) &_survival_svb_opt_par_sig, 6},
    {"_survival_svb_opt_par_gam", (DL_FUNC) &_survival_svb_opt_par_gam, 8},
    {"_survival_svb_normal_mgf", (DL_FUNC) &_survival_svb_normal_mgf, 3},
    {"_survival_svb_log_normal_mgf", (DL_FUNC) &_survival_svb_log_normal_mgf, 3},
    {"_survival_svb_sigmoid", (DL_FUNC) &_survival_svb_sigmoid, 1},
    {"_survival_svb_init_log_P", (DL_FUNC) &_survival_svb_init_log_P, 4},
    {"_survival_svb_order_T", (DL_FUNC) &_survival_svb_order_T, 1},
    {"_survival_svb_order_delta", (DL_FUNC) &_survival_svb_order_delta, 2},
    {"_survival_svb_log_likelihood", (DL_FUNC) &_survival_svb_log_likelihood, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_survival_svb(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
