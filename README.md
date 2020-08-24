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

* makefile을 통해 일일이 모든 .c파일을 컴파일할 필요 없이 'make' command로 실행파일을 생성할 수 있도록 함.

1. Make ( default )
기본적인 make 명령어로 생성되는 실행파일은 'fx_s4716'을 기반으로 'double'형의 값들을 변환하여 계산해주는 프로그램입니다.
```
$ make
```

2. make ( 기동 system 변경 )
실행파일을 만들때, 'fx_s4716'기반이 아닌, 다른 고정 소수점에 대한 계산을 할 때, 아래의 명령어를 사용.
```
$ make SYSTEM=_FX_SXXXX
```

3. make ( 자료형 변경 )
'double'형의 값들이 아닌, long long int 형의 값들을 변환할 때, 아래의 명령어를 사용.
```
$ make TYPE=_FX_LONGLONG
```

* 위의 2,3 번에 해당하는 명령어는 중복으로 적용하여 처리가 가능.
```
$ make SYSTEM=_FX_S2308 TYPE=_FX_LONGLONG
```

4. make로 생성된 파일 처리
make 명령어로 생성된 파일을 정리/제거하고 싶은 경우, 아래의 명령어를 사용.
```
$ make clean
```

## 4. Maintainers
|StudentID|Name|
|---|---|
|201420991|김영진|
|201620912|김민건|
|201620890|이상백|
|201723273|윤지은|

## Reference
[fx_s1615](https://git.ajou.ac.kr/realcoding2_team1/battle_c_1)
[fx_s3231](https://git.ajou.ac.kr/fx_s3231/fx_s3231)
[fx_s1516](https://git.ajou.ac.kr/battle_c_3/fx_s1516)
[fx_s3132](https://git.ajou.ac.kr/battle_c_4/fx_s3132)
[fx_s2308](https://git.ajou.ac.kr/battle_C_5/fx_s2308)
[fx_s4716](https://git.ajou.ac.kr/battle_c_6/fx_s4716)