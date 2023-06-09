# Template

Template author: Tianlin Xiao.

##  Definition

**An identifier, comment, string literal, character constant, or header name contains an invalid multibyte character or does not begin and end in the initial shift state (5.2.1.1).**

## Description

5.2.1.1中对该行为的解释（中文解释）。

当一个标识符、注释、字符串常量、字符常量、或头文件名包括了一个不合法的多字节字符，或者不以initial shift state开始或结束的。

必要时应当附上更细节的解释。

## Code

```c title="UBXX.c"
int main() {
    return 0;
}
```

## Configurations

=== "Configuration 1."

    clang version 15.0.4

    `Target:x86_64-win64-windows-gnu`

=== "Configuration 2."

    gcc version 8.1.0 

    `Target: x86_64-w64-mingw32`

## Behaviors

=== "Configuration 1."

    一些在Configuration 1里面的行为描述。包括能否编译，什么输出(stdout, stderr)等。

=== "Configuration 2."

    * Compilation error (Error message)

## Advice

建议除了必要情况、字符串常量之外，不使用任何多字节字符进行C语言程序代码编写。