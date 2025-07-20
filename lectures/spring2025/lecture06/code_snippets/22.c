#include <stdio.h>
int main()
{
    int numg;
    char alphag;

    scanf("%d", &numg);

    if(numg < 25)
        alphag = 'D';
    if(numg >= 25 && numg < 50)
        alphag = 'C';
    if(numg >= 50 && numg < 75)
        alphag = 'B';
    if(numg >= 75)
        alphag = 'A';

    printf("%c\n", alphag);
}