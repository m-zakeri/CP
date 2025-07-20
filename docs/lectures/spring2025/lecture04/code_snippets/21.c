#include <stdio.h>
int main()
{
    int i = 9 , j = 20;
    i+= 1;
    j /= i;

    printf("i = %d\nj = %d\n", i , j);

    i *= i + j - 6 + i / j;
    printf("i = %d\n", i);
}