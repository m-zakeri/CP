#include <stdio.h>
int main(void)
{
    float num1, num2; 
    int sum;
    printf("Enter 2 number: \n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    sum = (int)num1 + (int)num2;
    printf("%d\n", sum);
    return 0;
}