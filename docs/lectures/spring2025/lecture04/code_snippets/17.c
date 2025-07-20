#include <stdio.h>
int main(void)
{
    float num1, num2, fpart1, fpart2, sum;
    printf("Enter 2 numbers: \n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    fpart1 = num1 -(int)num1;
    fpart2 = num2 -(int)num2;
    sum = fpart1 +fpart2;
    printf("%f\n",sum);
    return 0;
}