# UB7

Author: Tianlin Xiao.

##  Content

**An identifier, comment, string literal, character constant, or header name contains an invalid multibyte character or does not begin and end in the initial shift state (5.2.1.1).**

## Description

如果在标识符、注释、字符串字面量、字符常量、头文件名使用了非 ASCII 字符，比如来自不同语言或编码系统的字符，就会导致编译器或解释器出现问题。


## Code

```c
#include <stdio.h>
int main() {
    int a哈 =1;
    printf("%d\n",a哈);
    return 0;
}
```



## Configuration

#### Configuration 1.

```
MSVC version 1929
```



#### Configuration 2.

```
gcc version 8.1.0 
Target: x86_64-w64-mingw32
```

## Result of Different Configuration

#### Configuration 1.

```
- Compilation successful
- Output:1
```



#### Configuration 2.

```
4.c:3:6: error: stray '\345' in program
 int a?1;31mm^
4.c:3:7: error: stray '\223' in program
 int a錷01;31m^
4.c:3:8: error: stray '\210' in program
 int a?1;31mmm =1;
        ^
4.c:4:16: error: stray '\345' in program
 printf("%d\n",a?1;31mm^
4.c:4:17: error: stray '\223' in program
 printf("%d\n",a錷01;31m^
4.c:4:18: error: stray '\210' in program
 printf("%d\n",a?1;31mmm);
```



