#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    time_t t = time(NULL);
    srand(t);
    int ir = rand();
    double fr =(ir + 1)/(RAND_MAX + 2.0);
    printf("%f\n", fr);
    return 0;
}