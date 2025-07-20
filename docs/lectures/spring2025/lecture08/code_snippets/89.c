#include <stdio.h>

int max(int a, int b)
{
    return a>b ? a : b;
}

int find_max(int a[], int n)
{
    if(n == 1)
        return a[0];
    return max( a[n-1], find_max(a , n-1)); 
    /*
    a[]= {a,b,c,d}
     --> find {a,b,c,d} = max(d , find{a,b,c}) -->max(d,max(c ,max(b, a)))
    --> find {a,b,c}= max(c , find{a,b}) --> max(c ,max(b, a))
    --> find {a,b} = max(b , find{a}) --> max(b, a)
    --> find{a} = a
    */
}

int main()
{
    int arr[] = {10, 324, 450, 290, 150};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest in given array is %d", find_max(arr, n));

}