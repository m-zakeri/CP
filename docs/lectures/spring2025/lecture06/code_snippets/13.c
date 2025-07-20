#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{
    int i = -1;
    bool a = true, b = false, c = true;

    bool d = a || b || c;
    printf("d = %s\n", d ? "true" : "false");

    bool d = b && (a || c);
    printf("d = %s\n", d ? "true" : "false");

    bool d = (i > 0) && (sqrt(i) > 5.6);
    printf("d = %s\n", d ? "true" : "false");
}