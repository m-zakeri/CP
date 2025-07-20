#include <stdio.h>
int fibo(int n)
{
    if( n == 1 || n == 2)
        return 1;
    return fibo(n-1) + fibo(n-2);
}

int main()
{
    printf("fibo(1) = %d\n", fibo(1));
     printf("fibo(3) = %d\n", fibo(3));
     printf("fibo(5) = %d\n", fibo(5));
     printf("fibo(8) = %d\n", fibo(8));
}
    