#include "fx_s2308_double.h"
#include <math.h>

#define TO_RADIAN(a) (a*(PI/180))

fx_s2308 fx_s2308_double_sine(fx_s2308 a){
	double f_a=FX_TO_DOUBLE(a);
	f_a=TO_RADIAN(f_a);
	return DOUBLE_TO_FX(sin(f_a));
}
fx_s2308 fx_s2308_double_sqrt(fx_s2308 a){
	double f_a=FX_TO_DOUBLE(a);
	return DOUBLE_TO_FX(sqrt(f_a));
}
fx_s2308 fx_s2308_double_pow(fx_s2308 a, double n){
	double f_a=FX_TO_DOUBLE(a);
	return DOUBLE_TO_FX(pow(f_a,n));
}
