#include <stdio.h>
int main()
{
    int i;
    unsigned int j;
    long int l;

    scanf("%d", &i);
    scanf("%u", &j);
    scanf("%ld", &l);

    printf("%d\n",i);
    printf("%u\n",j);
    printf("%ld\n",l);

    scanf("%o", &i);
    scanf("%x", &i);
    scanf("%i", &i);

    printf("%o\n",i);
    printf("%x\n",i);
    printf("%i\n",i);

    float f;
    double d;
    scanf("%f", &f);
    scanf("%lf", &d);

    printf("%f\n",f);
    printf("%lf\n",d);

    float f1,f2;
    scanf("%f", &f1);
    scanf("%e", &f2);

    printf("%f\n",f1);
    printf("%e\n",f2);

    char c1, c2, c3;
    scanf("%c", &c1);
    scanf("%c", &c2);
    scanf("%c", &c3);

    printf("%c\n",c1);
    printf("%c\n",c2);
    printf("%c\n",c3);
}