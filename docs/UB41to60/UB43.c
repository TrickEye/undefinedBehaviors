#include<stdio.h>

int main() {
    char arr[10] = {0};
    char *p1 = arr;
    char *p2 = p1 + 0xffffff00;
    printf("sizeof pointer in this environment is %d\n", sizeof(p1));
    printf("p1  = %016llx or %08x or %x\n", p1, p1);
    printf("p2  = %016llx or %08x or %x\n", p2, p2);
    if (p2 > p1) {
        printf("p2 > p1");
    } else if (p2 < p1) {
        printf("p2 < p1");
    } else if (p1 == p2) {
        printf("p1 == p2");
    }
}