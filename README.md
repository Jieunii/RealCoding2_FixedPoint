# aju_fx_team6
아주대학교 실전코딩2 fixed pint peratin

## 1. Fixed Pint

### 1.1 Fixed pint란?
* 고정 소수점이란 소수점을 사용하여 고정된 자리수의 소수를 나타내는 것이다.
* 맨 앞자리를 부호 비트로 사용하고 0일 경우 양수, 음일 경우 1을 사용한다.
* Fixed pint 연산의 경우 소수점을 미리 정해 놓기에 연산시에 값의 손실이 생길 수 있다.  
* FX_SYSTEM

    |FX_SYSTEM|Macr 값|sign bit|정수부|소수부|
    |---|---|---|---|---|
    |FX_S1615|1||||
    |FX_S3231|2||||
    |FX_S1516|3||||
    |FX_S3132|4||||
    |FX_S2308|5||||
    |FX_S4716|6||||

### 1.2 Fixed Pint peratin
|Functin|기능|
|---|---|
|fx_add|두 수의 합을 구한다.|
|fx_sub|두 수의 차를 구한다.|
|fx_mul|두 수의 곱을 구한다.|
|fx_div|두 수의 나눗셈을 구한다.|
|fx_sqrt|제곱근을 구한다.|
|fx_pw|제곱의 값을 구한다.|
|fx_sin|sine 값을 구한다.|

## 2. Cmparisn

### 2.1 Speed
1. FX_S1615
   
    |FX_SYSTEM|longlong_mul1|longlong_mul2|longlong_mul3|
    |---|:---:|:---:|:---:|
    |FX_S1615(32bit)|3|2|1|
    |FX_S1615(64bit)|3|2|1|

    |FX_SYSTEM|longlong_div1|longlong_div2|longlong_div3|
    |---|:---:|:---:|:---:|
    |FX_S1615(32bit)|3|2|1|
    |FX_S1615(64bit)|1|2|3|

2. FX_S3231
   
    |FX_SYSTEM|longlong_mul1|longlong_mul2|longlong_mul3|double_mul|
    |---|:---:|:---:|:---:|:---:|
    |FX_S3231(64bit)|1|3|2|4|

    |FX_SYSTEM|longlong_div1|longlong_div2|longlong_div3|double_div|
    |---|:---:|:---:|:---:|:---:|
    |FX_S3231|2|3|1|4|

3. FX_S1516
   
    |FX_SYSTEM|longlong_mul0|longlong_mul1|longlong_mul2|longlong_mul3|longlong_mul4|double_mul|
    |---|:---:|:---:|:---:|:---:|:---:|:---:|
    |FX_S1516(32bit)|4|1|2|3|6|5|

    |FX_SYSTEM|longlong_div0|longlong_div1|longlong_div2|double_div|
    |---|:---:|:---:|:---:|:---:|
    |FX_S1516(32bit)|3|2|1|4|

4. FX_S3132
   
    |FX_SYSTEM|longlong_mul|longlong_mul1|longlong_mul2|
    |---|:---:|:---:|:---:|
    |FX_S3132|1|3|2|

    |FX_SYSTEM|longlong_div|longlong_div1|longlong_div2|
    |---|:---:|:---:|:---:|
    |FX_S3132|1|3|2|

5. FX_S2308
   
    |FX_SYSTEM|longlong_mul1|longlong_mul2|longlong_mul3|longlong_mul4|double_mul|
    |---|:---:|:---:|:---:|:---:|:---:|
    |FX_S2308(32bit)|3|4|2|1|5|
    |FX_S2308(64bit)|4|3|2|1|5|

    |FX_SYSTEM|longlong_div1|longlong_div2|
    |---|:---:|:---:|
    |FX_S2308(32bit)|1|2|
    |FX_S2308(64bit)|1|2|

6. FX_S4716
   
    |FX_SYSTEM|longlong_mul1|longlong_mul2|longlong_mul3|double_mul|
    |---|:---:|:---:|:---:|:---:|
    |FX_S4716(32bit)|3|1|2|4|
    |FX_S4716(64bit)|2|3|4|1|

    |FX_SYSTEM|longlong_div1|longlong_div2|longlong_div2|
    |---|:---:|:---:|:---:|
    |FX_S4716(32bit)|1|2|3|
    |FX_S4716(64bit)|1|3|2|

### 2.2 Accuracy

## 3. Executin

### 3.1 Makefile