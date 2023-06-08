#include "stdio.h"
#include "stdlib.h"

void test_example_1() {
    int *p1;

    printf("p1 = 0x%p\n", p1);
    printf("*p1 = %d\n", *p1);
}

void test_example_2() {
    int a;
    int *p2 = (int*)((char*)&a + 1);

    printf("&a = 0x%p\n", &a);
    printf("p2 = 0x%p\n", p2);
    printf("*p2 = %d\n", *p2);
}

void test_example_3() {
    int *p3 = (int*) malloc(4);

    printf("p3 = 0x%p\n", p3);

    free(p3);
    printf("*p3 = %d\n", *p3);
}

int main() {
    test_example_1();
//    test_example_2();
//    test_example_3();
}