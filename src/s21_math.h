#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <limits.h>
#include <stdint.h>

/******************************************************************
*                                                                 *
*                      School_21 Math.h Headers                   *
*                       (version - s21_Math.h)                    *
*                                                                 *
******************************************************************/


/* PI number */
#define s21_PI 3.14159265358979323846264338327950288
#define s21_PI_2 s21_PI/2

#define s21_NAN 0.0 / 0.0
#define s21_INF 1.0 / 0.0
#define s21_EPSILON 1e-17
#define s21_LN10 2.30258509299404590109


int             s21_abs(int __X);                   /*  <1>++  */
long double     s21_acos(double __X);               /*  <2>++  */
long double     s21_asin(double __X);               /*  <3>++  */
long double     s21_atan(double __X);               /*  <4>++  */
long double     s21_ceil(double __X);               /*  <5>++  */
long double     s21_cos(double __X);                /*  <6>++  */
long double     s21_exp(double __X);                /*  <7>++  */
long double     s21_fabs(double __X);               /*  <8>++  */
long double     s21_floor(double __X);              /*  <9>++  */
long double     s21_fmod(double __X, double __Y);   /*  <10>++ */
long double     s21_log(double __X);                /*  <11>++ */
long double     s21_pow(double base, double exp);   /*  <12>++ */
long double     s21_sin(double __X);                /*  <13>++ */
long double     s21_sqrt(double __X);               /*  <14>++ */
long double     s21_tan(double __X);                /*  <15>++ */

/* HELP FUNCTIONS AND DEFINES*/
int num_isnan(double __X);
long double basic_atan(double __X);
// long double pow_Exp_Plusinf(double base);
// long double pow_Exp_MInusinf(double base);
// long double pow_Exp_AboveZero(double base, double exp);
// long double pow_Exp_BelowZero(double base, double exp);

#define EXP_STEPEN_DOUBLE_MAX 709.7827
#define EXP_STEPEN_DOUBLE_MIN -708.3964

#endif  // SRC_S21_MATH_H_
