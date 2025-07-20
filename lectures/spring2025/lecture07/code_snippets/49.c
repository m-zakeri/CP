
#include <stdio.h>

int main(void) {
    int row, col;
    do
    {
        scanf("%d %d", &row , & col);
    }while( row < 1 || col < 1 || row < col);

    row--;
    col--;
    if(col > row - col)
        col = row - col;

    long long res=1;
    for(int i = 1; i<= col ; i++)
        res *= (row - col + i) / i;

    printf("%lld", res);
}

