#include <stdio.h>
int main(void)
{
    float a, b, c, x, result;
    printf("Enter a, b, c, x: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&x);
    result = a * x * x + b * x + c;
    printf("%f\n", result);
    return 0;
}