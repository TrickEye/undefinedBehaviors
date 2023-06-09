# UB4

Template author: Xiangzhi Liu.

##  Definition

**A program in a hosted environment does not define a function named main using one of the specified forms (5.1.2.2.1).**

## Description

在 hosted 环境下 `main` 函数的定义不与如下声明兼容

``` c
int main();
int main(int argc, char* argv[]);
```

或没有定义 `main` 函数

## Code

```c title="UB4.1.c"
#include<stdio.h>
void main()
{
    printf("void main()\n");
}
```

```c title="UB4.2.c"
#include<stdio.h>
double main()
{
    printf("double main()\n");
    return 1.0;
}
```

```c title="UB4.3.c"
// comands: xxx yyy zzz
void main(double x)
{
    printf("void main(double)\nx: %llf\n",x);
}
```

```c title="UB4.4.c"
#include<stdio.h>
// comands: xxx yyy zzz
int main(double x,char z)
{
    printf("int main(double)\nx: %lf\nz:%c\n",x,z);
    return 0;
}
```

## Configurations

=== "Configuration 1."

    gcc version 4.9.2 

    `Target: x86_64-w64-mingw32`

## Behaviors

=== "Configuration 1."
UB4.1.c:
    Compiled and run successfully with a warning info: `return type of 'main' is not 'int' [-Wmain]`

    Output: `void main()`
UB4.2.c:
    Compiled and run successfully with a warning info: `return type of 'main' is not 'int' [-Wmain]`

    Output: `double main()`

    Return value: 0
UB4.3.c:
    Compiled and run successfully with warning infos: 
    + return type of 'main' is not 'int' [-Wmain]
    + first argument of 'main' should be 'int' [-Wmain]
    + 'main' takes only zero or two arguments [-Wmain]

    Output: 
```
void main(double)                                                                                    
x: 1250137480162850900000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.000000
```
UB4.4.c:
    Compiled and run successfully with warning infos: 
    + first argument of 'main' should be 'int' [-Wmain]
    + second argument of 'main' should be 'char **' [-Wmain]

    Output: 
```
int main(double)
x: 1250137480162850900000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.000000
z:?  
```
## Advice

定义与标准兼容的 main 函数。