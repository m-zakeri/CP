#include <stdio.h>

int main()
{
    int i;
    short s;
    float f;
    double d;

    s = 'A';
    i = 'B';
    f = 4566;
    d = 5666;

    printf("s=%hu\ni=%d\nf=%.1f\nd=%.1lf",s,i,f,d);
}