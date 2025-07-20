#include <stdio.h>
int main()
{
    //q1
    double s1, w1, s2, w2, s3, w3;
    
    scanf("%lf %lf %lf %lf %lf %lf", &s1, &w1, &s2, &w2, &s3, &w3);

    double avg = (s1*w1 + s2*w2 + s3*w3) / (w1 + w2 + w3);

    printf("The average is: %lf\n", avg);

    //q2

    double c, f;

    scanf("%lf", &c);

    f= 1.8*c + 32;
    printf("%lf\n", f);
}