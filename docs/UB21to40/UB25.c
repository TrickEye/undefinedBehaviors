#include <stdio.h>
int f(int x)
{
    return x + 1;
}

int main() {
    int (*pf)(int) = f;
    double a = (*(double(*)(int))pf)(1);
    printf("%lf\n", a);
    return 0;
}