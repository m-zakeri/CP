#include <stdio.h>
#define PRINT_INT(x) printf("%d\n", x); \
                    printf("================\n");

inline int gcd(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp = a%b;
        a = b;
        b = temp;
    }

    return a;
}

int main()
{
    int i = 20, j = 35, g;
    g = gcd(j, i);
    printf("GCD of %d and %d = ", i , j);
    PRINT_INT(g);
    g = gcd(j, i);
    printf("GCD of %d and %d = ", j , i);
    PRINT_INT(g);
}