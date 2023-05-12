#include<stdio.h>

int main() {
    char str = "hello world";
    char str1[] = "hello world";
    // str[2] = 'x';
    // printf("%s", str);
    if (str1 == str) {
        printf("EQL");
    } else {
        printf("NEQ");
    }
}