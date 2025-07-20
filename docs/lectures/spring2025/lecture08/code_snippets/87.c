#include <stdio.h>
void print_right_left(int n)
{
    if(n == 0)
        return;

    printf("%d", n % 10);
    print_right_left(n/10);

}

int main()
{
    printf("\n print_digit_right_left(123): ");
    print_right_left(123); 
    printf("\n print_digit_right_left(1000): ");
    print_right_left (1000);   
}