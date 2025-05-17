#include <stdio.h>

int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1 , &num2, &num3);
    int max;

    if(num1> num2)
    {
        if(num3 > num1)
            max=num3;
        else
            max= num1;
    }

    else
    {
        if(num3 > num2)
            max=num3;
        else
            max= num2;
    }

    printf("%d", max);
}