#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    double sum = 0;
    
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    double avg = sum / n;
    int lower = 0, higher = 0 ;
    for(int i = 0; i < n ; i++)
    {
        if(arr[i] >= sum)
            higher ++;
        else 
            lower ++;
    }

    printf("average = %lf\n", avg);
    printf("Small Size = %d, Large Size = %d\n", lower, higher);
    


}