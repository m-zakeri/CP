#include <stdio.h>
#include <limits.h>
int main()
{
    int i;
    unsigned int j;
    
    i = INT_MAX;
    i++;
    printf("i= %d\n", i);

    j = UINT_MAX;
    j++;
    printf("j= %u\n", j);
}