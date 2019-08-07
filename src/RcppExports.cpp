// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// har_agg
arma::mat har_agg(arma::vec RM, arma::vec periods, int iNperiods);
RcppExport SEXP _highfrequency_har_agg(SEXP RMSEXP, SEXP periodsSEXP, SEXP iNperiodsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type RM(RMSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type periods(periodsSEXP);
    Rcpp::traits::input_parameter< int >::type iNperiods(iNperiodsSEXP);
    rcpp_result_gen = Rcpp::wrap(har_agg(RM, periods, iNperiods));
    return rcpp_result_gen;
END_RCPP
}
// nsmaller
int nsmaller(IntegerVector times, IntegerVector lengths, int start, int end, int max);
RcppExport SEXP _highfrequency_nsmaller(SEXP timesSEXP, SEXP lengthsSEXP, SEXP startSEXP, SEXP endSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type times(timesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type lengths(lengthsSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type end(endSEXP);
    Rcpp::traits::input_parameter< int >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(nsmaller(times, lengths, start, end, max));
    return rcpp_result_gen;
END_RCPP
}
// KK
double KK(double x, int type);
RcppExport SEXP _highfrequency_KK(SEXP xSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(KK(x, type));
    return rcpp_result_gen;
END_RCPP
}
// kernelEstimator
double kernelEstimator(NumericVector a, NumericVector b, int na, int q, int adj, NumericVector type, NumericVector ab, NumericVector ab2);
RcppExport SEXP _highfrequency_kernelEstimator(SEXP aSEXP, SEXP bSEXP, SEXP naSEXP, SEXP qSEXP, SEXP adjSEXP, SEXP typeSEXP, SEXP abSEXP, SEXP ab2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< int >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type adj(adjSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type type(typeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ab(abSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ab2(ab2SEXP);
    rcpp_result_gen = Rcpp::wrap(kernelEstimator(a, b, na, q, adj, type, ab, ab2));
    return rcpp_result_gen;
END_RCPP
}
// rv
double rv(NumericVector a, NumericVector b, int na, int period, NumericVector tmpa, NumericVector tmpb, int tmpna);
RcppExport SEXP _highfrequency_rv(SEXP aSEXP, SEXP bSEXP, SEXP naSEXP, SEXP periodSEXP, SEXP tmpaSEXP, SEXP tmpbSEXP, SEXP tmpnaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< int >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type period(periodSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tmpa(tmpaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tmpb(tmpbSEXP);
    Rcpp::traits::input_parameter< int >::type tmpna(tmpnaSEXP);
    rcpp_result_gen = Rcpp::wrap(rv(a, b, na, period, tmpa, tmpb, tmpna));
    return rcpp_result_gen;
END_RCPP
}
// pcovcc
NumericVector pcovcc(NumericVector a, NumericVector ap, NumericVector b, NumericVector at, NumericVector atp, NumericVector bt, int na, int nap, int nb, int period);
RcppExport SEXP _highfrequency_pcovcc(SEXP aSEXP, SEXP apSEXP, SEXP bSEXP, SEXP atSEXP, SEXP atpSEXP, SEXP btSEXP, SEXP naSEXP, SEXP napSEXP, SEXP nbSEXP, SEXP periodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ap(apSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type at(atSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type atp(atpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bt(btSEXP);
    Rcpp::traits::input_parameter< int >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type nap(napSEXP);
    Rcpp::traits::input_parameter< int >::type nb(nbSEXP);
    Rcpp::traits::input_parameter< int >::type period(periodSEXP);
    rcpp_result_gen = Rcpp::wrap(pcovcc(a, ap, b, at, atp, bt, na, nap, nb, period));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_highfrequency_har_agg", (DL_FUNC) &_highfrequency_har_agg, 3},
    {"_highfrequency_nsmaller", (DL_FUNC) &_highfrequency_nsmaller, 5},
    {"_highfrequency_KK", (DL_FUNC) &_highfrequency_KK, 2},
    {"_highfrequency_kernelEstimator", (DL_FUNC) &_highfrequency_kernelEstimator, 8},
    {"_highfrequency_rv", (DL_FUNC) &_highfrequency_rv, 7},
    {"_highfrequency_pcovcc", (DL_FUNC) &_highfrequency_pcovcc, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_highfrequency(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
