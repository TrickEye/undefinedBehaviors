#include<stdio.h>

int main() {
    register int arr[10] = {0};
    printf("%d", arr);      // undefined behavior! (1)
}