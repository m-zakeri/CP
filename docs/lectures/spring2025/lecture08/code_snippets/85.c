#include <stdio.h>
int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd( b , a%b);
}

int main()
{
    printf("gcd(1, 10) = %d \n", gcd(1, 10));
    printf("gcd(10, 1) = %d \n", gcd(10, 1));
    printf("gcd(15, 100) = %d \n", gcd(15, 100));
    printf("gcd(100, 15) = %d \n", gcd(100, 15));
    printf("gcd(201, 27) = %d \n", gcd(201, 27)); 
}