/*******************************************************************************
 * Copyright (c) 2016, College of William & Mary
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the College of William & Mary nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COLLEGE OF WILLIAM & MARY BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * PRIMME: https://github.com/primme/primme
 * Contact: Andreas Stathopoulos, a n d r e a s _at_ c s . w m . e d u
 *******************************************************************************
 *   NOTE: THIS FILE IS AUTOMATICALLY GENERATED. PLEASE DON'T MODIFY
 ******************************************************************************/


#ifndef blaslapack_H
#define blaslapack_H
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_Sprimme)
#  define Num_copy_Sprimme CONCAT(Num_copy_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_copy_Rprimme)
#  define Num_copy_Rprimme CONCAT(Num_copy_,REAL_SUF)
#endif
void Num_copy_dprimme(int64_t n, double *x, int incx, double *y, int incy);
#if !defined(CHECK_TEMPLATE) && !defined(Num_gemm_Sprimme)
#  define Num_gemm_Sprimme CONCAT(Num_gemm_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_gemm_Rprimme)
#  define Num_gemm_Rprimme CONCAT(Num_gemm_,REAL_SUF)
#endif
void Num_gemm_dprimme(const char *transa, const char *transb, int m, int n,
      int k, double alpha, double *a, int lda, double *b, int ldb, double beta,
      double *c, int ldc);
#if !defined(CHECK_TEMPLATE) && !defined(Num_hemm_Sprimme)
#  define Num_hemm_Sprimme CONCAT(Num_hemm_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_hemm_Rprimme)
#  define Num_hemm_Rprimme CONCAT(Num_hemm_,REAL_SUF)
#endif
void Num_hemm_dprimme(const char *side, const char *uplo, int m, int n,
      double alpha, double *a, int lda, double *b, int ldb, double beta,
      double *c, int ldc);
#if !defined(CHECK_TEMPLATE) && !defined(Num_trmm_Sprimme)
#  define Num_trmm_Sprimme CONCAT(Num_trmm_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_trmm_Rprimme)
#  define Num_trmm_Rprimme CONCAT(Num_trmm_,REAL_SUF)
#endif
void Num_trmm_dprimme(const char *side, const char *uplo,
      const char *transa, const char *diag, int m, int n, double alpha,
      double *a, int lda, double *b, int ldb);
#if !defined(CHECK_TEMPLATE) && !defined(Num_gemv_Sprimme)
#  define Num_gemv_Sprimme CONCAT(Num_gemv_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_gemv_Rprimme)
#  define Num_gemv_Rprimme CONCAT(Num_gemv_,REAL_SUF)
#endif
void Num_gemv_dprimme(const char *transa, int64_t m, int n, double alpha,
      double *a, int lda, double *x, int incx, double beta, double *y,
      int incy);
#if !defined(CHECK_TEMPLATE) && !defined(Num_hemv_Sprimme)
#  define Num_hemv_Sprimme CONCAT(Num_hemv_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_hemv_Rprimme)
#  define Num_hemv_Rprimme CONCAT(Num_hemv_,REAL_SUF)
#endif
void Num_hemv_dprimme(const char *uplo, int n, double alpha,
   double *a, int lda, double *x, int incx, double beta,
   double *y, int incy);
#if !defined(CHECK_TEMPLATE) && !defined(Num_axpy_Sprimme)
#  define Num_axpy_Sprimme CONCAT(Num_axpy_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_axpy_Rprimme)
#  define Num_axpy_Rprimme CONCAT(Num_axpy_,REAL_SUF)
#endif
void Num_axpy_dprimme(int64_t n, double alpha, double *x, int incx,
   double *y, int incy);
#if !defined(CHECK_TEMPLATE) && !defined(Num_dot_Sprimme)
#  define Num_dot_Sprimme CONCAT(Num_dot_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_dot_Rprimme)
#  define Num_dot_Rprimme CONCAT(Num_dot_,REAL_SUF)
#endif
double Num_dot_dprimme(int64_t n, double *x, int incx, double *y, int incy);
#if !defined(CHECK_TEMPLATE) && !defined(Num_larnv_Sprimme)
#  define Num_larnv_Sprimme CONCAT(Num_larnv_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_larnv_Rprimme)
#  define Num_larnv_Rprimme CONCAT(Num_larnv_,REAL_SUF)
#endif
void Num_larnv_dprimme(int idist, int64_t *iseed, int64_t length,
      double *x);
