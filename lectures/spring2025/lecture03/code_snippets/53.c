#include <stdio.h>
int main()
{
    int i, j = 20;
    i= j;

    printf("i = %d\n", i);

    double d = 65536;
    double b = d;

    printf("d = %.1lf\nb = %.1lf\n", d, b);

    d = b = i = j = 0;

    printf("j = %d, i = %d, b= %.1lf, d = %.1lf", j , i ,b, d);

}