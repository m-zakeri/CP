#include <stdio.h>
double x;

void fabs(void)
{
    x = (x>=0) ? x : -x;
}

int main()
{
    double b, d = -10;
    x = d;
    fabs();
    b = x;
    printf("b  = %f\n", b);
}