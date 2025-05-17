/*
    Copyright (C) 2024 Morteza Zakeri, Yasin Bakhtiar
    Question: CodeForces Round 928 (Div.4) - C - Vlad and a Sum of Sum of Digits
*/

#include<stdio.h>
#define MAX_N 200010

int res[MAX_N];

void solve(){
    // Input number
    int n;
    scanf("%d", &n);

    // Show result
    printf("%d\n", res[n]);
}


int sum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}


int main()
{
    // Input the number of test-cases
    int t;
    scanf("%d", &t);

    // Calculate answers for all numbers
    res[0] = 0;
    for(int i=1; i<MAX_N; i++)
    {
        res[i] = res[i-1] + sum(i);
    }


    while(t>0)
    {
        // Solve each test-case
        solve();
        t--;
    }
    return 0;
}
