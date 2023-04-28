#include <stdio.h>
#include <limits.h>

int main() {
    int a = INT_MIN;
    int b = -1;
    printf("%d\n", a);
    int c = a / b;  // UB
    printf("%d", c);
}