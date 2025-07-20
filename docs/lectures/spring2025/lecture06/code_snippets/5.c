#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a, b;
    a==b;
    a<=b;

   //no error
   bool b1;

   b1 = a==b;
   printf("%s\n", b1? "true" : "false");
   b1 = a <= b;
   printf("%s\n", b1? "true" : "false");

}