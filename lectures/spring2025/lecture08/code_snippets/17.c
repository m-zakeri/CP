#include <stdio.h>

void sub(double a , double b)
{
    double res = a - b;
    printf("Sub of %f and %f is %f\n", a, b, res);
}

int main()
{
    double d1 = 10, d2 = 20;
    sub(56.0, 6.0); 
    sub(d1, d2); 
    sub(d1, d2 + d2);
}