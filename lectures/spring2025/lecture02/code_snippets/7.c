#include <stdio.h>
int main()
{
    int x1,x2,x3;
    printf("Please enter the integers: ");
    scanf("%d %d %d", &x1,&x2,&x3);

    double average;

    average = (x1 + x2 +x3)/3.0;

    printf("Average :%lf", average);
}


//error
