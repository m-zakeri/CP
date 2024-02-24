/*
    Copyright (C) 2024 Morteza Zakeri, Yasin Bakhtiar
    Question: CodeForces Round 928 (Div.4) - A - Vlad and the Best of Five
*/
#include<stdio.h>

int main()
{
    // Input the number of test-cases
    int t;
    scanf("%d", &t);

    while(t>0)
    {
        char str[6];
        int n = 0;
        scanf("%s", str);

        // Count the number of As
        for(int i=0; i<5; i++)
            if(str[i]=='A')
                n+=1;

        // Note: n('B') = 5 - n('A')
        // If the number of As is bigger that the number of Bs:
        if(n>5-n)
            printf("A\n");
        else
            printf("B\n");

        t--;
    }
    return 0;
}
