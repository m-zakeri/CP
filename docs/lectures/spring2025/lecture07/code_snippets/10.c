#include <stdio.h>
int main()
{
    int negative=0, positive=0 , number;

    printf("Enter Zero to stop \n");

    scanf("%d", &number);
    if(number> 0)
            positive++;
        else if(number< 0)
            negative++;

    while(number != 0)
    {
        scanf("%d", &number);
        if(number> 0)
            positive++;
        else if(number< 0)
            negative++;
    }

    printf("The number of positive numbers = %d\n", positive);
    printf("The number of negative numbers = %d\n", negative);
}