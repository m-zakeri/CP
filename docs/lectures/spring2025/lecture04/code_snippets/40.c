#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int r1, r2;
    srand(0);
    r1 = rand();
    printf("r1 = %d\n", r1);
    time_t t = time(NULL);
    srand(t);
    r2 = rand();
    printf("r2 = %d\n", r2);
    return 0;
}
