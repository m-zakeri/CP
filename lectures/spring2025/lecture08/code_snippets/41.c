#include <stdio.h>
int main()
{
    int j = 20, i = 10, k = 0;
    printf("outer i = %d, %d\n", i, j);
    while(k != 1)
    {
    int i = 100;
    j = 200;
    printf("inner i = %d, %d\n", i, j);
    k++;
    }
    printf("outer i = %d, %d\n", i, j);
}