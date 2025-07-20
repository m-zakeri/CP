#include <stdio.h>
#include <math.h>
int main()
{
    const double PI = 3.141592653589793;
    const double E = 2.7182818284590451;

    printf("%lf\n", sin(PI));

    printf("%lf\n", cos(PI/2));

    printf("%lf\n", acos(1));

    printf("%lf\n", log(E));

    printf("%lf\n", log(10));

    printf("%lf\n", exp(1));
}