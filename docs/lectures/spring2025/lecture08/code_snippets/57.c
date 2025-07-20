#include <stdio.h>
int i = 10, j = 20;

void print(void)
{
    printf("i = %d, j = %d\n", i , j);
}

int main()
{
    extern int i;
    int j;

    print();
    i = 1000;
    j = 2000;
    print();
}
