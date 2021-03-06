//#pragma once
typedef int fx_s2308;
#define FX_TO_DOUBLE(a) ((double) (a/(256.0)))
#define FX_TO_FLOAT(a) ((float) (a/(256.0)))
#define FX_TO_INT(a) ((int) (a/(256.0)))
#define FX_TO_SHORT(a) ((short) (a/(256.0)))
#define DOUBLE_TO_FX(a) (((int)(a*(256.0))))
#define FX_ADD(a,b) ((a)+(b))
#define FX_SUB(a,b) ((a)-(b))
#define FX_MUL(a,b) DOUBLE_TO_FX(FX_TO_DOUBLE(a)*FX_TO_DOUBLE(b))
#define FX_DIV(a,b) DOUBLE_TO_FX(FX_TO_DOUBLE(a)/FX_TO_DOUBLE(b))
#ifndef PI
#define PI 3.141592
#endif
#ifndef FX_PI
#define FX_PI (DOUBLE_TO_FX(PI))
#endif
#define FX_INV_PI (DOUBLE_TO_FX(1/PI))


fx_s2308 fx_s2308_double_sine(fx_s2308 a);
fx_s2308 fx_s2308_double_sqrt(fx_s2308 a);
fx_s2308 fx_s2308_double_pow(fx_s2308 a, double n);