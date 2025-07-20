#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    double i = 1.0;
    double sum = 0;

    while(i <= n)
    {
        sum += i/ (i+1);
        i++;
    }

    printf("sum = %lf\n", sum);

}