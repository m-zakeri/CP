#include <stdio.h>
int main()
{
    int numg;
    char alphag;

    scanf("%d", &numg);

    if(numg < 25)
        alphag = 'D';
    else if(numg < 50)
        alphag = 'C';
    else if (numg < 75)
        alphag = 'B';
    else
        alphag = 'A';

    printf("%c\n", alphag);
}
