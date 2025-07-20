#include <stdio.h>

int main()
{
    printf("%f\n", 100.5f);

    float f = -2;
    double d = 100;
    printf("%f, %lf\n", f, d);
    printf("%f, %e\n", 1e3, 1e3);
}