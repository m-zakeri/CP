#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

int main(void)
{
    float r;
    printf("Enter shoa");
    scanf("%f",&r);
    double masahat = PI * pow(r, 2);
    double mohit = 2*PI*r;
    printf("masahat = %f\n", masahat);
    printf("mohit = %f\n", mohit);
    return 0;
}