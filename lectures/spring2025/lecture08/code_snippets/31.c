#include <stdio.h>

f1(a)
{
    printf("a = %d\n", a);
    return a / 2;
}

f2(int a)
{
    printf("a = %d\n", a);
    return a / 2;
}

f3(float a)
{
    printf("a = %f\n", a);
    return a / 2;
}

int main()
{
    printf("%d\n", f1(10.5));
    printf("%d\n", f2(10.5));
    printf("%d\n", f3(10.5));
    return 0;
}