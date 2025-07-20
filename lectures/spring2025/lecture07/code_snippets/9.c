#include <stdio.h>
int main()
{
    int number = 0 , n;
    printf("Enter n: ");
    scanf("%d", &n);
    while(number <= n)
    {
        printf("%d\n", number);
        number++;
    }

}