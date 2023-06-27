#include <stdio.h>
int main() {
    char a[16] = {1,2,3,4,5,6,7,8};
    int* p = (int*)a;
    int* q = (int*)(a + 1); // Either this line or previous line produces a UB
    printf("0x%04X, 0x%04X\n", *p, *q);
    return 0;
}