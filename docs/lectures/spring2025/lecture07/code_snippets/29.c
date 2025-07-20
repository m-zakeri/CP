#include <stdio.h>
#include <math.h>
int main()
{
    int arr[20];
    double sum = 0;
    
    for(int i = 0 ; i < 20 ; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    double avg = sum / 20;
    int lower = 0, higher = 0 ;
    for(int i = 0; i < 20 ; i++)
    {
        if(arr[i] >= sum)
            higher ++;
        else 
            lower ++;
    }

    printf("average = %lf\n", avg);
    printf("Small Size = %d, Large Size = %d\n", lower, higher);
    


}