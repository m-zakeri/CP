#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool b2 = 'a' , b3 = -9 , b4 = 4.5 ;
    bool b5 = 0 , b6 = false , b7 = '\0';

    printf(b2 ? "true" : "false");
    printf("\n");
    printf(b3 ? "true" : "false");
    printf("\n");
    printf(b4 ? "true" : "false");
    printf("\n");
    printf(b5 ? "true" : "false");
    printf("\n");
    printf(b6 ? "true" : "false");
    printf("\n");
    printf(b7 ? "true" : "false");


}