/*
    Copyright (C) 2024 Morteza Zakeri, Yasin Bakhtiar
    Question: Recruitment competition of Divar - B - Circle city
*/
#include<stdio.h>

int main()
{
    // Input n and m
    int n,m;
    scanf("%d %d",&n,&m);

    // Input direct roads
    // NOTE: The answer of the question is YES if and only if direct roads have both directions (both 0 and 1)(proof with graph theory).
    int n1=0,n2=0;
    for(int i=0; i<n; i++)
    {
        int inp;
        scanf("%d", &inp);
        if(inp == 1)
            n1 = 1;
        else
            n2 = 1;
    }

    // Input circle roads
    // These inputs are not needed to solve the problem! So, we do nothing with them.
    for(int i=0; i<m; i++)
    {
        int inp;
        scanf("%d", &inp);
    }

    // Output
    if(n1==1&&n2==1)
        printf("YES");
    else
        printf("NO");

    return 0;
}
