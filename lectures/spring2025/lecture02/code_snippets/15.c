#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    if(num == 0)
    {
        printf("0");
        return 0;
    }

    int fac=1, i=1;
    while(i <= num)
    {
        fac *= i;
        i++;
    }

    printf("%d", fac);
}