#include<stdio.h>
#define C(x,y) x##y
#define X(x) #x
#define Y(x) X(x)

int main()
{
    printf("%s\n",Y(C(\u,0040)));
    return 0;
}