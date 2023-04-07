#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int f()
{
    int tot = rand();
    return tot;
}

int g()
{
    int variable;
    printf("%d\n", variable);
}

int main()
{
    srand(time(0));
    f();
    g();
    f();
    g();
}