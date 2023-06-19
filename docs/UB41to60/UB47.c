#include <stdio.h>
#include <stdint.h>

int main() {
    int64_t* p = (int64_t*)0;
    int64_t* q = (int64_t*)0xFFFFFFFFFFFFFFFCLLU;
    ptrdiff_t l = q - p;
    printf("sizeof(ptrdiff_t) == %d\n", sizeof(ptrdiff_t));
#ifdef _WIN32
    printf("%I64d\n", l);
#else
	printf("%lld\n", l);
#endif
    return 0;
}