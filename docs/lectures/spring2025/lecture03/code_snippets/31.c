#include <stdio.h>
#include <limits.h>
int main()
{
    int i;
    unsigned int j;
    
    i = INT_MIN;
    i--;
    printf("i= %d\n", i);

    j = 0;
    j--;
    printf("j= %u\n", j);
}