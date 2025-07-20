#include <stdio.h>
double my_fabs( double x)
{
    double res;
    if(x >= 0)
        res = x;
    else
        res = -x;

    return res;

}

int main()
{
    double d = -10;
    double b;
    b = my_fabs(d);
    printf("b = %lf\n", b);
    b = my_fabs(-2 * d);
    printf("b = %lf\n", b);
}