#if !defined(CHECK_TEMPLATE) && !defined(Num_scal_Sprimme)
#  define Num_scal_Sprimme CONCAT(Num_scal_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_scal_Rprimme)
#  define Num_scal_Rprimme CONCAT(Num_scal_,REAL_SUF)
#endif
void Num_scal_dprimme(int64_t n, double alpha, double *x, int incx);
#if !defined(CHECK_TEMPLATE) && !defined(Num_swap_Sprimme)
#  define Num_swap_Sprimme CONCAT(Num_swap_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_swap_Rprimme)
#  define Num_swap_Rprimme CONCAT(Num_swap_,REAL_SUF)
#endif
void Num_swap_dprimme(int64_t n, double *x, int incx, double *y, int incy);
#if !defined(CHECK_TEMPLATE) && !defined(Num_heev_Sprimme)
#  define Num_heev_Sprimme CONCAT(Num_heev_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_heev_Rprimme)
#  define Num_heev_Rprimme CONCAT(Num_heev_,REAL_SUF)
#endif
void Num_heev_dprimme(const char *jobz, const char *uplo, int n, double *a,
      int lda, double *w, double *work, int ldwork, int *info);
#if !defined(CHECK_TEMPLATE) && !defined(Num_gesvd_Sprimme)
#  define Num_gesvd_Sprimme CONCAT(Num_gesvd_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_gesvd_Rprimme)
#  define Num_gesvd_Rprimme CONCAT(Num_gesvd_,REAL_SUF)
#endif
void Num_gesvd_dprimme(const char *jobu, const char *jobvt, int m, int n,
      double *a, int lda, double *s, double *u, int ldu, double *vt, int ldvt,
      double *work, int ldwork, int *info);
#if !defined(CHECK_TEMPLATE) && !defined(Num_hetrf_Sprimme)
#  define Num_hetrf_Sprimme CONCAT(Num_hetrf_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_hetrf_Rprimme)
#  define Num_hetrf_Rprimme CONCAT(Num_hetrf_,REAL_SUF)
#endif
void Num_hetrf_dprimme(const char *uplo, int n, double *a, int lda, int *ipivot,
   double *work, int ldwork, int *info);
#if !defined(CHECK_TEMPLATE) && !defined(Num_hetrs_Sprimme)
#  define Num_hetrs_Sprimme CONCAT(Num_hetrs_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_hetrs_Rprimme)
#  define Num_hetrs_Rprimme CONCAT(Num_hetrs_,REAL_SUF)
#endif
void Num_hetrs_dprimme(const char *uplo, int n, int nrhs, double *a,
      int lda, int *ipivot, double *b, int ldb, int *info);
#if !defined(CHECK_TEMPLATE) && !defined(Num_trsm_Sprimme)
#  define Num_trsm_Sprimme CONCAT(Num_trsm_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_trsm_Rprimme)
#  define Num_trsm_Rprimme CONCAT(Num_trsm_,REAL_SUF)
#endif
void Num_trsm_dprimme(const char *side, const char *uplo, const char *transa,
      const char *diag, int m, int n, double alpha, double *a, int lda,
      double *b, int ldb);
#if !defined(CHECK_TEMPLATE) && !defined(Num_lamch_Sprimme)
#  define Num_lamch_Sprimme CONCAT(Num_lamch_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_lamch_Rprimme)
#  define Num_lamch_Rprimme CONCAT(Num_lamch_,REAL_SUF)
#endif
double Num_lamch_dprimme(const char *cmach);
void Num_copy_zprimme(int64_t n, PRIMME_COMPLEX_DOUBLE *x, int incx, PRIMME_COMPLEX_DOUBLE *y, int incy);
void Num_gemm_zprimme(const char *transa, const char *transb, int m, int n,
      int k, PRIMME_COMPLEX_DOUBLE alpha, PRIMME_COMPLEX_DOUBLE *a, int lda, PRIMME_COMPLEX_DOUBLE *b, int ldb, PRIMME_COMPLEX_DOUBLE beta,
      PRIMME_COMPLEX_DOUBLE *c, int ldc);
void Num_hemm_zprimme(const char *side, const char *uplo, int m, int n,
      PRIMME_COMPLEX_DOUBLE alpha, PRIMME_COMPLEX_DOUBLE *a, int lda, PRIMME_COMPLEX_DOUBLE *b, int ldb, PRIMME_COMPLEX_DOUBLE beta,
      PRIMME_COMPLEX_DOUBLE *c, int ldc);
void Num_trmm_zprimme(const char *side, const char *uplo,
      const char *transa, const char *diag, int m, int n, PRIMME_COMPLEX_DOUBLE alpha,
      PRIMME_COMPLEX_DOUBLE *a, int lda, PRIMME_COMPLEX_DOUBLE *b, int ldb);
void Num_gemv_zprimme(const char *transa, int64_t m, int n, PRIMME_COMPLEX_DOUBLE alpha,
      PRIMME_COMPLEX_DOUBLE *a, int lda, PRIMME_COMPLEX_DOUBLE *x, int incx, PRIMME_COMPLEX_DOUBLE beta, PRIMME_COMPLEX_DOUBLE *y,
      int incy);
