#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "./s21_math.h"

#define TEST_EPS 1e-7
#define _USE_MATH_DEFINES

int CheckCorrectByEPS(long double School_lib, long double Oririnal_lib) {
    return ((fabsl)((long double)(Oririnal_lib - School_lib)) > TEST_EPS)
    ? 1 : 0;
}

void MakeFree_3Param(long double *X, long double *Y, int *Z) {
    *X = 0, *Y = 0, *Z = 0;
}
void MakeFree_2Param(long double *X, long double *Y) {
    *X = 0, *Y = 0;
}

START_TEST(sin_test_1) {
    long double School_lib = s21_sin(0.55);
    long double Original_lib = sin(0.55);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(s21_PI);
    Original_lib = sin(s21_PI);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(s21_PI/2);
    Original_lib = sin(s21_PI/2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(s21_PI/4);
    Original_lib = sin(s21_PI/4);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(s21_PI/3);
    Original_lib = sin(s21_PI/3);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(s21_PI/6);
    Original_lib = sin(s21_PI/6);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(100000.5);
    Original_lib = sin(100000.5);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(sin_test_2) {
    long double School_lib = s21_sin(-s21_PI);
    long double Original_lib = sin(-s21_PI);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(-s21_PI/2);
    Original_lib = sin(-s21_PI/2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(-s21_PI/4);
    Original_lib = sin(-s21_PI/4);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(-s21_PI/3);
    Original_lib = sin(-s21_PI/3);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(-s21_PI/6);
    Original_lib = sin(-s21_PI/6);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(-100000.5);
    Original_lib = sin(-100000.5);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(sin_test_3) {
    long double School_lib = s21_sin(INFINITY);
    long double Original_lib = sin(INFINITY);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(-INFINITY);
    Original_lib = sin(-INFINITY);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(NAN);
    Original_lib = sin(NAN);
    result = num_isnan(School_lib);
    int result2 = num_isnan(Original_lib);
    ck_assert_int_eq(result, result2);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(sin_test_4) {
    long double School_lib = s21_sin(0.9999);
    long double Original_lib = sin(0.9999);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(-0.9999);
    Original_lib = sin(-0.9999);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(0.0001);
    Original_lib = sin(0.0001);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(-0.0001);
    Original_lib = sin(-0.0001);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(1345.439573498);
    Original_lib = sin(1345.439573498);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_sin(-1345.439573498);
    Original_lib = sin(-1345.439573498);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(cos_test_1) {
    long double School_lib = s21_cos(0.55);
    long double Original_lib = cos(0.55);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(s21_PI);
    Original_lib = cos(s21_PI);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(s21_PI/2);
    Original_lib = cos(s21_PI/2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(s21_PI/4);
    Original_lib = cos(s21_PI/4);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(s21_PI/3);
    Original_lib = cos(s21_PI/3);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(s21_PI/6);
    Original_lib = cos(s21_PI/6);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(100000.5);
    Original_lib = cos(100000.5);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(cos_test_2) {
    long double School_lib = s21_cos(-s21_PI);
    long double Original_lib = cos(-s21_PI);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(-s21_PI/2);
    Original_lib = cos(-s21_PI/2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(-s21_PI/4);
    Original_lib = cos(-s21_PI/4);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(-s21_PI/3);
    Original_lib = cos(-s21_PI/3);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(-s21_PI/6);
    Original_lib = cos(-s21_PI/6);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(-100000.5);
    Original_lib = cos(-100000.5);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(cos_test_3) {
    long double School_lib = s21_cos(INFINITY);
    long double Original_lib = cos(INFINITY);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(-INFINITY);
    Original_lib = cos(-INFINITY);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(NAN);
    Original_lib = cos(NAN);
    result = num_isnan(School_lib);
    int result2 = num_isnan(Original_lib);
    ck_assert_int_eq(result, result2);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(cos_test_4) {
    long double School_lib = s21_cos(0.9999);
    long double Original_lib = cos(0.9999);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(-0.9999);
    Original_lib = cos(-0.9999);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(0.0001);
    Original_lib = cos(0.0001);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(-0.0001);
    Original_lib = cos(-0.0001);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(1345.439573498);
    Original_lib = cos(1345.439573498);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_cos(-1345.439573498);
    Original_lib = cos(-1345.439573498);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(tan_test_1) {
    long double School_lib = s21_tan(0.55);
    long double Original_lib = tan(0.55);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(s21_PI);
    Original_lib = tan(s21_PI);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(s21_PI/4);
    Original_lib = tan(s21_PI/4);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(s21_PI/3);
    Original_lib = tan(s21_PI/3);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(s21_PI/6);
    Original_lib = tan(s21_PI/6);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(100000.5);
    Original_lib = tan(100000.5);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(tan_test_2) {
    long double School_lib = s21_tan(-s21_PI);
    long double Original_lib = tan(-s21_PI);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(-s21_PI/4);
    Original_lib = tan(-s21_PI/4);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(-s21_PI/3);
    Original_lib = tan(-s21_PI/3);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(-s21_PI/6);
    Original_lib = tan(-s21_PI/6);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(-100000.5);
    Original_lib = tan(-100000.5);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(tan_test_3) {
    long double School_lib = s21_tan(INFINITY);
    long double Original_lib = tan(INFINITY);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(-INFINITY);
    Original_lib = tan(-INFINITY);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(NAN);
    Original_lib = tan(NAN);
    result = num_isnan(School_lib);
    int result2 = num_isnan(Original_lib);
    ck_assert_int_eq(result, result2);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(tan_test_4) {
    long double School_lib = s21_tan(0.9999);
    long double Original_lib = tan(0.9999);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(-0.9999);
    Original_lib = tan(-0.9999);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(0.0001);
    Original_lib = tan(0.0001);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(-0.0001);
    Original_lib = tan(-0.0001);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(1345.439573498);
    Original_lib = tan(1345.439573498);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_tan(-1345.439573498);
    Original_lib = tan(-1345.439573498);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(acos_test_1) {
    long double School_lib = s21_acos(0.55);
    long double Original_lib = acos(0.55);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_acos(-0.55);
    Original_lib = acos(-0.55);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_acos(0.999);
    Original_lib = acos(0.999);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_acos(-0.999);
    Original_lib = acos(-0.999);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_acos(0.001);
    Original_lib = acos(0.001);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_acos(-0.001);
    Original_lib = acos(-0.001);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(acos_test_2) {
    int result = 0;
    long double School_lib = s21_acos(-1);
    long double Original_lib = acos(-1);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_acos(1);
    Original_lib = acos(1);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_acos(0.443);
    Original_lib = acos(0.443);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_acos(-0.999);
    Original_lib = acos(-0.999);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_acos(s21_INF);
    Original_lib = acos(s21_INF);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_acos(-s21_INF);
    Original_lib = acos(-s21_INF);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_acos(s21_NAN);
    Original_lib = acos(s21_NAN);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(asin_test_1) {
    long double School_lib = s21_asin(0.55);
    long double Original_lib = asin(0.55);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_asin(-0.55);
    Original_lib = asin(-0.55);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_asin(0.999);
    Original_lib = asin(0.999);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_asin(-0.999);
    Original_lib = asin(-0.999);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_asin(0.001);
    Original_lib = asin(0.001);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_asin(-0.001);
    Original_lib = asin(-0.001);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(asin_test_2) {
    int result = 0;
    long double School_lib = s21_asin(1);
    long double Original_lib = asin(1);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_asin(-1);
    Original_lib = asin(-1);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_asin(0.999);
    Original_lib = asin(0.999);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_asin(-0.999);
    Original_lib = asin(-0.999);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_asin(s21_INF);
    Original_lib = asin(s21_INF);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_asin(-s21_INF);
    Original_lib = asin(-s21_INF);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_asin(s21_NAN);
    Original_lib = asin(s21_NAN);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(atan_test_2) {
    long double School_lib = s21_atan(s21_INF);
    long double Original_lib = atan(s21_INF);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_atan(-s21_INF);
    Original_lib = atan(-s21_INF);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_atan(1.32423);
    Original_lib = atan(1.32423);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(pow_test_1) {
    long double School_lib = s21_pow(1.0/0.0, 2.34);
    long double Original_lib = pow(1.0/0.0, 2.34);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-1.0/0.0, 2.34);
    Original_lib = pow(-1.0/0.0, 2.34);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(s21_NAN, 2.34);
    Original_lib = pow(s21_NAN, 2.34);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-12.0, -2.34);
    Original_lib = pow(-12.0, -2.34);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-12.0, 2);
    Original_lib = pow(-12.0, 2);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(0, 2.34);
    Original_lib = pow(0, 2.34);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(123.2, 2.34);
    Original_lib = pow(123.2, 2.34);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(1.0/0.0, 2);
    Original_lib = pow(1.0/0.0, 2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-1.0/0.0, 2);
    Original_lib = pow(-1.0/0.0, 2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(s21_NAN, 2);
    Original_lib = pow(s21_NAN, 2);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(12.0, 2);
    Original_lib = pow(12.0, 2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-12.0, 2);
    Original_lib = pow(-12.0, 2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(0, 2);
    Original_lib = pow(0, 2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(123.2, 2);
    Original_lib = pow(123.2, 2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(pow_test_2) {
    long double School_lib = s21_pow(1.0/0.0, -2.34);
    long double Original_lib = pow(1.0/0.0, -2.34);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-1.0/0.0, -2.34);
    Original_lib = pow(-1.0/0.0, -2.34);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(s21_NAN, -2.34);
    Original_lib = pow(s21_NAN, -2.34);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(12.0, -2.34);
    Original_lib = pow(12.0, -2.34);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-12.0, -2.34);
    Original_lib = pow(-12.0, -2.34);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(5, 2.34);
    Original_lib = pow(5, 2.34);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(123.2, -2.34);
    Original_lib = pow(123.2, -2.34);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(1.0/0.0, -2);
    Original_lib = pow(1.0/0.0, -2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-1.0/0.0, -2);
    Original_lib = pow(-1.0/0.0, -2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(s21_NAN, -2);
    Original_lib = pow(s21_NAN, -2);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(12.0, -2);
    Original_lib = pow(12.0, -2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-12.0, -2);
    Original_lib = pow(-12.0, -2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(6, -2);
    Original_lib = pow(6, -2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(123.2, -2);
    Original_lib = pow(123.2, -2);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(pow_test_3) {
    int result = 0;
    long double School_lib = s21_pow(12.2, s21_NAN);
    long double Original_lib = pow(12.2, s21_NAN);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-12, s21_NAN);
    Original_lib = pow(-12, s21_NAN);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(1.0/0.0, s21_NAN);
    Original_lib = pow(1.0/0.0, s21_NAN);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-1.0/0.0, s21_NAN);
    Original_lib = pow(-1.0/0.0, s21_NAN);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(s21_NAN, s21_NAN);
    Original_lib = pow(s21_NAN, s21_NAN);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(0, s21_NAN);
    Original_lib = pow(0, s21_NAN);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(pow_test_4) {
    long double School_lib = s21_pow(1.0/0.0, 1.0/0.0);
    long double Original_lib = pow(1.0/0.0, 1.0/0.0);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-1.0/0.0, 1.0/0.0);
    Original_lib = pow(-1.0/0.0, 1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(0.9999, 1.0/0.0);
    Original_lib = pow(0.9999, 1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(1, 1.0/0.0);
    Original_lib = pow(1, 1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(1.0001, 1.0/0.0);
    Original_lib = pow(1.0001, 1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-0.9999, 1.0/0.0);
    Original_lib = pow(-0.9999, 1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-1, 1.0/0.0);
    Original_lib = pow(-1, 1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-1.0001, 1.0/0.0);
    Original_lib = pow(-1.0001, 1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(0, 1.0/0.0);
    Original_lib = pow(0, 1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(s21_NAN, 1.0/0.0);
    Original_lib = pow(s21_NAN, 1.0/0.0);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    ck_assert_ldouble_eq_tol(s21_pow(12.0, -2), pow(12.0, -2), TEST_EPS);
}
END_TEST

START_TEST(pow_test_5) {
    long double School_lib = s21_pow(1.0/0.0, -1.0/0.0);
    long double Original_lib = pow(1.0/0.0, -1.0/0.0);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-1.0/0.0, -1.0/0.0);
    Original_lib = pow(-1.0/0.0, -1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(0.9999, -1.0/0.0);
    Original_lib = pow(0.9999, -1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(1, -1.0/0.0);
    Original_lib = pow(1, -1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(1.0001, -1.0/0.0);
    Original_lib = pow(1.0001, -1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-0.9999, -1.0/0.0);
    Original_lib = pow(-0.9999, -1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-1, -1.0/0.0);
    Original_lib = pow(-1, -1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-1.0001, -1.0/0.0);
    Original_lib = pow(-1.0001, -1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(0, -1.0/0.0);
    Original_lib = pow(0, -1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(s21_NAN, -1.0/0.0);
    Original_lib = pow(s21_NAN, -1.0/0.0);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(pow_test_6) {
    long double School_lib = s21_pow(0, 0);
    long double Original_lib = pow(0, 0);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(12, 0);
    Original_lib = pow(12, 0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-12, 0);
    Original_lib = pow(-12, 0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(1.0/0.0, 0);
    Original_lib = pow(1.0/0.0, 0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(-1.0/0.0, 0);
    Original_lib = pow(-1.0/0.0, 0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_pow(s21_NAN, 0);
    Original_lib = pow(s21_NAN, 0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(log_test_1) {
    long double School_lib = s21_log(123.123);
    long double Original_lib = log(123.123);
    int result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_log(0.1);
    Original_lib = log(0.1);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_log(0.55);
    Original_lib = log(0.55);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_log(1.0/0.0);
    Original_lib = log(1.0/0.0);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_log(1.9);
    Original_lib = log(1.9);
    result = CheckCorrectByEPS(School_lib, Original_lib);
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);

    School_lib = s21_log(s21_NAN);
    Original_lib = log(s21_NAN);
    if (num_isnan(School_lib) && num_isnan(Original_lib) == 1) { result = 0; }
    ck_assert_int_eq(0, result);
    MakeFree_3Param(&School_lib, &Original_lib, &result);
}
END_TEST

START_TEST(abs_test_1) {
    int School_lib = s21_abs(0);
    int Original_lib = abs(0);
    ck_assert_int_eq(School_lib, Original_lib);
    School_lib = 0, Original_lib = 0;

    School_lib = s21_abs(1);
    Original_lib = abs(1);
    ck_assert_int_eq(School_lib, Original_lib);
    School_lib = 0, Original_lib = 0;

    School_lib = s21_abs(123456789);
    Original_lib = abs(123456789);
    ck_assert_int_eq(School_lib, Original_lib);
    School_lib = 0, Original_lib = 0;

    School_lib = s21_abs(-123456789);
    Original_lib = abs(-123456789);
    ck_assert_int_eq(School_lib, Original_lib);
    School_lib = 0, Original_lib = 0;

    School_lib = s21_abs(2147483647);
    Original_lib = abs(2147483647);
    ck_assert_int_eq(School_lib, Original_lib);
    School_lib = 0, Original_lib = 0;

    School_lib = s21_abs(-2147483647);
    Original_lib = abs(-2147483647);
    ck_assert_int_eq(School_lib, Original_lib);
    School_lib = 0, Original_lib = 0;
}

START_TEST(abs_test_2) {
    int School_lib = s21_abs(-2147483647);
    int Original_lib = abs(-2147483647);
    ck_assert_int_eq(School_lib, Original_lib);
    School_lib = 0, Original_lib = 0;

    School_lib = s21_abs(-2147483 + 123456);
    Original_lib = abs(-2147483 + 123456);
    ck_assert_int_eq(School_lib, Original_lib);
    School_lib = 0, Original_lib = 0;

    School_lib = s21_abs(66689345);
    Original_lib = abs(66689345);
    ck_assert_int_eq(School_lib, Original_lib);
    School_lib = 0, Original_lib = 0;

    School_lib = s21_abs(100000 / 5);
    Original_lib = abs(100000 / 5);
    ck_assert_int_eq(School_lib, Original_lib);
    School_lib = 0, Original_lib = 0;

    School_lib = s21_abs(-100000 / 5);
    Original_lib = abs(-100000 / 5);
    ck_assert_int_eq(School_lib, Original_lib);
    School_lib = 0, Original_lib = 0;
}

START_TEST(ceil_test_1) {
    long double School_lib = s21_ceil(-2147483.432);
    long double Original_lib = ceil(-2147483.432);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_ceil(s21_NAN);
    Original_lib = ceil(s21_NAN);
    ck_assert_double_ne(School_lib, Original_lib);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_ceil(0);
    Original_lib = ceil(0);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_ceil(-0);
    Original_lib = ceil(-0);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_ceil(0.000001);
    Original_lib = ceil(0.000001);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_ceil(-0.999999);
    Original_lib = ceil(-0.999999);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_ceil(-234823.654321);
    Original_lib = ceil(-234823.654321);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);
}

START_TEST(exp_test_1) {
    long double School_lib = s21_exp(-214748.432);
    long double Original_lib = exp(-214748.432);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_exp(0);
    Original_lib = exp(0);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_exp(1);
    Original_lib = exp(1);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_exp(0.4567893);
    Original_lib = exp(0.4567893);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_exp(153687.673452);
    Original_lib = exp(153687.673452);
    ck_assert_double_eq(School_lib, Original_lib);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_exp(-153687.673452);
    Original_lib = exp(-153687.673452);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_exp(-153682);
    Original_lib = exp(-153682);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);
}

START_TEST(fabs_test_1) {
    long double School_lib = s21_fabs(-214748.432);
    long double Original_lib = fabs(-214748.432);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_fabs(0.4567893);
    Original_lib = fabs(0.4567893);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_fabs(153687.673452);
    Original_lib = fabs(153687.673452);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_fabs(-153687.673452);
    Original_lib = fabs(-153687.673452);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    for (double i = -100; i < 100; i += 0.1)
        ck_assert_ldouble_eq_tol(s21_fabs(i), fabs(i), 1e-7);
    MakeFree_2Param(&School_lib, &Original_lib);
}

START_TEST(floor_test_1) {
    long double School_lib = s21_floor(s21_NAN);
    long double Original_lib = floor(s21_NAN);
    ck_assert_double_ne(School_lib, Original_lib);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_floor(0);
    Original_lib = floor(0);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_floor(1);
    Original_lib = floor(1);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_floor(0.000001);
    Original_lib = floor(0.000001);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_floor(153687.673452);
    Original_lib = floor(153687.673452);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_floor(-153687.673452);
    Original_lib = floor(-153687.673452);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_floor(-153682);
    Original_lib = floor(-153682);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);
}

START_TEST(fmod_test_1) {
    long double School_lib = s21_fmod(484848.84848, 3.5);
    long double Original_lib = fmod(484848.84848, 3.5);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_fmod(12115.32423, 324.4);
    Original_lib = fmod(12115.32423, 324.4);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_fmod(10000, 5);
    Original_lib = fmod(10000, 5);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_fmod(0.000001, 0.3);
    Original_lib = fmod(0.000001, 0.3);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_fmod(153687.673452, -32112.32);
    Original_lib = fmod(153687.673452, -32112.32);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_fmod(-153687.673452, 234);
    Original_lib = fmod(-153687.673452, 234);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_fmod(-153682, -23);
    Original_lib = fmod(-153682, -23);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);
}

START_TEST(sqrt_test_1) {
    long double School_lib = s21_sqrt(s21_NAN);
    long double Original_lib = sqrt(s21_NAN);
    ck_assert_double_ne(School_lib, Original_lib);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_sqrt(0);
    Original_lib = sqrt(0);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_sqrt(1);
    Original_lib = sqrt(1);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_sqrt(65536);
    Original_lib = sqrt(65536);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_sqrt(0.000001);
    Original_lib = sqrt(0.000001);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    School_lib = s21_sqrt(153687.673452);
    Original_lib = sqrt(153687.673452);
    ck_assert_ldouble_eq_tol(School_lib, Original_lib, TEST_EPS);
    MakeFree_2Param(&School_lib, &Original_lib);

    for (double i = 0; i <= 1000; i++)
    ck_assert_ldouble_eq_tol(s21_sqrt(i), sqrtl(i), 1e-7);
    MakeFree_2Param(&School_lib, &Original_lib);
}

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int nf;

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, sin_test_1);
  tcase_add_test(tc1_1, sin_test_2);
  tcase_add_test(tc1_1, sin_test_3);
  tcase_add_test(tc1_1, sin_test_4);
  tcase_add_test(tc1_1, cos_test_1);
  tcase_add_test(tc1_1, cos_test_2);
  tcase_add_test(tc1_1, cos_test_3);
  tcase_add_test(tc1_1, cos_test_4);
  tcase_add_test(tc1_1, tan_test_1);
  tcase_add_test(tc1_1, tan_test_2);
  tcase_add_test(tc1_1, tan_test_3);
  tcase_add_test(tc1_1, tan_test_4);
  tcase_add_test(tc1_1, acos_test_1);
  tcase_add_test(tc1_1, acos_test_2);
  tcase_add_test(tc1_1, asin_test_1);
  tcase_add_test(tc1_1, asin_test_2);
  tcase_add_test(tc1_1, atan_test_2);
  tcase_add_test(tc1_1, pow_test_1);
  tcase_add_test(tc1_1, pow_test_2);
  tcase_add_test(tc1_1, pow_test_3);
  tcase_add_test(tc1_1, pow_test_4);
  tcase_add_test(tc1_1, pow_test_5);
  tcase_add_test(tc1_1, pow_test_6);
  tcase_add_test(tc1_1, log_test_1);
  tcase_add_test(tc1_1, abs_test_1);
  tcase_add_test(tc1_1, abs_test_2);
  tcase_add_test(tc1_1, ceil_test_1);
  tcase_add_test(tc1_1, exp_test_1);
  tcase_add_test(tc1_1, fabs_test_1);
  tcase_add_test(tc1_1, floor_test_1);
  tcase_add_test(tc1_1, fmod_test_1);
  tcase_add_test(tc1_1, sqrt_test_1);

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}
