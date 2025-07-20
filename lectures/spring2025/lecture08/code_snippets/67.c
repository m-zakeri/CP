#include <stdio.h>
#include <math.h>

int check_prime(int n)
{
    if( n<=1)
        return 0;
    if(n == 2 || n==3)
        return 1;
    for(int i = 3 ; i<=sqrt(n); i++)
        if(n % i == 0)
            return 0;
    
    return 1;
}

int next_prime(int n)
{
    if( n==2)
        return 3;
    
    do
    {
        n+=2;
    }while(check_prime(n) == 0);

    return n;
}

int check_goldbakh(int n)
{
    int i = 2;

    while(i <= n/2)
    {
        int j = n - i;
        if(check_prime(j))
            return 1;
        i = next_prime(i);
    }

    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%s\n", check_goldbakh(n) ? "true" : "false");
}