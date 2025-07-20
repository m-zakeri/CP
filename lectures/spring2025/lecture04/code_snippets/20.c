#include <stdio.h>
int main()
{
    int i = 10, j;
    j = i + 1;
    printf("i = %d, j = %d\n", i , j);
    j = i++;
    printf("i = %d, j = %d\n", i , j);
    j = ++i;
    printf("i = %d, j = %d\n", i , j);
    j = i--;
    printf("i = %d, j = %d\n", i , j);
    j = --i;
    printf("i = %d, j = %d\n", i , j);
    j = i - 1;
    printf("i = %d, j = %d", i , j);
}