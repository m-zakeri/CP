#include <stdio.h>
int main(void){
    int n, x1, x2, x3, q1, q2, result;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    if((n < 100) || (n > 999))
    {
        printf("Wrong input\n");
        return -1;
    }

    x1 = n / 100;
    x2 = (n % 100) / 10;
    x3 = n % 10;
    q1 = 100;
    q2 = 10;

    if(x3 == 0)
    {
        q1 *= 10;
        q2 *= 10;
    }

    if(x2 == 0)
        q1 *= 10;

    result = (x1 * q1) + (x2 * q2) + x3;
    printf("result = %d\n", result);
    
    return 0;
}