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

    while(start != end )
    {
        int i = start + 1;

        while(i <= end)
        {
            if( arr[i] < arr[start])
            {
                int temp;
                temp = arr[start];
                arr[start] =  arr[i];
                arr[i] = temp; 
                
                /*swap2:
                
                arr[start] = arr[start] + arr[end];
                arr[end] = arr[start] - arr[end];
                arr[start] = arr[start] - arr[end];
                
                
                */            
            }
            i++;
        }
        start ++;

    }

    int k = 0;
    while(k < n)
    {
        printf("%d ", arr[k]);
        k++;
    }
    




}