#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    int j =0;
    while(j < n)
    {
        scanf("%d", &arr[j]);
        j++;
    }


    int start = 0 , end = n-1;
    while(start < end)
    {
        int temp;
        temp = arr[start];
        arr[start] =  arr[end];
        arr[end] = temp; 

        start++;
        end--;
    }

    int k = 0;
    while(k < n)
    {
        printf("%d ", arr[k]);
        k++;
    }
}