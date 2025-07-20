#include <stdio.h>
int main()
{
    int i, j, k, l;
    i = j = k = l = 1;
    i += j *= --k -= 3 / l ;

/*      → i += j *= --k -= 3
        → i += j *= --(k -= 3) [k = -2]
        → i += j *= --k [k = -3]
        → i += j *= -3 [j = -3]
        → i += -3 [i = -2]
        i = -2, j = -3, k = -3, l = 1
*/

    printf("i = %d, j = %d, k = %d, l = %d", i , j , k, l);

}