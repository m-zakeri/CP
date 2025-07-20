#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    int pw=1;
    int res=0;

    while(num!=0)
    {
        if(num % 10)
            pw *= 10;

        res += pw * (num % 10);

        num /= 10;
        pw *= 10;

    }

    printf("%d", res);

}