#include <stdio.h>
#include <math.h>
int main(void)
{
    float a, b, c, delta, root1, root2;
    printf("Enter a, b, c: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);    
    delta =sqrt((b * b)-(4 * a * c));
    root1 =(-b + delta)/(2 * a);
    root2 =(-b - delta)/(2 * a);
    printf("root1 = ");
    printf("%f\n", root1);
    printf("root2 = ");
    printf("%f\n", root2);
    return 0;
}