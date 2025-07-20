#include <stdio.h>
int main()
{
    int i;
    for(i = 1; i <= 10; i++){
    int number;
    printf("Enter %d-th number: ", i);
    scanf("%d", &number);
    if((number % 2) == 0)
    printf("Your number is even\n");
    else
    printf("Your number is odd\n");
    }
    printf("The last number is %d\n", number);

}