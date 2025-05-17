#include <stdio.h>

int main()
{
    int num;
    int count_even = 0 , count_odd = 0;
    do
    {
        scanf("%d", &num);
        if( num == 0)
            break;
        else if(num %2 == 0)
            count_even++;
        else
            count_odd++;
    }while(num != 0);

    printf("%d Even numbers and %d odd numbers", count_even, count_odd);
}