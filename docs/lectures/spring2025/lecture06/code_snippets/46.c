#include <stdio.h>
int main()
{
    int x, signum;
    scanf("%d", &x);

    signum = (x < 0) ? -1 : ((x==0) ? 0 : 1);

    printf("%d", signum);


}