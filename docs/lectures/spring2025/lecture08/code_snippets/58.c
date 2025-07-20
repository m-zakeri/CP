#include <stdio.h>
int i;
void func(void)
{
    int j;
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    i= 20;
}

int main()
{
    func();
    func();
    i = 30;
    func();
}