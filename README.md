# aju_fx_team6
아주대학교 실전코딩2 fixed point operation

## 1. Fixed Point

### 1.1 Fixed point란?
* 고정 소수점이란 소수점을 사용하여 고정된 자리수의 소수를 나타내는 것이다.
* 맨 앞자리를 부호 비트로 사용하고 0일 경우 양수, 음일 경우 1을 사용한다.
* Fixed point 연산의 경우 소수점을 미리 정해 놓기에 연산시에 값의 손실이 생길 수 있다.  
* FX_SYSTEM

    |FX_SYSTEM|Macro 값|sign bit|정수부|소수부|
    |---|:---:|:---:|---|---|
    |FX_S1615|1|O|16 bits|15 bits|
    |FX_S3231|2|O|32 bits|31 bits|
    |FX_S1516|3|O|15 bits|16 bits|
    |FX_S3132|4|O|31 bits|32 bits|
    |FX_S2308|5|O|23 bits|08 bits|
    |FX_S4716|6|O|47 bits|16 bits|

### 1.2 Fixed Point operation
|Function|기능|
|---|---|
|fx_add|두 수의 합을 구한다.|
|fx_sub|두 수의 차를 구한다.|
|fx_mul|두 수의 곱을 구한다.|
|fx_div|두 수의 나눗셈을 구한다.|
|fx_sqrt|제곱근을 구한다.|
|fx_pow|제곱의 값을 구한다.|
|fx_sin|sine 값을 구한다.|

## 2. Performance

### 2.1 Comparison Table

![fx](/uploads/03bc3497bc281029535f2dcfcbb4772f/fx.png)

## 3. Execution

### 3.1 Makefile