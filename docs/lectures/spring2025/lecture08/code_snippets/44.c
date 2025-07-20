#include <stdio.h>
int i, j;
float f;
void func(void)
{
    printf("i = %d\n", i);
    printf("f = %f\n", f);
    i = 20;
}
void f1()
{
    printf("%d", i);
}

int main()
{
    f = 1000;
    func();
    f1();
}