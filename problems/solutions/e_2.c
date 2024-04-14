/*
    Copyright (C) 2024 Morteza Zakeri, Yasin Bakhtiar
    Question: Recruitment competition of Divar - A - Face to Face in subway
*/
#include<stdio.h>

int main()
{
    // Input
    int chairs[2][8];
    for(int i=0; i<2; i++)
        for(int j=0; j<8; j++)
            scanf("%d", &chairs[i][j]);

    // Find pairs
    int ans = 0;
    for(int i=0; i<8; i++)
        if(chairs[0][i] == 1 && chairs[1][i] == 1)
            ans++;

    // Print ans
    printf("%d", ans);
    return 0;
}
