#include "stdio.h"

int a;
int *p = &a;

int main() {
    printf("p = %p\n", p);
    printf("*p = %f\n", (float) p);
}