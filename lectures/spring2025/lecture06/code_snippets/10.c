#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool b1,b2;
    int i = 0, j = 20;

    b1 = i && j;
    printf("b1 = %s\n", b1 ? "true" : "false");

    b2 = j || j;
    printf("b2 = %s\n", b2 ? "true" : "false");

    i = b1 + b2;
    printf("i = %d\n",i);

    j = (i < j) + (b1 && b2);
    printf("j = %d\n",j);

}