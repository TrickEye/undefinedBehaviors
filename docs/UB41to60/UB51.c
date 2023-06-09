#include  <stdio.h>
long long longInt = 0x00007fffffffffff;
int main(void)
{
    char *src = ((char *) &longInt) + 5;
    printf("long:\t%lld\nchar:\t%d\n", longInt, *src);
}
