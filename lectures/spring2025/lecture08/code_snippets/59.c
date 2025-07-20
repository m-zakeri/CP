#include <stdio.h>

void func(void)
{
    int j;
    static int i = 10;
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    i = 20;
}
int main()
{
    func();
    func();
}