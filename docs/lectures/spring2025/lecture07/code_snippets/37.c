#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &m , &n);

    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
            printf("*");

        if(i == n)
            break;
        printf("\n");
    }
}