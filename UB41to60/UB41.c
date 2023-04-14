#include<stdio.h>

int div(int x, int y) {
    return x / y;       // Undefined behavior! (1)
}

int main() {
    int x = 10;
    int y = 0;
    printf("%d", div(x, y));
}