// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/bigstatsr.h"
#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// COPY_cdfit_gaussian_hsr
List COPY_cdfit_gaussian_hsr(XPtr<BigMatrix> xpMat, const NumericVector& y, const IntegerVector& row_idx, const NumericMatrix& covar, NumericVector& lambda, int L, int lam_scale, double lambda_min, double alpha, bool user, double eps, int max_iter, const NumericVector& m, int dfmax, bool verbose);
RcppExport SEXP bigstatsr_COPY_cdfit_gaussian_hsr(SEXP xpMatSEXP, SEXP ySEXP, SEXP row_idxSEXP, SEXP covarSEXP, SEXP lambdaSEXP, SEXP LSEXP, SEXP lam_scaleSEXP, SEXP lambda_minSEXP, SEXP alphaSEXP, SEXP userSEXP, SEXP epsSEXP, SEXP max_iterSEXP, SEXP mSEXP, SEXP dfmaxSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<BigMatrix> >::type xpMat(xpMatSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type row_idx(row_idxSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covar(covarSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type lam_scale(lam_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_min(lambda_minSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type user(userSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type dfmax(dfmaxSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(COPY_cdfit_gaussian_hsr(xpMat, y, row_idx, covar, lambda, L, lam_scale, lambda_min, alpha, user, eps, max_iter, m, dfmax, verbose));
    return rcpp_result_gen;
END_RCPP
}
// COPY_cdfit_binomial_hsr
List COPY_cdfit_binomial_hsr(XPtr<BigMatrix> xpMat, const NumericVector& y, const IntegerVector& row_idx, const NumericMatrix& covar, NumericVector& lambda, int L, int lam_scale, double lambda_min, double alpha, bool user, double eps, int max_iter, const NumericVector& m, int dfmax, bool warn, bool verbose);
RcppExport SEXP bigstatsr_COPY_cdfit_binomial_hsr(SEXP xpMatSEXP, SEXP ySEXP, SEXP row_idxSEXP, SEXP covarSEXP, SEXP lambdaSEXP, SEXP LSEXP, SEXP lam_scaleSEXP, SEXP lambda_minSEXP, SEXP alphaSEXP, SEXP userSEXP, SEXP epsSEXP, SEXP max_iterSEXP, SEXP mSEXP, SEXP dfmaxSEXP, SEXP warnSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<BigMatrix> >::type xpMat(xpMatSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type row_idx(row_idxSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covar(covarSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type lam_scale(lam_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_min(lambda_minSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type user(userSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type dfmax(dfmaxSEXP);
    Rcpp::traits::input_parameter< bool >::type warn(warnSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(COPY_cdfit_binomial_hsr(xpMat, y, row_idx, covar, lambda, L, lam_scale, lambda_min, alpha, user, eps, max_iter, m, dfmax, warn, verbose));
    return rcpp_result_gen;
END_RCPP
}
// bigcolvars
ListOf<NumericVector> bigcolvars(XPtr<BigMatrix> xpMat, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP bigstatsr_bigcolvars(SEXP xpMatSEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<BigMatrix> >::type xpMat(xpMatSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    rcpp_result_gen = Rcpp::wrap(bigcolvars(xpMat, rowInd, colInd));
    return rcpp_result_gen;
END_RCPP
}
// linRegPcadapt
NumericMatrix linRegPcadapt(XPtr<BigMatrix> xpMat, arma::mat& U, const IntegerVector& rowInd, const NumericVector& center, const NumericVector& scale);
RcppExport SEXP bigstatsr_linRegPcadapt(SEXP xpMatSEXP, SEXP USEXP, SEXP rowIndSEXP, SEXP centerSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<BigMatrix> >::type xpMat(xpMatSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(linRegPcadapt(xpMat, U, rowInd, center, scale));
    return rcpp_result_gen;
END_RCPP
}
// pMatVec4
NumericVector pMatVec4(XPtr<BigMatrix> xpMat, const NumericVector& x, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP bigstatsr_pMatVec4(SEXP xpMatSEXP, SEXP xSEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<BigMatrix> >::type xpMat(xpMatSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    rcpp_result_gen = Rcpp::wrap(pMatVec4(xpMat, x, rowInd, colInd));
    return rcpp_result_gen;
END_RCPP
}
// cpMatVec4
NumericVector cpMatVec4(XPtr<BigMatrix> xpMat, const NumericVector& x, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP bigstatsr_cpMatVec4(SEXP xpMatSEXP, SEXP xSEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<BigMatrix> >::type xpMat(xpMatSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    rcpp_result_gen = Rcpp::wrap(cpMatVec4(xpMat, x, rowInd, colInd));
    return rcpp_result_gen;
END_RCPP
}
// COPY_sparse_svm
List COPY_sparse_svm(XPtr<BigMatrix> xpMat, const NumericVector& y, const IntegerVector& row_idx, const NumericMatrix& covar, NumericVector& lambda, const NumericVector& pf, double gamma, double alpha, double thresh, double lambda_min, int scrflag, int dfmax, int max_iter, bool user, bool message);
RcppExport SEXP bigstatsr_COPY_sparse_svm(SEXP xpMatSEXP, SEXP ySEXP, SEXP row_idxSEXP, SEXP covarSEXP, SEXP lambdaSEXP, SEXP pfSEXP, SEXP gammaSEXP, SEXP alphaSEXP, SEXP threshSEXP, SEXP lambda_minSEXP, SEXP scrflagSEXP, SEXP dfmaxSEXP, SEXP max_iterSEXP, SEXP userSEXP, SEXP messageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<BigMatrix> >::type xpMat(xpMatSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type row_idx(row_idxSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covar(covarSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pf(pfSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type thresh(threshSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_min(lambda_minSEXP);
    Rcpp::traits::input_parameter< int >::type scrflag(scrflagSEXP);
    Rcpp::traits::input_parameter< int >::type dfmax(dfmaxSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type user(userSEXP);
    Rcpp::traits::input_parameter< bool >::type message(messageSEXP);
    rcpp_result_gen = Rcpp::wrap(COPY_sparse_svm(xpMat, y, row_idx, covar, lambda, pf, gamma, alpha, thresh, lambda_min, scrflag, dfmax, max_iter, user, message));
    return rcpp_result_gen;
END_RCPP
}
// transpose3
void transpose3(SEXP pBigMat, SEXP pBigMat2);
RcppExport SEXP bigstatsr_transpose3(SEXP pBigMatSEXP, SEXP pBigMat2SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pBigMat2(pBigMat2SEXP);
    transpose3(pBigMat, pBigMat2);
    return R_NilValue;
END_RCPP
}
// univLinReg5
List univLinReg5(XPtr<BigMatrix> xpMat, const arma::mat& covar_U, const arma::vec& y, const IntegerVector& rowInd);
RcppExport SEXP bigstatsr_univLinReg5(SEXP xpMatSEXP, SEXP covar_USEXP, SEXP ySEXP, SEXP rowIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<BigMatrix> >::type xpMat(xpMatSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type covar_U(covar_USEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    rcpp_result_gen = Rcpp::wrap(univLinReg5(xpMat, covar_U, y, rowInd));
    return rcpp_result_gen;
END_RCPP
}
// IRLS
List IRLS(XPtr<BigMatrix> xpMat, arma::mat& covar, const arma::vec& y, const arma::vec& z0, const arma::vec& w0, const IntegerVector& rowInd, double tol, int maxiter);
RcppExport SEXP bigstatsr_IRLS(SEXP xpMatSEXP, SEXP covarSEXP, SEXP ySEXP, SEXP z0SEXP, SEXP w0SEXP, SEXP rowIndSEXP, SEXP tolSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<BigMatrix> >::type xpMat(xpMatSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type covar(covarSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z0(z0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w0(w0SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(IRLS(xpMat, covar, y, z0, w0, rowInd, tol, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// multEigen
Eigen::MatrixXd multEigen(const Eigen::Map<Eigen::MatrixXd> X, const Eigen::Map<Eigen::MatrixXd> Y);
RcppExport SEXP bigstatsr_multEigen(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(multEigen(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// crossprodEigen5
Eigen::MatrixXd crossprodEigen5(const Eigen::Map<Eigen::MatrixXd> X, const Eigen::Map<Eigen::MatrixXd> Y);
RcppExport SEXP bigstatsr_crossprodEigen5(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(crossprodEigen5(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// scaling
NumericMatrix& scaling(NumericMatrix& source, const NumericVector& mean, const NumericVector& sd);
RcppExport SEXP bigstatsr_scaling(SEXP sourceSEXP, SEXP meanSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type source(sourceSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(scaling(source, mean, sd));
    return rcpp_result_gen;
END_RCPP
}
// complete2
NumericMatrix& complete2(NumericMatrix& mat);
RcppExport SEXP bigstatsr_complete2(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(complete2(mat));
    return rcpp_result_gen;
END_RCPP
}
// incrSup2
NumericMatrix& incrSup2(NumericMatrix& mat, const NumericMatrix& source);
RcppExport SEXP bigstatsr_incrSup2(SEXP matSEXP, SEXP sourceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type source(sourceSEXP);
    rcpp_result_gen = Rcpp::wrap(incrSup2(mat, source));
    return rcpp_result_gen;
END_RCPP
}
// tcrossprodEigen3
void tcrossprodEigen3(Eigen::Map<Eigen::MatrixXd> res, const Eigen::Map<Eigen::MatrixXd> bM);
RcppExport SEXP bigstatsr_tcrossprodEigen3(SEXP resSEXP, SEXP bMSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type res(resSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type bM(bMSEXP);
    tcrossprodEigen3(res, bM);
    return R_NilValue;
END_RCPP
}
// incrMat
NumericMatrix& incrMat(NumericMatrix& dest, const NumericMatrix& source);
RcppExport SEXP bigstatsr_incrMat(SEXP destSEXP, SEXP sourceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type dest(destSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type source(sourceSEXP);
    rcpp_result_gen = Rcpp::wrap(incrMat(dest, source));
    return rcpp_result_gen;
END_RCPP
}
