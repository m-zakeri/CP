#include <stdio.h>
int main(void)
{
    float num1, num2, num3, sum, average;
    printf("Enter 3 number: \n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%f",&num3);
    sum = num1 + num2 + num3;
    average = sum / 3;
    printf("Miangin = ");
    printf("%f\n", average);
    return 0;
}