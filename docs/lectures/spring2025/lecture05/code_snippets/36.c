#include <stdio.h>
int main()
{
    int i;
    unsigned int j;
    unsigned long int k;
    char c;
    float f;
    printf("Enter an int:\n");
    scanf("%d", &i);

    printf("Enter an unsigned int:\n");
    scanf("%u", &j);

    printf("Enter an unsigned long int:\n");
    scanf("%lu", &k);

    printf("Enter a char:\n");
    scanf("%c", &c);

    printf("Enter a float\n");
    scanf("%f", &f);

    printf("Your inputs are:\n");
    
    printf("int = %d, unsigned int = %u, unsigend long int = %lu, char = %c , float = %f\n",
    i, j, k, c, f);
}