#include <stdio.h>
int main()
{
    int num;
    char c;

    printf("Enter a char: ");
    scanf(" %c", &c);

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
        printf("Your number is larger than 0\n");
    else
        printf("Your number is less than or equal 0\n");
    
    if( c >= '0' || c <= '9')
        printf("Your char is Numeric\n");
}