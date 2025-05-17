#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    int sum_of_digits=0;

    while( number != 0)
    {
        sum_of_digits += (number % 10);
        number/=10;
    }

    printf("%d", sum_of_digits);
}