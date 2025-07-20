#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    for(int i = 0 ; i <= number ; i+=2)
        printf("%d\n", i);
    
}