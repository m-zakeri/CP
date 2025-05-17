#include <stdio.h>

int main()
{
    int number; 
    scanf("%d", &number);

    while( number>1 || number<-2)
    {
        if(number <0)
            number +=2;
        else
            number -=2;
    }

    if(number == 0 )
        printf("Even");
    else
        printf("Odd");

}