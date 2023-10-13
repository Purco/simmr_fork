// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// proddiag
double proddiag(NumericMatrix x);
RcppExport SEXP _simmr_proddiag(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(proddiag(x));
    return rcpp_result_gen;
END_RCPP
}
// matmult
NumericMatrix matmult(NumericMatrix x, NumericMatrix y);
RcppExport SEXP _simmr_matmult(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(matmult(x, y));
    return rcpp_result_gen;
END_RCPP
}
// crossprod
NumericMatrix crossprod(NumericMatrix X);
RcppExport SEXP _simmr_crossprod(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(crossprod(X));
    return rcpp_result_gen;
END_RCPP
}
// rMVNormCpp
NumericMatrix rMVNormCpp(int n, arma::vec Mean, arma::mat Var);
RcppExport SEXP _simmr_rMVNormCpp(SEXP nSEXP, SEXP MeanSEXP, SEXP VarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Mean(MeanSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Var(VarSEXP);
    rcpp_result_gen = Rcpp::wrap(rMVNormCpp(n, Mean, Var));
    return rcpp_result_gen;
END_RCPP
}
// solvearma
NumericMatrix solvearma(const NumericMatrix X);
RcppExport SEXP _simmr_solvearma(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(solvearma(X));
    return rcpp_result_gen;
END_RCPP
}
// sim_thetacpp
NumericMatrix sim_thetacpp(int S, NumericVector lambda, int n_sources, int n_tracers, bool solo);
RcppExport SEXP _simmr_sim_thetacpp(SEXP SSEXP, SEXP lambdaSEXP, SEXP n_sourcesSEXP, SEXP n_tracersSEXP, SEXP soloSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type S(SSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type n_sources(n_sourcesSEXP);
    Rcpp::traits::input_parameter< int >::type n_tracers(n_tracersSEXP);
    Rcpp::traits::input_parameter< bool >::type solo(soloSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_thetacpp(S, lambda, n_sources, n_tracers, solo));
    return rcpp_result_gen;
END_RCPP
}
// hfn
NumericVector hfn(NumericVector theta, int n_sources);
RcppExport SEXP _simmr_hfn(SEXP thetaSEXP, SEXP n_sourcesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type n_sources(n_sourcesSEXP);
    rcpp_result_gen = Rcpp::wrap(hfn(theta, n_sources));
    return rcpp_result_gen;
END_RCPP
}
// hcpp
double hcpp(int n_sources, int n_isotopes, double beta_prior, NumericMatrix concentrationmeans, NumericMatrix sourcemeans, NumericMatrix correctionmeans, NumericMatrix corrsds, NumericMatrix sourcesds, NumericVector theta, NumericMatrix y);
RcppExport SEXP _simmr_hcpp(SEXP n_sourcesSEXP, SEXP n_isotopesSEXP, SEXP beta_priorSEXP, SEXP concentrationmeansSEXP, SEXP sourcemeansSEXP, SEXP correctionmeansSEXP, SEXP corrsdsSEXP, SEXP sourcesdsSEXP, SEXP thetaSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_sources(n_sourcesSEXP);
    Rcpp::traits::input_parameter< int >::type n_isotopes(n_isotopesSEXP);
    Rcpp::traits::input_parameter< double >::type beta_prior(beta_priorSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type concentrationmeans(concentrationmeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sourcemeans(sourcemeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type correctionmeans(correctionmeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type corrsds(corrsdsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sourcesds(sourcesdsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(hcpp(n_sources, n_isotopes, beta_prior, concentrationmeans, sourcemeans, correctionmeans, corrsds, sourcesds, theta, y));
    return rcpp_result_gen;
END_RCPP
}
// log_q_cpp
double log_q_cpp(NumericVector theta, NumericVector lambda, int n_sources, int n_tracers);
RcppExport SEXP _simmr_log_q_cpp(SEXP thetaSEXP, SEXP lambdaSEXP, SEXP n_sourcesSEXP, SEXP n_tracersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type n_sources(n_sourcesSEXP);
    Rcpp::traits::input_parameter< int >::type n_tracers(n_tracersSEXP);
    rcpp_result_gen = Rcpp::wrap(log_q_cpp(theta, lambda, n_sources, n_tracers));
    return rcpp_result_gen;
END_RCPP
}
// delta_lqltcpp
NumericVector delta_lqltcpp(NumericVector lambda, NumericVector theta, double eps, int n_sources, int n_tracers);
RcppExport SEXP _simmr_delta_lqltcpp(SEXP lambdaSEXP, SEXP thetaSEXP, SEXP epsSEXP, SEXP n_sourcesSEXP, SEXP n_tracersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type n_sources(n_sourcesSEXP);
    Rcpp::traits::input_parameter< int >::type n_tracers(n_tracersSEXP);
    rcpp_result_gen = Rcpp::wrap(delta_lqltcpp(lambda, theta, eps, n_sources, n_tracers));
    return rcpp_result_gen;
END_RCPP
}
// h_lambdacpp
double h_lambdacpp(int n_sources, int n_isotopes, double beta_prior, NumericMatrix concentrationmeans, NumericMatrix sourcemeans, NumericMatrix correctionmeans, NumericMatrix corrsds, NumericMatrix sourcesds, NumericVector theta, NumericMatrix y, NumericVector lambda);
RcppExport SEXP _simmr_h_lambdacpp(SEXP n_sourcesSEXP, SEXP n_isotopesSEXP, SEXP beta_priorSEXP, SEXP concentrationmeansSEXP, SEXP sourcemeansSEXP, SEXP correctionmeansSEXP, SEXP corrsdsSEXP, SEXP sourcesdsSEXP, SEXP thetaSEXP, SEXP ySEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_sources(n_sourcesSEXP);
    Rcpp::traits::input_parameter< int >::type n_isotopes(n_isotopesSEXP);
    Rcpp::traits::input_parameter< double >::type beta_prior(beta_priorSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type concentrationmeans(concentrationmeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sourcemeans(sourcemeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type correctionmeans(correctionmeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type corrsds(corrsdsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sourcesds(sourcesdsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(h_lambdacpp(n_sources, n_isotopes, beta_prior, concentrationmeans, sourcemeans, correctionmeans, corrsds, sourcesds, theta, y, lambda));
    return rcpp_result_gen;
END_RCPP
}
// cov_mat_cpp
NumericMatrix cov_mat_cpp(NumericMatrix x, NumericMatrix y);
RcppExport SEXP _simmr_cov_mat_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cov_mat_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// nabla_LB_cpp
NumericVector nabla_LB_cpp(NumericVector lambda, NumericMatrix theta, int n_sources, int n_tracers, double beta_prior, NumericMatrix concentrationmeans, NumericMatrix sourcemeans, NumericMatrix correctionmeans, NumericMatrix corrsds, NumericMatrix sourcesds, NumericMatrix y, NumericVector c);
RcppExport SEXP _simmr_nabla_LB_cpp(SEXP lambdaSEXP, SEXP thetaSEXP, SEXP n_sourcesSEXP, SEXP n_tracersSEXP, SEXP beta_priorSEXP, SEXP concentrationmeansSEXP, SEXP sourcemeansSEXP, SEXP correctionmeansSEXP, SEXP corrsdsSEXP, SEXP sourcesdsSEXP, SEXP ySEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type n_sources(n_sourcesSEXP);
    Rcpp::traits::input_parameter< int >::type n_tracers(n_tracersSEXP);
    Rcpp::traits::input_parameter< double >::type beta_prior(beta_priorSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type concentrationmeans(concentrationmeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sourcemeans(sourcemeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type correctionmeans(correctionmeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type corrsds(corrsdsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sourcesds(sourcesdsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(nabla_LB_cpp(lambda, theta, n_sources, n_tracers, beta_prior, concentrationmeans, sourcemeans, correctionmeans, corrsds, sourcesds, y, c));
    return rcpp_result_gen;
END_RCPP
}
// control_var_cpp
NumericVector control_var_cpp(NumericVector lambda, NumericMatrix theta, int n_sources, int n_tracers, double beta_prior, NumericMatrix concentrationmeans, NumericMatrix sourcemeans, NumericMatrix correctionmeans, NumericMatrix corrsds, NumericMatrix sourcesds, NumericMatrix y);
RcppExport SEXP _simmr_control_var_cpp(SEXP lambdaSEXP, SEXP thetaSEXP, SEXP n_sourcesSEXP, SEXP n_tracersSEXP, SEXP beta_priorSEXP, SEXP concentrationmeansSEXP, SEXP sourcemeansSEXP, SEXP correctionmeansSEXP, SEXP corrsdsSEXP, SEXP sourcesdsSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type n_sources(n_sourcesSEXP);
    Rcpp::traits::input_parameter< int >::type n_tracers(n_tracersSEXP);
    Rcpp::traits::input_parameter< double >::type beta_prior(beta_priorSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type concentrationmeans(concentrationmeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sourcemeans(sourcemeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type correctionmeans(correctionmeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type corrsds(corrsdsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sourcesds(sourcesdsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(control_var_cpp(lambda, theta, n_sources, n_tracers, beta_prior, concentrationmeans, sourcemeans, correctionmeans, corrsds, sourcesds, y));
    return rcpp_result_gen;
END_RCPP
}
// LB_lambda_cpp
double LB_lambda_cpp(NumericMatrix theta, NumericVector lambda, NumericVector p, int n_sources, int n_isotopes, double beta_prior, NumericMatrix concentrationmeans, NumericMatrix sourcemeans, NumericMatrix correctionmeans, NumericMatrix corrsds, NumericMatrix sourcesds, NumericMatrix y);
RcppExport SEXP _simmr_LB_lambda_cpp(SEXP thetaSEXP, SEXP lambdaSEXP, SEXP pSEXP, SEXP n_sourcesSEXP, SEXP n_isotopesSEXP, SEXP beta_priorSEXP, SEXP concentrationmeansSEXP, SEXP sourcemeansSEXP, SEXP correctionmeansSEXP, SEXP corrsdsSEXP, SEXP sourcesdsSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type n_sources(n_sourcesSEXP);
    Rcpp::traits::input_parameter< int >::type n_isotopes(n_isotopesSEXP);
    Rcpp::traits::input_parameter< double >::type beta_prior(beta_priorSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type concentrationmeans(concentrationmeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sourcemeans(sourcemeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type correctionmeans(correctionmeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type corrsds(corrsdsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sourcesds(sourcesdsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(LB_lambda_cpp(theta, lambda, p, n_sources, n_isotopes, beta_prior, concentrationmeans, sourcemeans, correctionmeans, corrsds, sourcesds, y));
    return rcpp_result_gen;
END_RCPP
}
// run_VB_cpp
NumericVector run_VB_cpp(NumericVector lambdastart, int n_sources, int n_tracers, double beta_prior, NumericMatrix concentrationmeans, NumericMatrix sourcemeans, NumericMatrix correctionmeans, NumericMatrix corrsds, NumericMatrix sourcesds, NumericMatrix y, int S, int P, double beta_1, double beta_2, int tau, double eps_0, int t_W, bool solo);
RcppExport SEXP _simmr_run_VB_cpp(SEXP lambdastartSEXP, SEXP n_sourcesSEXP, SEXP n_tracersSEXP, SEXP beta_priorSEXP, SEXP concentrationmeansSEXP, SEXP sourcemeansSEXP, SEXP correctionmeansSEXP, SEXP corrsdsSEXP, SEXP sourcesdsSEXP, SEXP ySEXP, SEXP SSEXP, SEXP PSEXP, SEXP beta_1SEXP, SEXP beta_2SEXP, SEXP tauSEXP, SEXP eps_0SEXP, SEXP t_WSEXP, SEXP soloSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lambdastart(lambdastartSEXP);
    Rcpp::traits::input_parameter< int >::type n_sources(n_sourcesSEXP);
    Rcpp::traits::input_parameter< int >::type n_tracers(n_tracersSEXP);
    Rcpp::traits::input_parameter< double >::type beta_prior(beta_priorSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type concentrationmeans(concentrationmeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sourcemeans(sourcemeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type correctionmeans(correctionmeansSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type corrsds(corrsdsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sourcesds(sourcesdsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type S(SSEXP);
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< double >::type beta_1(beta_1SEXP);
    Rcpp::traits::input_parameter< double >::type beta_2(beta_2SEXP);
    Rcpp::traits::input_parameter< int >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type eps_0(eps_0SEXP);
    Rcpp::traits::input_parameter< int >::type t_W(t_WSEXP);
    Rcpp::traits::input_parameter< bool >::type solo(soloSEXP);
    rcpp_result_gen = Rcpp::wrap(run_VB_cpp(lambdastart, n_sources, n_tracers, beta_prior, concentrationmeans, sourcemeans, correctionmeans, corrsds, sourcesds, y, S, P, beta_1, beta_2, tau, eps_0, t_W, solo));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_simmr_proddiag", (DL_FUNC) &_simmr_proddiag, 1},
    {"_simmr_matmult", (DL_FUNC) &_simmr_matmult, 2},
    {"_simmr_crossprod", (DL_FUNC) &_simmr_crossprod, 1},
    {"_simmr_rMVNormCpp", (DL_FUNC) &_simmr_rMVNormCpp, 3},
    {"_simmr_solvearma", (DL_FUNC) &_simmr_solvearma, 1},
    {"_simmr_sim_thetacpp", (DL_FUNC) &_simmr_sim_thetacpp, 5},
    {"_simmr_hfn", (DL_FUNC) &_simmr_hfn, 2},
    {"_simmr_hcpp", (DL_FUNC) &_simmr_hcpp, 10},
    {"_simmr_log_q_cpp", (DL_FUNC) &_simmr_log_q_cpp, 4},
    {"_simmr_delta_lqltcpp", (DL_FUNC) &_simmr_delta_lqltcpp, 5},
    {"_simmr_h_lambdacpp", (DL_FUNC) &_simmr_h_lambdacpp, 11},
    {"_simmr_cov_mat_cpp", (DL_FUNC) &_simmr_cov_mat_cpp, 2},
    {"_simmr_nabla_LB_cpp", (DL_FUNC) &_simmr_nabla_LB_cpp, 12},
    {"_simmr_control_var_cpp", (DL_FUNC) &_simmr_control_var_cpp, 11},
    {"_simmr_LB_lambda_cpp", (DL_FUNC) &_simmr_LB_lambda_cpp, 12},
    {"_simmr_run_VB_cpp", (DL_FUNC) &_simmr_run_VB_cpp, 18},
    {NULL, NULL, 0}
};

RcppExport void R_init_simmr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
