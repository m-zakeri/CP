#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    if(number<0)
        number *= -1;
    
    while(number>1)
        number -= 2;
    
    if(number == 0)
        printf("Even");
    else
        printf("Odd");
}