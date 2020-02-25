// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// auc_sorted
double auc_sorted(const NumericVector& x, const LogicalVector& y);
RcppExport SEXP _bigstatsr_auc_sorted(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const LogicalVector& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(auc_sorted(x, y));
    return rcpp_result_gen;
END_RCPP
}
// auc_sorted_tab
double auc_sorted_tab(const NumericVector& x, const LogicalVector& y, const IntegerVector& w);
RcppExport SEXP _bigstatsr_auc_sorted_tab(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const LogicalVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(auc_sorted_tab(x, y, w));
    return rcpp_result_gen;
END_RCPP
}
// boot_auc_sorted_tab
NumericVector boot_auc_sorted_tab(const NumericVector& x, const LogicalVector& y, int n_boot);
RcppExport SEXP _bigstatsr_boot_auc_sorted_tab(SEXP xSEXP, SEXP ySEXP, SEXP n_bootSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const LogicalVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n_boot(n_bootSEXP);
    rcpp_result_gen = Rcpp::wrap(boot_auc_sorted_tab(x, y, n_boot));
    return rcpp_result_gen;
END_RCPP
}
// increment_scaled_tcrossprod
void increment_scaled_tcrossprod(Environment K, arma::mat& part_temp, Environment BM, const IntegerVector& rowInd, const IntegerVector& colInd, const NumericVector& center, const NumericVector& scale);
RcppExport SEXP _bigstatsr_increment_scaled_tcrossprod(SEXP KSEXP, SEXP part_tempSEXP, SEXP BMSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP centerSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type part_temp(part_tempSEXP);
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type scale(scaleSEXP);
    increment_scaled_tcrossprod(K, part_temp, BM, rowInd, colInd, center, scale);
    return R_NilValue;
END_RCPP
}
// prod_FBM_block_mat
arma::mat prod_FBM_block_mat(Environment BM, const arma::mat& Y, const IntegerVector& rowInd, const IntegerVector& colInd, int max_size);
RcppExport SEXP _bigstatsr_prod_FBM_block_mat(SEXP BMSEXP, SEXP YSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP max_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< int >::type max_size(max_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(prod_FBM_block_mat(BM, Y, rowInd, colInd, max_size));
    return rcpp_result_gen;
END_RCPP
}
// cprod_FBM_block_mat
arma::mat cprod_FBM_block_mat(Environment BM, const arma::mat& Y, const IntegerVector& rowInd, const IntegerVector& colInd, int max_size);
RcppExport SEXP _bigstatsr_cprod_FBM_block_mat(SEXP BMSEXP, SEXP YSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP max_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< int >::type max_size(max_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(cprod_FBM_block_mat(BM, Y, rowInd, colInd, max_size));
    return rcpp_result_gen;
END_RCPP
}
// prod_FBM_mat
arma::mat prod_FBM_mat(Rcpp::Environment BM, const arma::mat& A);
RcppExport SEXP _bigstatsr_prod_FBM_mat(SEXP BMSEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(prod_FBM_mat(BM, A));
    return rcpp_result_gen;
END_RCPP
}
// prod_mat_FBM
arma::mat prod_mat_FBM(const arma::mat& A, Rcpp::Environment BM);
RcppExport SEXP _bigstatsr_prod_mat_FBM(SEXP ASEXP, SEXP BMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< Rcpp::Environment >::type BM(BMSEXP);
    rcpp_result_gen = Rcpp::wrap(prod_mat_FBM(A, BM));
    return rcpp_result_gen;
END_RCPP
}
// crossprod_FBM
arma::mat crossprod_FBM(Rcpp::Environment BM);
RcppExport SEXP _bigstatsr_crossprod_FBM(SEXP BMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type BM(BMSEXP);
    rcpp_result_gen = Rcpp::wrap(crossprod_FBM(BM));
    return rcpp_result_gen;
END_RCPP
}
// crossprod_FBM_mat
arma::mat crossprod_FBM_mat(Rcpp::Environment BM, const arma::mat& A);
RcppExport SEXP _bigstatsr_crossprod_FBM_mat(SEXP BMSEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(crossprod_FBM_mat(BM, A));
    return rcpp_result_gen;
END_RCPP
}
// crossprod_mat_FBM
arma::mat crossprod_mat_FBM(const arma::mat& A, Rcpp::Environment BM);
RcppExport SEXP _bigstatsr_crossprod_mat_FBM(SEXP ASEXP, SEXP BMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< Rcpp::Environment >::type BM(BMSEXP);
    rcpp_result_gen = Rcpp::wrap(crossprod_mat_FBM(A, BM));
    return rcpp_result_gen;
END_RCPP
}
// tcrossprod_FBM
arma::mat tcrossprod_FBM(Rcpp::Environment BM);
RcppExport SEXP _bigstatsr_tcrossprod_FBM(SEXP BMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type BM(BMSEXP);
    rcpp_result_gen = Rcpp::wrap(tcrossprod_FBM(BM));
    return rcpp_result_gen;
END_RCPP
}
// tcrossprod_FBM_mat
arma::mat tcrossprod_FBM_mat(Rcpp::Environment BM, const arma::mat& A);
RcppExport SEXP _bigstatsr_tcrossprod_FBM_mat(SEXP BMSEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(tcrossprod_FBM_mat(BM, A));
    return rcpp_result_gen;
END_RCPP
}
// tcrossprod_mat_FBM
arma::mat tcrossprod_mat_FBM(const arma::mat& A, Rcpp::Environment BM);
RcppExport SEXP _bigstatsr_tcrossprod_mat_FBM(SEXP ASEXP, SEXP BMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< Rcpp::Environment >::type BM(BMSEXP);
    rcpp_result_gen = Rcpp::wrap(tcrossprod_mat_FBM(A, BM));
    return rcpp_result_gen;
END_RCPP
}
// COPY_cdfit_gaussian_hsr
List COPY_cdfit_gaussian_hsr(Environment BM, const NumericVector& y, const IntegerVector& row_idx, const IntegerVector& col_idx, const NumericMatrix& covar, const NumericVector& lambda, const NumericVector& center, const NumericVector& scale, const NumericVector& pf, NumericVector& resid, double alpha, double eps, int max_iter, int dfmax, const IntegerVector& row_idx_val, const NumericMatrix& covar_val, const NumericVector& y_val, int n_abort, int nlam_min);
RcppExport SEXP _bigstatsr_COPY_cdfit_gaussian_hsr(SEXP BMSEXP, SEXP ySEXP, SEXP row_idxSEXP, SEXP col_idxSEXP, SEXP covarSEXP, SEXP lambdaSEXP, SEXP centerSEXP, SEXP scaleSEXP, SEXP pfSEXP, SEXP residSEXP, SEXP alphaSEXP, SEXP epsSEXP, SEXP max_iterSEXP, SEXP dfmaxSEXP, SEXP row_idx_valSEXP, SEXP covar_valSEXP, SEXP y_valSEXP, SEXP n_abortSEXP, SEXP nlam_minSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type row_idx(row_idxSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type col_idx(col_idxSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covar(covarSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pf(pfSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type resid(residSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type dfmax(dfmaxSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type row_idx_val(row_idx_valSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covar_val(covar_valSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y_val(y_valSEXP);
    Rcpp::traits::input_parameter< int >::type n_abort(n_abortSEXP);
    Rcpp::traits::input_parameter< int >::type nlam_min(nlam_minSEXP);
    rcpp_result_gen = Rcpp::wrap(COPY_cdfit_gaussian_hsr(BM, y, row_idx, col_idx, covar, lambda, center, scale, pf, resid, alpha, eps, max_iter, dfmax, row_idx_val, covar_val, y_val, n_abort, nlam_min));
    return rcpp_result_gen;
END_RCPP
}
// COPY_cdfit_binomial_hsr
List COPY_cdfit_binomial_hsr(Environment BM, const NumericVector& y, const NumericVector& base, const IntegerVector& row_idx, const IntegerVector& col_idx, const NumericMatrix& covar, const NumericVector& lambda, const NumericVector& center, const NumericVector& scale, const NumericVector& pf, NumericVector& resid, double alpha, double eps, int max_iter, int dfmax, const IntegerVector& row_idx_val, const NumericMatrix& covar_val, const NumericVector& y_val, const NumericVector& base_val, int n_abort, int nlam_min);
RcppExport SEXP _bigstatsr_COPY_cdfit_binomial_hsr(SEXP BMSEXP, SEXP ySEXP, SEXP baseSEXP, SEXP row_idxSEXP, SEXP col_idxSEXP, SEXP covarSEXP, SEXP lambdaSEXP, SEXP centerSEXP, SEXP scaleSEXP, SEXP pfSEXP, SEXP residSEXP, SEXP alphaSEXP, SEXP epsSEXP, SEXP max_iterSEXP, SEXP dfmaxSEXP, SEXP row_idx_valSEXP, SEXP covar_valSEXP, SEXP y_valSEXP, SEXP base_valSEXP, SEXP n_abortSEXP, SEXP nlam_minSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type base(baseSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type row_idx(row_idxSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type col_idx(col_idxSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covar(covarSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pf(pfSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type resid(residSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type dfmax(dfmaxSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type row_idx_val(row_idx_valSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covar_val(covar_valSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y_val(y_valSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type base_val(base_valSEXP);
    Rcpp::traits::input_parameter< int >::type n_abort(n_abortSEXP);
    Rcpp::traits::input_parameter< int >::type nlam_min(nlam_minSEXP);
    rcpp_result_gen = Rcpp::wrap(COPY_cdfit_binomial_hsr(BM, y, base, row_idx, col_idx, covar, lambda, center, scale, pf, resid, alpha, eps, max_iter, dfmax, row_idx_val, covar_val, y_val, base_val, n_abort, nlam_min));
    return rcpp_result_gen;
END_RCPP
}
// bigsummaries
ListOf<NumericMatrix> bigsummaries(Environment BM, const IntegerVector& row_idx, const IntegerVector& col_idx, const NumericMatrix& covar, const NumericVector& y, const IntegerVector& which_set, int K);
RcppExport SEXP _bigstatsr_bigsummaries(SEXP BMSEXP, SEXP row_idxSEXP, SEXP col_idxSEXP, SEXP covarSEXP, SEXP ySEXP, SEXP which_setSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type row_idx(row_idxSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type col_idx(col_idxSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covar(covarSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type which_set(which_setSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(bigsummaries(BM, row_idx, col_idx, covar, y, which_set, K));
    return rcpp_result_gen;
END_RCPP
}
// bigcolvars
ListOf<NumericVector> bigcolvars(Environment BM, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP _bigstatsr_bigcolvars(SEXP BMSEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    rcpp_result_gen = Rcpp::wrap(bigcolvars(BM, rowInd, colInd));
    return rcpp_result_gen;
END_RCPP
}
// pMatVec4
NumericVector pMatVec4(Environment BM, const NumericVector& x, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP _bigstatsr_pMatVec4(SEXP BMSEXP, SEXP xSEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    rcpp_result_gen = Rcpp::wrap(pMatVec4(BM, x, rowInd, colInd));
    return rcpp_result_gen;
END_RCPP
}
// cpMatVec4
NumericVector cpMatVec4(Environment BM, const NumericVector& x, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP _bigstatsr_cpMatVec4(SEXP BMSEXP, SEXP xSEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    rcpp_result_gen = Rcpp::wrap(cpMatVec4(BM, x, rowInd, colInd));
    return rcpp_result_gen;
END_RCPP
}
// univLinReg5
List univLinReg5(Environment BM, const arma::mat& covar_U, const arma::vec& y, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP _bigstatsr_univLinReg5(SEXP BMSEXP, SEXP covar_USEXP, SEXP ySEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type covar_U(covar_USEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    rcpp_result_gen = Rcpp::wrap(univLinReg5(BM, covar_U, y, rowInd, colInd));
    return rcpp_result_gen;
END_RCPP
}
// IRLS
List IRLS(Environment BM, arma::mat& covar, const arma::vec& y, const arma::vec& z0, const arma::vec& w0, const IntegerVector& rowInd, const IntegerVector& colInd, double tol, int maxiter);
RcppExport SEXP _bigstatsr_IRLS(SEXP BMSEXP, SEXP covarSEXP, SEXP ySEXP, SEXP z0SEXP, SEXP w0SEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP tolSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type covar(covarSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z0(z0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w0(w0SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(IRLS(BM, covar, y, z0, w0, rowInd, colInd, tol, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// GET_ERROR_DIM
const char* const GET_ERROR_DIM();
RcppExport SEXP _bigstatsr_GET_ERROR_DIM() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(GET_ERROR_DIM());
    return rcpp_result_gen;
END_RCPP
}
// centering
NumericMatrix& centering(NumericMatrix& source, const NumericVector& mean);
RcppExport SEXP _bigstatsr_centering(SEXP sourceSEXP, SEXP meanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type source(sourceSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    rcpp_result_gen = Rcpp::wrap(centering(source, mean));
    return rcpp_result_gen;
END_RCPP
}
// scaleK
void scaleK(Environment BM, const NumericVector& sums, const NumericVector& mu, const NumericVector& delta, int nrow);
RcppExport SEXP _bigstatsr_scaleK(SEXP BMSEXP, SEXP sumsSEXP, SEXP muSEXP, SEXP deltaSEXP, SEXP nrowSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sums(sumsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    scaleK(BM, sums, mu, delta, nrow);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bigstatsr_auc_sorted", (DL_FUNC) &_bigstatsr_auc_sorted, 2},
    {"_bigstatsr_auc_sorted_tab", (DL_FUNC) &_bigstatsr_auc_sorted_tab, 3},
    {"_bigstatsr_boot_auc_sorted_tab", (DL_FUNC) &_bigstatsr_boot_auc_sorted_tab, 3},
    {"_bigstatsr_increment_scaled_tcrossprod", (DL_FUNC) &_bigstatsr_increment_scaled_tcrossprod, 7},
    {"_bigstatsr_prod_FBM_block_mat", (DL_FUNC) &_bigstatsr_prod_FBM_block_mat, 5},
    {"_bigstatsr_cprod_FBM_block_mat", (DL_FUNC) &_bigstatsr_cprod_FBM_block_mat, 5},
    {"_bigstatsr_prod_FBM_mat", (DL_FUNC) &_bigstatsr_prod_FBM_mat, 2},
    {"_bigstatsr_prod_mat_FBM", (DL_FUNC) &_bigstatsr_prod_mat_FBM, 2},
    {"_bigstatsr_crossprod_FBM", (DL_FUNC) &_bigstatsr_crossprod_FBM, 1},
    {"_bigstatsr_crossprod_FBM_mat", (DL_FUNC) &_bigstatsr_crossprod_FBM_mat, 2},
    {"_bigstatsr_crossprod_mat_FBM", (DL_FUNC) &_bigstatsr_crossprod_mat_FBM, 2},
    {"_bigstatsr_tcrossprod_FBM", (DL_FUNC) &_bigstatsr_tcrossprod_FBM, 1},
    {"_bigstatsr_tcrossprod_FBM_mat", (DL_FUNC) &_bigstatsr_tcrossprod_FBM_mat, 2},
    {"_bigstatsr_tcrossprod_mat_FBM", (DL_FUNC) &_bigstatsr_tcrossprod_mat_FBM, 2},
    {"_bigstatsr_COPY_cdfit_gaussian_hsr", (DL_FUNC) &_bigstatsr_COPY_cdfit_gaussian_hsr, 19},
    {"_bigstatsr_COPY_cdfit_binomial_hsr", (DL_FUNC) &_bigstatsr_COPY_cdfit_binomial_hsr, 21},
    {"_bigstatsr_bigsummaries", (DL_FUNC) &_bigstatsr_bigsummaries, 7},
    {"_bigstatsr_bigcolvars", (DL_FUNC) &_bigstatsr_bigcolvars, 3},
    {"_bigstatsr_pMatVec4", (DL_FUNC) &_bigstatsr_pMatVec4, 4},
    {"_bigstatsr_cpMatVec4", (DL_FUNC) &_bigstatsr_cpMatVec4, 4},
    {"_bigstatsr_univLinReg5", (DL_FUNC) &_bigstatsr_univLinReg5, 5},
    {"_bigstatsr_IRLS", (DL_FUNC) &_bigstatsr_IRLS, 9},
    {"_bigstatsr_GET_ERROR_DIM", (DL_FUNC) &_bigstatsr_GET_ERROR_DIM, 0},
    {"_bigstatsr_centering", (DL_FUNC) &_bigstatsr_centering, 2},
    {"_bigstatsr_scaleK", (DL_FUNC) &_bigstatsr_scaleK, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_bigstatsr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
