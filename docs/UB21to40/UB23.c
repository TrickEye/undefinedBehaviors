#include <stdio.h>
int main() {
    int a;
    int* p = &a;
    unsigned char b = (unsigned char)p;  // UB. sizeof(unsigned char) == 1 and for most platform sizeof(int*) > 1
    printf("0x%X, 0x%X\n",(uintptr_t)p,b);
    return 0;
}