void Num_hemv_zprimme(const char *uplo, int n, PRIMME_COMPLEX_DOUBLE alpha,
   PRIMME_COMPLEX_DOUBLE *a, int lda, PRIMME_COMPLEX_DOUBLE *x, int incx, PRIMME_COMPLEX_DOUBLE beta,
   PRIMME_COMPLEX_DOUBLE *y, int incy);
void Num_axpy_zprimme(int64_t n, PRIMME_COMPLEX_DOUBLE alpha, PRIMME_COMPLEX_DOUBLE *x, int incx,
   PRIMME_COMPLEX_DOUBLE *y, int incy);
PRIMME_COMPLEX_DOUBLE Num_dot_zprimme(int64_t n, PRIMME_COMPLEX_DOUBLE *x, int incx, PRIMME_COMPLEX_DOUBLE *y, int incy);
void Num_larnv_zprimme(int idist, int64_t *iseed, int64_t length,
      PRIMME_COMPLEX_DOUBLE *x);
void Num_scal_zprimme(int64_t n, PRIMME_COMPLEX_DOUBLE alpha, PRIMME_COMPLEX_DOUBLE *x, int incx);
void Num_swap_zprimme(int64_t n, PRIMME_COMPLEX_DOUBLE *x, int incx, PRIMME_COMPLEX_DOUBLE *y, int incy);
void Num_heev_zprimme(const char *jobz, const char *uplo, int n, PRIMME_COMPLEX_DOUBLE *a,
      int lda, double *w, PRIMME_COMPLEX_DOUBLE *work, int ldwork, double *rwork, int *info);
void Num_gesvd_zprimme(const char *jobu, const char *jobvt, int m, int n,
   PRIMME_COMPLEX_DOUBLE *a, int lda, double *s, PRIMME_COMPLEX_DOUBLE *u, int ldu, PRIMME_COMPLEX_DOUBLE *vt, int ldvt,
   PRIMME_COMPLEX_DOUBLE *work, int ldwork, double *rwork, int *info);
void Num_hetrf_zprimme(const char *uplo, int n, PRIMME_COMPLEX_DOUBLE *a, int lda, int *ipivot,
   PRIMME_COMPLEX_DOUBLE *work, int ldwork, int *info);
void Num_hetrs_zprimme(const char *uplo, int n, int nrhs, PRIMME_COMPLEX_DOUBLE *a,
      int lda, int *ipivot, PRIMME_COMPLEX_DOUBLE *b, int ldb, int *info);
void Num_trsm_zprimme(const char *side, const char *uplo, const char *transa,
      const char *diag, int m, int n, PRIMME_COMPLEX_DOUBLE alpha, PRIMME_COMPLEX_DOUBLE *a, int lda,
      PRIMME_COMPLEX_DOUBLE *b, int ldb);
void Num_copy_sprimme(int64_t n, float *x, int incx, float *y, int incy);
void Num_gemm_sprimme(const char *transa, const char *transb, int m, int n,
      int k, float alpha, float *a, int lda, float *b, int ldb, float beta,
      float *c, int ldc);
void Num_hemm_sprimme(const char *side, const char *uplo, int m, int n,
      float alpha, float *a, int lda, float *b, int ldb, float beta,
      float *c, int ldc);
void Num_trmm_sprimme(const char *side, const char *uplo,
      const char *transa, const char *diag, int m, int n, float alpha,
      float *a, int lda, float *b, int ldb);
void Num_gemv_sprimme(const char *transa, int64_t m, int n, float alpha,
      float *a, int lda, float *x, int incx, float beta, float *y,
      int incy);
void Num_hemv_sprimme(const char *uplo, int n, float alpha,
   float *a, int lda, float *x, int incx, float beta,
   float *y, int incy);
void Num_axpy_sprimme(int64_t n, float alpha, float *x, int incx,
   float *y, int incy);
float Num_dot_sprimme(int64_t n, float *x, int incx, float *y, int incy);
void Num_larnv_sprimme(int idist, int64_t *iseed, int64_t length,
      float *x);
void Num_scal_sprimme(int64_t n, float alpha, float *x, int incx);
void Num_swap_sprimme(int64_t n, float *x, int incx, float *y, int incy);
void Num_heev_sprimme(const char *jobz, const char *uplo, int n, float *a,
      int lda, float *w, float *work, int ldwork, int *info);
void Num_gesvd_sprimme(const char *jobu, const char *jobvt, int m, int n,
      float *a, int lda, float *s, float *u, int ldu, float *vt, int ldvt,
      float *work, int ldwork, int *info);
void Num_hetrf_sprimme(const char *uplo, int n, float *a, int lda, int *ipivot,
   float *work, int ldwork, int *info);
