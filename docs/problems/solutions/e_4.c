/*
    Copyright (C) 2024 Morteza Zakeri, Yasin Bakhtiar
    Question: Quera - Khayyam-Pascal's triangle
*/
#include<stdio.h>

/* A function to calculate n! */
int factorial(int n)
{
    int ans = 1;
    for(int i=2; i<=n; i++)
        ans *= i;
    return ans;
}

/* A function to calculate math combination */
int combination(int r, int n)
{
    return factorial(n) / (factorial(r) * factorial(n-r));
}

int main()
{
    // Input number
    int n;
    scanf("%d", &n);

    // Print first row of triangle
    printf("1\n");

    // Print second row until nth row
    for(int i=1; i<n; i++)
    {
        // Calculate each row with math combination. For more information see https://en.wikipedia.org/wiki/Pascal%27s_triangle
        for(int j=0; j<=i; j++)
        {
            printf("%d ", combination(j,i));
        }
        // Go to new line after printing each row
        printf("\n");
    }

    return 0;
}
