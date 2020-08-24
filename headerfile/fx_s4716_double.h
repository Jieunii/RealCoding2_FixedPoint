#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

typedef long long fx_s4716;

#define F_POWER_2_16 65536.0
#define F_POWER_2_8 256.0

#ifndef FIX_TO_DOUBLE
#define FIX_TO_DOUBLE(a) (a)/(F_POWER_2_16)
#endif
#ifndef DOUBLE_TO_FIX
#define DOUBLE_TO_FIX(a) ((a)*(F_POWER_2_16))
#endif

#define FX_S4716_DOUBLE_ADD(a, b) ((a)+(b))
#define FX_S4716_DOUBLE_SUB(a, b) ((a)-(b))
#define FX_S4716_DOUBLE_MUL(a, b) (DOUBLE_TO_FIX((FIX_TO_DOUBLE(a))*(FIX_TO_DOUBLE(b))))
#define FX_S4716_DOUBLE_DIV(a, b) (DOUBLE_TO_FIX((FIX_TO_DOUBLE(a))/(FIX_TO_DOUBLE(b))))

#ifndef FX_PI
#define FX_PI (DOUBLE_TO_FIX(M_PI))
#endif
#ifndef FX_INV_PI
#define FX_INV_PI (DOUBLE_TO_FIX(1/(M_PI)))
#endif
#define FX_S4716_DOUBLE_SQRT(a) ((sqrt(DOUBLE_TO_FIX(a)))/(F_POWER_2_8))
#define FX_S4716_DOUBLE_POW(a) ((pow(DOUBLE_TO_FIX(a), 2.0))/(F_POWER_2_16))
#define FX_S4716_DOUBLE_SINE(a) (sin(a))
