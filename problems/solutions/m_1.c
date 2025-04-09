/*
    Copyright (C) 2024 Morteza Zakeri, Yasin Bakhtiar
    Question: CodeForces Round 928 (Div.4) - B - Vlad and Shapes
*/

#include <stdio.h>

void solve()
{
    // Input n
    int n;
    scanf("%d", &n);
    char lst[n][n+1]; // +1 for null terminator

    // Input Square Grid of n*n
    for(int i=0; i<n; i++)
        scanf("%s", lst[i]);

    // Find square or triangle
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-1; j++)
        {
            if(lst[i][j]=='1' && lst[i][j+1]=='1')
            {
                if(lst[i+1][j]=='1' && lst[i+1][j+1]=='1')
                {
                    printf("SQUARE\n");
                    return;
                }
                if(j+2<n && lst[i][j+2]=='1' && lst[i+1][j+1]=='1')
                {
                    printf("TRIANGLE\n");
                    return;
                }
            }
            else if(j+2<n && lst[i][j+1]=='1' && lst[i+1][j]=='1' && lst[i+1][j+1]=='1' && lst[i+1][j+2]=='1')
            {
                printf("TRIANGLE\n");
                return;
            }
        }
}

int main()
{
    // Input the number of test-cases
    int t;
    scanf("%d", &t);

    while(t>0)
    {
        // Solve each test-case
        solve();
        t--;
    }
    return 0;
}
