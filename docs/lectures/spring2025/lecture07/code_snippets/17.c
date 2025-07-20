#include <stdio.h>
int main()
{
    int grade , count, i=0;
    double sum = 0;

    scanf("%d", &count);

    while(i < count)
    {
        scanf("%d", &grade);
        sum += grade;
        i++;
    }

    printf("The average of your class is %0.3lf\n", sum/count);
}