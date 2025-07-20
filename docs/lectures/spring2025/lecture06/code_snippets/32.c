#include <stdio.h>
//duplicate zero
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int pw=1, n2 = n;
    while(n > 1)
    {
        pw *= 10;
        n/=10;
    }
    pw/=10;

    while(pw >= 1)
    {
        int c = n2 / pw;

        if(c==0)
            printf("00");
        else
            printf("%d", c);

        n2 %= pw;
        pw /= 10;
    }



}