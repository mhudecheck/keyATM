// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// topicdict_train
List topicdict_train(List model, int iter, int output_per);
RcppExport SEXP _topicdict_topicdict_train(SEXP modelSEXP, SEXP iterSEXP, SEXP output_perSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type output_per(output_perSEXP);
    rcpp_result_gen = Rcpp::wrap(topicdict_train(model, iter, output_per));
    return rcpp_result_gen;
END_RCPP
}
// topicdict_train_cov
List topicdict_train_cov(List model, int iter, int output_per);
RcppExport SEXP _topicdict_topicdict_train_cov(SEXP modelSEXP, SEXP iterSEXP, SEXP output_perSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type output_per(output_perSEXP);
    rcpp_result_gen = Rcpp::wrap(topicdict_train_cov(model, iter, output_per));
    return rcpp_result_gen;
END_RCPP
}
// topicdict_train_HMM
List topicdict_train_HMM(List model, int iter, int output_per);
RcppExport SEXP _topicdict_topicdict_train_HMM(SEXP modelSEXP, SEXP iterSEXP, SEXP output_perSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type output_per(output_perSEXP);
    rcpp_result_gen = Rcpp::wrap(topicdict_train_HMM(model, iter, output_per));
    return rcpp_result_gen;
END_RCPP
}
// lda_cov
List lda_cov(List model, int K, int iter, int output_iter);
RcppExport SEXP _topicdict_lda_cov(SEXP modelSEXP, SEXP KSEXP, SEXP iterSEXP, SEXP output_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type output_iter(output_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(lda_cov(model, K, iter, output_iter));
    return rcpp_result_gen;
END_RCPP
}
// topicdict_idealpoint
List topicdict_idealpoint(List model, List author_info, int iter, int output_iter);
RcppExport SEXP _topicdict_topicdict_idealpoint(SEXP modelSEXP, SEXP author_infoSEXP, SEXP iterSEXP, SEXP output_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< List >::type author_info(author_infoSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type output_iter(output_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(topicdict_idealpoint(model, author_info, iter, output_iter));
    return rcpp_result_gen;
END_RCPP
}
// LDA_weight
List LDA_weight(List model, int iter, int output_per);
RcppExport SEXP _topicdict_LDA_weight(SEXP modelSEXP, SEXP iterSEXP, SEXP output_perSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type output_per(output_perSEXP);
    rcpp_result_gen = Rcpp::wrap(LDA_weight(model, iter, output_per));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_topicdict_topicdict_train", (DL_FUNC) &_topicdict_topicdict_train, 3},
    {"_topicdict_topicdict_train_cov", (DL_FUNC) &_topicdict_topicdict_train_cov, 3},
    {"_topicdict_topicdict_train_HMM", (DL_FUNC) &_topicdict_topicdict_train_HMM, 3},
    {"_topicdict_lda_cov", (DL_FUNC) &_topicdict_lda_cov, 4},
    {"_topicdict_topicdict_idealpoint", (DL_FUNC) &_topicdict_topicdict_idealpoint, 4},
    {"_topicdict_LDA_weight", (DL_FUNC) &_topicdict_LDA_weight, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_topicdict(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
