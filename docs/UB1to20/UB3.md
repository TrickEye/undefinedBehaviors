# UB3

Template author: Xiangzhi Liu.

##  Definition

**Token concatenation produces a character sequence matching the syntax of a universal character name (5.1.1.2).**

## Description

universal character name 语法定义如下

+ \uxxxx
+ or \Uxxxxxxxx

其中 `x` 代表 16 进制数字。例如 `\uabcd` 或者 `\U12345678` 满足正确的语法要求。

Token concatenation 指预处理中的 `##` 运算符。

## Code

```c title="UB3.c"
#include<stdio.h>
#define C(x,y) x##y
#define X(x) #x
#define Y(x) X(x)

int main()
{
    printf("%s\n",Y(C(\u,0040)));
    return 0;
}
```

## Configurations

=== "Configuration 1."

    gcc version 4.9.2 

    `Target: x86_64-w64-mingw32`

## Behaviors

=== "Configuration 1."

    Compiled and run successfully with no warning.

    Output: `@`

## Advice

预处理 token 中不要包含不完整的 universal character name