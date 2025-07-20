#include <stdio.h>

/*
()
--   ++
-    +
! 
(type casting)
*   /   %
+   -
>   >=  <   <=
==  !=
&&
||
= *= += /= -+ %=
*/

int main()
{
    double x = -5 + 2/4.0 * (-7/8);
    printf("%.1lf\n",x);

    double y = 
    (7 + (float) (2 + (int) 1.005)) / (int) 20;

    printf("%.1lf\n",y);

    double z = 5 + 
    (double)(7 / (int)8.5 / 7.0 * 6);


    printf("%.1lf\n",z);
}