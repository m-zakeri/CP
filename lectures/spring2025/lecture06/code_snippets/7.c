#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool a = true , b = false , c;

    c = !a;
    printf("%s\n", c ? "true" : "false");

    c = a && b;
    printf("%s\n", c ? "true" : "false");

    c = a||b;
    printf("%s\n", c ? "true" : "false");

    c = !a || b;
    printf("%s\n", c ? "true" : "false");
}