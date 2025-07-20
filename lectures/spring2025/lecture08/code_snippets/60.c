#include <stdio.h>
void func(void)
{
    int j;
    static int i;
    printf("i = %d \n", i);
    printf("j = %d \n", j);
    i = 20;
}

int main()
{
    func();
    func();
    i = 30;
    func();
}