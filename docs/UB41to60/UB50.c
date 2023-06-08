#include  <stdio.h>
struct test {
    int id;
};
int main(void)
{
    struct test a;
    struct test b;
    struct test *pa = &a;
    struct test *pb = &b;
    printf("%d\n", pa > pb);
    return 0;
}
