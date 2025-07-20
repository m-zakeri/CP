#include <stdio.h>
double fabs(double x)
{
    if(x<=0)
        return -x;
    return x;
}
int main()
{
    double d = -10;
    double b;
    b = fabs(d);
    printf("%lf\n", b);
    printf("%lf\n", fabs(-2 * b));
}