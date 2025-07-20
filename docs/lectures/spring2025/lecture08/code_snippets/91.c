#include <stdio.h>
#include <stdbool.h>

bool is_even(int n);
bool is_odd(int n);

bool is_even(int n)
{
    if(n == 0)
        return true;
    if(n == 1)
        return false;
    else
        return is_odd(n - 1);
}

bool is_odd(int n)
{
    if(n == 0)
        return false;
    if(n == 1)
        return true;
    else
        return is_even(n - 1);
}

int main()
{
    printf("3-->%s, 4-->%s", is_odd(3) ? "odd" : "even", is_odd(4) ? "odd" : "even");
}