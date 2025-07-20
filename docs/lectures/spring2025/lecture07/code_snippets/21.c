#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf ("Enter a natural number:\n");
    scanf ("%d", &n);

    int flag = 1;
    
    if((n == 1) ||( (n != 2) && n % 2 == 0))
        flag = 0;

    for(int i = 3 ; i< sqrt(n) ; i+=2)
        if(n % i == 0)
            flag = 0;

    if(flag)
        printf ("%d is prime\n", n);
    else
        printf ("%d is not prime\n", n);


}