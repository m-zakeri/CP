#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    scanf("%d", &num);

    if( num ==  1)
    {
        printf("Not Prime");
        return 0;
    }

    if( num == 2 || num == 3)
    {
        printf("Prime");
        return 0;
    }



    for (int i = 2; i <= sqrt(num); i++)
    {
        if( num %i == 0)
        {
            printf("Not Prime");
            return 0;
        }
    }

    printf("Prime");

}