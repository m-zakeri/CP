#include <stdio.h>
int main()
{
    int size, i = 10;
    size = sizeof i;
    printf("%d\n", size);
    size = sizeof(i);
    printf("%d\n", size);
    size = sizeof(2000);
    printf("%d\n", size);
    size = sizeof(char);
    printf("%d\n", size);
}