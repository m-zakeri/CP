#include <stdio.h>
int main()
{
    int numg;
    scanf("%d", &numg);
    int d = numg / 25;

    char g = (d==0) ? 'D' : ( (d==1) ? 'C' : ((d==2) ? 'B' : 'A'));

    printf("%c\n", g);
}