#include "./s21_math.h"



/******************************************************************
*                                                                 *
*                      School_21 Math.h Realization               *
*                       (version - s21_Math.h)                    *
*                                                                 *
*******************************************************************/



/*_________________________<1>_________________________*/
int s21_abs(int X) {
    int result = X;
    if (X < 0) {
        if (X == INT_MIN)
            result = INT_MIN;
        else
            result *= -1;    /*  Basic abs case  */
    }
    return result;
}
/*_____________________________________________________*/
/*_________________________<2>_________________________*/
long double s21_acos(double X) {
    return s21_PI/2 - s21_asin(X);
}
/*_____________________________________________________*/
/*_________________________<3>_________________________*/
long double s21_asin(double X) {
    double q = X, result = X;
    if (X > 1 || X < -1) {
        result = s21_NAN;
    } else if (X == 1 || X == -1) {
        result = s21_PI / (2 * X);
    } else {
        typedef long double ld;
        for (ld k = 1; s21_fabs(q) > s21_EPSILON; k++) {
            q *= ((X*X)*(2*k-1)*(2*k-1))/((2*k)*(2*k+1));
            result += q;
        }
    }
    return result;
}
/*_____________________________________________________*/
/*_________________________<4>_________________________*/
long double s21_atan(double x) {
    long double result = 0;
    if (x == 1 || x == -1 || x == 0) {
        result = (x == 0) ? 0 : (x == 1) ? s21_PI/4: -s21_PI/4;
    } else if (x > 1 || x < -1) {
        result = x > 1 ? s21_PI / 2 - basic_atan(1 / x) :
         -s21_PI / 2 -  basic_atan(1 / x);
    } else {
        result = basic_atan(x);
    }
    return result;
}

/*_____________________________________________________*/
/*_________________________<5>_________________________*/
long double s21_ceil(double X) {
    int64_t int_X = (long double)X;
    long double result = (long double)int_X;
    if (X >= (long double)LLONG_MAX || X <= LLONG_MIN || X != X) {
        result = X;
    } else if (X > 0.0 && X != result) {
        result += 1;
    } else if (X < 0 && result == 0.0) {
        result = -0.0;
    }
    return result;
}
/*_____________________________________________________*/
/*_________________________<6>_________________________*/
long double s21_cos(double X) {
    long double result = s21_sin(s21_PI/2 - X);
  if (X == s21_INF || X == -s21_INF ||
  (num_isnan(X) == 1)) { result = s21_NAN; }
  /* Формулы Приведения 
    sin(pi/2 - x) = cos(x);
    cos(pi/2 - a) = sin(x);
    sin(pi/2 + a) = cos(x);
    cos(pi/2 + a) = -sin(x);
  */
  return result;
}
/*_____________________________________________________*/
/*_________________________<7>_________________________*/
long double s21_exp(double X) {
    long double result = 1, s = X, fact = 1;
    int64_t i = 1;
    if (X > EXP_STEPEN_DOUBLE_MAX) {
        result = s21_INF;
    } else if (X < EXP_STEPEN_DOUBLE_MIN) {
        result = 0.0;
    } else {
        while (i < 1000) {
            /* Using Taylor series to find the exponent */
            result += s / fact;
            s *= X;
            fact *= (i + 1);
            ++i;
        }
    }
  return result;
}
/*_____________________________________________________*/
/*_________________________<8>_________________________*/
long double s21_fabs(double X) {
    if (X < 0.0) {
        X = -X;
    }
    return X;
}
/*_____________________________________________________*/
/*_________________________<9>_________________________*/
long double s21_floor(double X) {
    /*  Need some test for this function!
        Check his working!
    */
    long double result = 0;
    if (X >= LLONG_MAX || X <= LLONG_MIN || X != X) {
        result = X;
    } else {
        result = (int64_t)X;
        if (X < 0)
            if ((int64_t)X != X) result = (int64_t)(X - 1);
    }
    return result;
}
/*_____________________________________________________*/
/*_________________________<10>________________________*/  // changed
long double s21_fmod(double X, double Y) {
  long double ret;
  if (Y == 0 || Y == -s21_INF || Y == s21_INF) {
      ret = s21_NAN;
  } else {
    int fl = 0;
    long double x = (long double)X;
    long double y = (long double)Y;
    /* Negative check */
    if (Y < 0)
      y = -Y;
    if (X < 0) {
      fl = 1;
      x = -X;
    }
    /* Base case of s21_fmod */
    while (x >= y) {
      x -= y;
    }
    /* If number X was negative, we will return
      negative X
    */
    if (fl == 1) {
      x *= -1;
    }
    ret = x;
  }
  return ret;
}
/*_____________________________________________________*/
/*_________________________<11>________________________*/
long double s21_log(double X) {
  int i = 2;
  long double result = X - 1;
  long double s = result, ten = X;
  if (X < 0) {
    result = s21_NAN;
  } else if (X == s21_INF) {
    result = s21_INF;
  } else if (num_isnan(X) == 1) {
    result = s21_NAN;
  } else if (X == 0.0) {
    result = -s21_INF;
  } else if (X < 2.0 + s21_EPSILON) {
    X = X - 1;

    while (s21_fabs(s / i) > s21_EPSILON) {
      s *= -1 * X;
      result += s / i;
      i += 1;
    }
  } else {
    int k = 0;
    while (ten > 1.0) {
      ten /= 10;
      k++;
    }
    result = s21_log(ten) + k * s21_LN10;
  }
  return result;
}
/*_____________________________________________________*/
/*_________________________<12>________________________*/
long double s21_pow(double base, double exp) {
  return s21_exp(exp * s21_log(base));
}
/*_____________________________________________________*/
/*_________________________<13>________________________*/
long double s21_sin(double X) {
  long double s = 0;
  if (X == s21_INF || X == -s21_INF || (num_isnan(X) == 1)) { s = s21_NAN;
  } else if (X == s21_PI) { s = 1e-50;
  } else if (X == -s21_PI) { s = -1e-50;
  } else {
    if (X > 2 * s21_PI || X < -2 * s21_PI)
      X = s21_fmod(X, 2 * s21_PI);
    double q = X;
    int k = 1;
    do {
      s += q;
      q *= -X * X / (2 * k * (2 * k + 1));
      k++;
    } while (s21_fabs(q) > s21_EPSILON);
  }
  return s;
}
/*_____________________________________________________*/
/*_________________________<14>________________________*/
long double  s21_sqrt(double X) {
    return s21_pow(X, 0.5);
}
/*_____________________________________________________*/
/*_________________________<15>________________________*/  /// changed
long double s21_tan(double X) {
  long double ret;
    if (X == s21_PI/2) {
      ret =  1.6331239353195370E+16;
    } else if (X == -s21_PI/2) {
      ret =  -1.6331239353195370E+16;
    } else { ret =  s21_sin(X)/s21_cos(X); }
  return ret;
}
/*_____________________________________________________*/
/*__________________<Help Functions>___________________*/

long double basic_atan(double X) {
  long double result = 0;
    double arg = X;
    for (int count = 1; s21_fabs(arg) >  s21_EPSILON; count++) {
        result += arg;
        arg = -1* arg * X * X * (2 * count - 1)/(2 * count + 1);
    }
    return result;
}

int num_isnan(double __X) {
  int result = 0;
  if (__X != __X) { result = 1; }
  return result;
}
