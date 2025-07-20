#include <stdio.h>

int b(int i)
{
    return i;
}

int c(int j)
{
    return j;
}

int a (int i, int j)
{
    b(i);
    c(j);
    return 0;
}

int main()
{
    a(3,5);
    return 0;
}