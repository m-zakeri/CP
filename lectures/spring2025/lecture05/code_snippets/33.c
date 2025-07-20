#include <stdio.h>
int main()
{
    int sal, mah, rooz;
    scanf("%d/%d/%d", &sal, &mah, &rooz);
    printf("sal = %d, mah = %d, rooz = %d\n", sal, mah, rooz);

    int a, b;
    float f;
    scanf("%d--%d%f", &a, &b, &f);
    printf("a = %d, b = %d, f = %f", a, b, f);
}