#include <stdio.h>
int main()
{
    int i , j;
    char c;
    scanf("%d%c%d", &i, &c, &j);
    printf("i=%d c=%c j=%d\n", i, c, j);

    getchar();

    scanf("%d %c%d", &i , &c ,&j);
    printf("i=%d c=%c j=%d\n", i, c, j);
}