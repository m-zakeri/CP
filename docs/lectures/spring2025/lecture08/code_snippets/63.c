#include <stdio.h>
int main()
{
    int i;
    for(i = 0; i < 5; i++)
    {
        int j;
        if(i)
    {
        printf("&j = %p, j = %d\n",&j, j);
        j++;
    }
    else
        j = i;
    }

}