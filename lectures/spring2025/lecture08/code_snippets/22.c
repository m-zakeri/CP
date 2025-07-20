#include <stdio.h>
//wrong version
void add(double a, double b, double res)
{
    res = a + b;
    return;

}
int main()
{
    double d1 = 10.1, d2 = 20.2;
    double result = 0;
    add(56.0, 6.7, result);
    printf("result = %f\n", result);
    add(d1, d2, result);
    printf("result = %f\n", result);
}
    