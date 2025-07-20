#include <stdio.h>
int main()
{
    int i, j, k;
    k =i =10;
    j = i++ + k + --i;
    printf("j = %d\n", j);

    i = j =10;
    i = j + i++;
    printf("i = %d\n", i);

}