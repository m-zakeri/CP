#include <stdio.h>

int main()
{
    int x,n;
    scanf("%d %d", &x, &n);

    int sum=0, term=1;

    int i=0;
    while(i <= n)
    {
        sum += term;

        term *= -x;
        i++;
    }

    printf("%d", sum);
}