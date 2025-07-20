#include <stdio.h>
int main()
{
    double d1, d2;
    d1 = 1e20 + 1;
    d2 = 1e20 - 1;
    if(d1 == d2)
     printf("They are equal :-o \n");
    else
     printf("They are not equal :D \n");

}