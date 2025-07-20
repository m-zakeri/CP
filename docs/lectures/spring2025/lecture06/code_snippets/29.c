#include <stdio.h>
int main()
{
    char c;
    scanf(" %c", &c);

    if( c <= 'z' && c>= 'a' || c <= 'Z' && c >= 'A')
    {
        if(c > 'a')
            printf("The char is Lowercase\n");
        else
            printf("The char is Uppercase\n");
    }

    else if( c<= '9' && c>= '1')
    {
        if( c > '5')
            printf("The char is greater than 5\n");
        else
            printf("The char is less than or equal 5\n");
    }

    else
    printf("The char is not either alphabetic or numeric\n");
} 