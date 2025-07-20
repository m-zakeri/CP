#include <stdio.h>
void print_left_right(int n)
{
    if(n == 0)
        return;
    print_left_right(n/10);
    printf("%d", n % 10);

}

int main()
{
    printf("\n print_digit_left_right(123): ");
    print_left_right(123); 
    printf("\n print_digit_left_right(1000): ");
    print_left_right (1000);   
}