void Num_hetrs_sprimme(const char *uplo, int n, int nrhs, float *a,
      int lda, int *ipivot, float *b, int ldb, int *info);
void Num_trsm_sprimme(const char *side, const char *uplo, const char *transa,
      const char *diag, int m, int n, float alpha, float *a, int lda,
      float *b, int ldb);
float Num_lamch_sprimme(const char *cmach);
void Num_copy_cprimme(int64_t n, PRIMME_COMPLEX_FLOAT *x, int incx, PRIMME_COMPLEX_FLOAT *y, int incy);
void Num_gemm_cprimme(const char *transa, const char *transb, int m, int n,
      int k, PRIMME_COMPLEX_FLOAT alpha, PRIMME_COMPLEX_FLOAT *a, int lda, PRIMME_COMPLEX_FLOAT *b, int ldb, PRIMME_COMPLEX_FLOAT beta,
      PRIMME_COMPLEX_FLOAT *c, int ldc);
void Num_hemm_cprimme(const char *side, const char *uplo, int m, int n,
      PRIMME_COMPLEX_FLOAT alpha, PRIMME_COMPLEX_FLOAT *a, int lda, PRIMME_COMPLEX_FLOAT *b, int ldb, PRIMME_COMPLEX_FLOAT beta,
      PRIMME_COMPLEX_FLOAT *c, int ldc);
void Num_trmm_cprimme(const char *side, const char *uplo,
      const char *transa, const char *diag, int m, int n, PRIMME_COMPLEX_FLOAT alpha,
      PRIMME_COMPLEX_FLOAT *a, int lda, PRIMME_COMPLEX_FLOAT *b, int ldb);
void Num_gemv_cprimme(const char *transa, int64_t m, int n, PRIMME_COMPLEX_FLOAT alpha,
      PRIMME_COMPLEX_FLOAT *a, int lda, PRIMME_COMPLEX_FLOAT *x, int incx, PRIMME_COMPLEX_FLOAT beta, PRIMME_COMPLEX_FLOAT *y,
      int incy);
void Num_hemv_cprimme(const char *uplo, int n, PRIMME_COMPLEX_FLOAT alpha,
   PRIMME_COMPLEX_FLOAT *a, int lda, PRIMME_COMPLEX_FLOAT *x, int incx, PRIMME_COMPLEX_FLOAT beta,
   PRIMME_COMPLEX_FLOAT *y, int incy);
void Num_axpy_cprimme(int64_t n, PRIMME_COMPLEX_FLOAT alpha, PRIMME_COMPLEX_FLOAT *x, int incx,
   PRIMME_COMPLEX_FLOAT *y, int incy);
PRIMME_COMPLEX_FLOAT Num_dot_cprimme(int64_t n, PRIMME_COMPLEX_FLOAT *x, int incx, PRIMME_COMPLEX_FLOAT *y, int incy);
void Num_larnv_cprimme(int idist, int64_t *iseed, int64_t length,
      PRIMME_COMPLEX_FLOAT *x);
void Num_scal_cprimme(int64_t n, PRIMME_COMPLEX_FLOAT alpha, PRIMME_COMPLEX_FLOAT *x, int incx);
void Num_swap_cprimme(int64_t n, PRIMME_COMPLEX_FLOAT *x, int incx, PRIMME_COMPLEX_FLOAT *y, int incy);
void Num_heev_cprimme(const char *jobz, const char *uplo, int n, PRIMME_COMPLEX_FLOAT *a,
      int lda, float *w, PRIMME_COMPLEX_FLOAT *work, int ldwork, float *rwork, int *info);
void Num_gesvd_cprimme(const char *jobu, const char *jobvt, int m, int n,
   PRIMME_COMPLEX_FLOAT *a, int lda, float *s, PRIMME_COMPLEX_FLOAT *u, int ldu, PRIMME_COMPLEX_FLOAT *vt, int ldvt,
   PRIMME_COMPLEX_FLOAT *work, int ldwork, float *rwork, int *info);
void Num_hetrf_cprimme(const char *uplo, int n, PRIMME_COMPLEX_FLOAT *a, int lda, int *ipivot,
   PRIMME_COMPLEX_FLOAT *work, int ldwork, int *info);
void Num_hetrs_cprimme(const char *uplo, int n, int nrhs, PRIMME_COMPLEX_FLOAT *a,
      int lda, int *ipivot, PRIMME_COMPLEX_FLOAT *b, int ldb, int *info);
void Num_trsm_cprimme(const char *side, const char *uplo, const char *transa,
      const char *diag, int m, int n, PRIMME_COMPLEX_FLOAT alpha, PRIMME_COMPLEX_FLOAT *a, int lda,
      PRIMME_COMPLEX_FLOAT *b, int ldb);
#endif
