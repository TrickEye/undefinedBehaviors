#include <stdio.h>

int main()
{
    register int arr[3] = {0};
    printf("%d", arr[2]); // undefined behavior! (1)
}
