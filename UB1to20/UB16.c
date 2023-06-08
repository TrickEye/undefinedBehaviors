#include  <stdio.h>
int main(void)
{
    double bigFloat = 9223372036854775807.0;
    int ovInt = bigFloat;
    printf("%d\n", ovInt);
}
