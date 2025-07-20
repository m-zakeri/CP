/*
    Copyright (C) 2024 Morteza Zakeri, Yasin Bakhtiar
    Question: Quera CodeCup 8 - A - The lost point
*/
#include<stdio.h>

int main()
{
    int lst[7][3];

    // Input numbers
    for(int i=0; i<7; i++)
        for(int j=0; j<3; j++)
            scanf("%d", &lst[i][j]);

    // Search for the numbers that repeat 3 times in every column
    // TODO: More simple algorithm
    for(int i=0; i<3; i++)
    {
        int a1=-1,a2=-1;
        int n1=0, n2=0;

        for(int j=0; j<7; j++)
        {
            if(a1==-1)
            {
                a1 = lst[j][i];
                n1++;
            }
            else if(a2==-1 && a1 != lst[j][i])
            {
                a2 = lst[j][i];
                n2++;
            }
            else if(a1 == lst[j][i])
                n1++;
            else
                n2++;
        }

        if(n1 > n2)
            printf("%d ", a2);
        else
            printf("%d ", a1);
    }
    return 0;
}
