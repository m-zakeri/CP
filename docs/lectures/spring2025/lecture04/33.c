#include <stdio.h>
#include <math.h>

int main()
{
    double f = 36;
    printf("%lf\n", fabs(-f));

    printf("%lf\n", sqrt(f));

    printf("%lf\n", pow(f, 0.5));

    printf("%lf\n", ceil(-10.2));

    printf("%lf\n", ceil(10.2));

    printf("%lf\n", floor(-10.2));

    printf("%lf\n", floor(10.2));

    printf("%lf\n", fmax(10.1, 20.2));

    printf("%lf\n", fmin(10.1, 20.2));

    //رندش میکنه

    printf("%lf\n", rint(10.5));

    printf("%lf\n", rint(-10.2));

    printf("%lf\n", rint(20.6));

    printf("%lf\n", rint(-20.6));




}