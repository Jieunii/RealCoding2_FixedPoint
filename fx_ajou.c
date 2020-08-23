#include "fx_ajou.h"

#define _FX_SYSTEM _FX_S4716
#define _FX_CALCULATION_TYPE _FX_DOUBLE

#if _FX_SYSTEM == _FX_S1615
typedef fx_s1615 fx_type;
#elif _FX_SYSTEM == _FX_S3231
typedef fx_s3231 fx_type;
#elif _FX_SYSTEM == _FX_S1516
typedef fx_s1516 fx_type;
#elif _FX_SYSTEM == _FX_S3132
typedef fx_s3132 fx_type;
#elif _FX_SYSTEM == _FX_S2308
typedef fx_s2308 fx_type;
#elif _FX_SYSTEM == _FX_S4716
typedef fx_s4716 fx_type;
#endif

#if _FX_CALCULATION_TYPE == _FX_DOUBLE

fx_type fx_mul(fx_type fa, fx_type fb){
    fx_type result = 0;

#if _FX_SYSTEM == _FX_S1615
    result = FX_S1615_MUL(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    result = fx_3231_double_mul(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_double_mul(fx_s1516_to_double(fa), fx_s1516_to_double(fb));
#elif _FX_SYSTEM == _FX_S3132
    result = fx_s3132_mul(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    result = FX_S2308_MUL(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    result = FX_S4716_DOUBLE_MUL(fa, fb);
#endif 

    return result;
}

fx_type fx_div(fx_type fa, fx_type fb){
    fx_type result = 0;

#if _FX_SYSTEM == _FX_S1615
    result = FX_S1615_DIV(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    result = fx_3231_double_div(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_double_div(double_to_fx_s1516(fa), double_to_fx_s1516(fb));
#elif _FX_SYSTEM == _FX_S3132
    result = fx_s3132_div(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    result = FX_S2308_DIV(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    result = FX_S4716_DOUBLE_DIV(fa, fb);
#endif 

    return result;
}

fx_type fx_pow(fx_type fa, fx_type fb)
{
    fx_type result = 0;

#if _FX_SYSTEM == _FX_S1615
    result = power_fx_s1615_int(fa, FX_S1615_INT_TO_DOUBLE(fb));
#elif _FX_SYSTEM == _FX_S3231
    result = fx_3231_double_power(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_double_pow(fx_s1516_to_double(fa), fx_s1516_to_double(fb));
#elif _FX_SYSTEM == _FX_S3132
    result = fx_s3132_power2(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    result = fx_s2308_double_pow(fa, FX_S2308_TO_DOUBLE(fb));
#elif _FX_SYSTEM == _FX_S4716
    result = FX_S4716_DOUBLE_POW(fa);
#endif 
    return result;
}


fx_type fx_sqrt(fx_type fa)
{
    fx_type result = 0;

#if _FX_SYSTEM == _FX_S1615
    result = sqrt_fx_s1615_int(fa);
#elif _FX_SYSTEM == _FX_S3231
    result = fx_3231_double_sqrt(fa);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_double_sqrt(fx_s1516_to_double(fa));
#elif _FX_SYSTEM == _FX_S3132
    result = fx_s3132_sqrt2(fa);
#elif _FX_SYSTEM == _FX_S2308
    result = fx_s2308_double_sqrt(fa);
#elif _FX_SYSTEM == _FX_S4716
    result = FX_S4716_DOUBLE_SQRT(FX_S4716_TO_DOUBLE(fa));
#endif 

    return result;
}

fx_type fx_pi(){
    fx_type result = 0;

#if _FX_SYSTEM == _FX_S1615
    result = FX_S1615_DOUBLE_TO_INT(PI);        //no macro
#elif _FX_SYSTEM == _FX_S3231
    result = FX_PI;
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_PI;
#elif _FX_SYSTEM == _FX_S3132
    result = _FX_S3132_PI();
#elif _FX_SYSTEM == _FX_S2308
    result = FX_PI;
#elif _FX_SYSTEM == _FX_S4716
    result = FX_PI;
#endif 
    
    return result;
}

fx_type fx_inv_pi(){
    fx_type result = 0;

#if _FX_SYSTEM == _FX_S1615
    result = FX_S1615_DOUBLE_TO_INT(INV_PI);    //no macro
#elif _FX_SYSTEM == _FX_S3231
    result = doubleToFx(3.141592653);     //no macro
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_INVERSE_PI;
#elif _FX_SYSTEM == _FX_S3132
    result = _FX_S3132_PI_REVERSE();
#elif _FX_SYSTEM == _FX_S2308
    result = FX_INV_PI;
#elif _FX_SYSTEM == _FX_S4716
    result = FX_INV_PI;
#endif 
    
    return result;
}

#elif _FX_CALCULATION_TYPE == _FX_LONGLONG

fx_type fx_mul1(fx_type fa, fx_type fb)
{
    fx_type result = 0;

#if _FX_SYSTEM == _FX_S1615
    result = FX_1615_LONGLONG_MUL1(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    result = fx_3231_longlong_mul1(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_longlong_mul0(fa, fb);
#elif _FX_SYSTEM == _FX_S3132
    result = fx32_mul(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    result = FX_S2308_L_MUL(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    result = FX_S4716_LONGLONG_MUL1(fa, fb);
#endif 

    return result;
}

fx_type fx_mul2(fx_type fa, fx_type fb)
{
    fx_type result = 0;

#if _FX_SYSTEM == _FX_S1615
    result = FX_1615_LONGLONG_MUL2(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    result = fx_3231_longlong_mul2(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_longlong_mul2(fa, fb);
#elif _FX_SYSTEM == _FX_S3132
    result = fx32_mul1(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    result = FX_S2308_L_MUL3(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    result = FX_S4716_LONGLONG_MUL2(fa, fb);
#endif 

    return result;
}

fx_type fx_mul3(fx_type fa, fx_type fb)
{
    fx_type result = 0;

#if _FX_SYSTEM == _FX_S1615
    result = FX_1615_LONGLONG_MUL3(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    result = fx_3231_longlong_mul3(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_longlong_mul4(fa, fb);
#elif _FX_SYSTEM == _FX_S3132
    result = fx32_mul2(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    result = FX_S2308_L_MUL4(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    result = FX_S4716_LONGLONG_MUL3(fa, fb);
#endif 

    return result;
}

fx_type fx_div1(fx_type fa, fx_type fb)
{
    fx_type result = 0;
    
#if _FX_SYSTEM == _FX_S1615
    result = FX_1615_LONGLONG_DIV01(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    result = fx_3231_longlong_div1(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_longlong_div0(double_to_fx_s1516(fa), double_to_fx_s1516(fb));
#elif _FX_SYSTEM == _FX_S3132
    result = fx_s3132_div(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    result = FX_S2308_L_DIV1(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    result = FX_S4716_LONGLONG_DIV1(fa, fb);
#endif

    return result;
}

fx_type fx_div2(fx_type fa, fx_type fb)
{
    fx_type result = 0;

#if _FX_SYSTEM == _FX_S1615
    result = FX_1615_LONGLONG_DIV02(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    result = fx_3231_longlong_div2(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_longlong_div1(double_to_fx_s1516(fa), double_to_fx_s1516(fb));
#elif _FX_SYSTEM == _FX_S3132
    result = fx_s3132_div1(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    result = FX_S2308_L_DIV2(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    result = FX_S4716_LONGLONG_DIV2(fa, fb);
#endif 


    return result;
}

fx_type fx_div3(fx_type fa, fx_type fb)
{
    fx_type result = 0;

#if _FX_SYSTEM == _FX_S1615
    result = FX_1615_LONGLONG_DIV03(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    result = fx_3231_longlong_div3(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_longlong_div2(double_to_fx_s1516(fa), double_to_fx_s1516(fb));
#elif _FX_SYSTEM == _FX_S3132
    result = fx_s3132_div2(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    result = FX_S2308_L_DIV2(fa, fb);   //no macro
#elif _FX_SYSTEM == _FX_S4716
    result = FX_S4716_LONGLONG_DIV3(fa, fb);
#endif 

    return result;
}
#endif

fx_type fx_add(fx_type fa, fx_type fb)
{
    fx_type result = 0;
    
#if _FX_CALCULATION_TYPE == _FX_DOUBLE

#if _FX_SYSTEM == _FX_S1615
    result = FX_S1615_ADD(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    result = fx_3231_double_add(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_double_add(double_to_fx_s1516(fa), double_to_fx_s1516(fb));
#elif _FX_SYSTEM == _FX_S3132
    result = fx_s3132_add(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    result = FX_S2308_ADD(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    result = FX_S4716_DOUBLE_ADD(fa, fb);
#endif 

#elif _FX_CALCULATION_TYPE == _FX_LONGLONG
    result = fa + fb;
#endif 

    return result;
}

fx_type fx_sub(fx_type fa, fx_type fb)
{
    fx_type result = 0;

#if _FX_CALCULATION_TYPE == _FX_DOUBLE

#if _FX_SYSTEM == _FX_S1615
    result = FX_S1615_SUB(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    result = fx_3231_double_sub(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_double_sub(double_to_fx_s1516(fa), double_to_fx_s1516(fb));
#elif _FX_SYSTEM == _FX_S3132
    result = fx_s3132_sub(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    result = FX_S2308_SUB(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    result = FX_S4716_DOUBLE_SUB(fa, fb);
#endif 

#elif _FX_CALCULATION_TYPE == _FX_LONGLONG
    result = fa - fb;
#endif 

    return result;
}


fx_type fx_sin(fx_type fa)
{
    fx_type result = 0;

#if _FX_CALCULATION_TYPE == _FX_DOUBLE

#if _FX_SYSTEM == _FX_S1615
    result = sine_fx_s1615_int(fa);
#elif _FX_SYSTEM == _FX_S3231
    result = fx_3231_double_sin(fa);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_double_sin(fx_s1516_to_double(fa));
#elif _FX_SYSTEM == _FX_S3132
    result = fx_s3132_sin2(fa);
#elif _FX_SYSTEM == _FX_S2308
    result = fx_s2308_double_sine(fa);
#elif _FX_SYSTEM == _FX_S4716
    result = FX_S4716_DOUBLE_SINE(fa);
#endif 

#elif _FX_CALCULATION_TYPE == _FX_LONGLONG

#if _FX_SYSTEM == _FX_S1615
    result = sine_fx_s1615_longlong(fa);
#elif _FX_SYSTEM == _FX_S3231
    result = fx_3231_longlong_sin(fa);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_longlong_sin(fa);
#elif _FX_SYSTEM == _FX_S3132
    result = fx32_sind(fa);
#elif _FX_SYSTEM == _FX_S2308
    result = fx_s2308_sind(fa);
#elif _FX_SYSTEM == _FX_S4716
    result = fx_s4716_longlong_sin(fa);
#endif 

#endif 

    return result;
}

fx_type double_to_fx(double a){
    fx_type result = 0;

#if _FX_SYSTEM == _FX_S1615
    result = FX_S1615_DOUBLE_TO_INT(a);
#elif _FX_SYSTEM == _FX_S3231
    result = doubleToFx(a);
#elif _FX_SYSTEM == _FX_S1516
    result = double_to_fx_s1516(a);
#elif _FX_SYSTEM == _FX_S3132
    result = double_to_fx_s3132(a);
#elif _FX_SYSTEM == _FX_S2308
    result = DOUBLE_TO_FX_S2308(a);
#elif _FX_SYSTEM == _FX_S4716
    result = DOUBLE_TO_FX_S4716(a);
#endif 
    
    return result;
}

double fx_to_double(fx_type fa){
    double result = 0;

#if _FX_SYSTEM == _FX_S1615
    result = FX_S1615_INT_TO_DOUBLE(fa);
#elif _FX_SYSTEM == _FX_S3231
    result = fxToDouble(fa);
#elif _FX_SYSTEM == _FX_S1516
    result = fx_s1516_to_double(fa);
#elif _FX_SYSTEM == _FX_S3132
    result = fx_s3132_to_double(fa);
#elif _FX_SYSTEM == _FX_S2308
    result = FX_S2308_TO_DOUBLE(fa);
#elif _FX_SYSTEM == _FX_S4716
    result = FX_S4716_TO_DOUBLE(fa);
#endif 
    
    return result;
}

int main(void)
{

    double a,b;
    printf("This is program to test fixed point arithmetic by fx_ajou\n");
    printf("-------------------------------------------------------\n");

    printf("Type two double numbers a, b : ");
    fflush(stdout);
    scanf("%lf %lf", &a, &b);

    fx_type fa, fb;
    fa = double_to_fx(a);
    fb = double_to_fx(b);
    
    printf("1. Add: %lf\n",  fx_to_double(fx_add(fa, fb)));
    printf("2. Sub: %lf\n",   fx_to_double(fx_sub(fa, fb)));
    
#if _FX_CALCULATION_TYPE == _FX_LONGLONG
    int num = 5;
    printf("3. Mul1: %lf\n",   fx_to_double(fx_mul1(fa,  fb)));
    printf("   Mul2: %lf\n",   fx_to_double(fx_mul2(fa,  fb)));
    printf("   Mul3: %lf\n",   fx_to_double(fx_mul3(fa,  fb)));
    
    printf("4. Div1: %lf\n",   fx_to_double(fx_div1(fa, fb)));
    printf("   Div2: %lf\n",   fx_to_double(fx_div2(fa, fb)));
    printf("   Div3: %lf\n",   fx_to_double(fx_div3(fa, fb)));

#elif _FX_CALCULATION_TYPE == _FX_DOUBLE
    int num = 11;
    printf("3. Mul: %lf\n",   fx_to_double(fx_mul(fa,  fb)));
    printf("4. Div: %lf\n",   fx_to_double(fx_div(fa, fb)));
    printf("5. Sqrt: %lf\n",   fx_to_double(fx_sqrt(fa)));
    printf("6. Pow: %lf\n",  fx_to_double(fx_pow(fa,fb)));
    printf("7. PI: %lf\n", fx_pi());
    printf("8. Inv PI:\n", fx_inv_pi());
    printf("9. Double to FX: %lf %lf\n", fa, fb);
    printf("10. FX to Double: %lf %lf\n", fx_to_double(fa), fx_to_double(fb));
#endif
    printf("%d. Sin(a): %lf\n", num, fx_to_double(fx_sin(fa)));

    return 0;
}
