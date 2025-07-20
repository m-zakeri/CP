#include <stdio.h>
int main()
{
    int i;
    for(i = 0; i < 5; i++)
    {
        int j[5 * i + 1];
        if(i)
        {
            printf("&j[0] = %p, j[0] = %d\n", &(j[0]), j[0]);
            j[0]++;
        }
        else
            j[0] = i;
   }
}
   