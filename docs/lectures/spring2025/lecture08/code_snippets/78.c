#include <stdio.h>
int fact(int n)
{
    int res, tmp;
    if(n == 1)
        return 1;
    return n * fact(n - 1);  
}

int main()
{
    int i = 4; 
    printf("%d\n", fact(i));
}