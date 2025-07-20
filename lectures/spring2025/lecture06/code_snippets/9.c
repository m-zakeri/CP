#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 10 , b = 20;
    float f = 54.677f;
    double d = 547.775;
    char c1 = 'A' , c2 = 'a';
    bool b1;

    b1 = a == f;
    printf("%s\n", b1 ? "true" : "false");

    b1 = a <= d + 5;
    printf("%s\n", b1 ? "true" : "false");

    b1 = d < c1 * 10;
    printf("%s\n", b1 ? "true" : "false");

    b1 = c1 == c2;
    printf("%s\n", b1 ? "true" : "false");

    b1 = '1' < '2';
    printf("%s\n", b1 ? "true" : "false");

    b1 = c1 + f < d + a;
    printf("%s\n", b1 ? "true" : "false");


}