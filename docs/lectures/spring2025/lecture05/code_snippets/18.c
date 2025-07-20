#include <stdio.h>
int main()
{
    printf("|%10.5d|\n", 12);

    printf("|%3.5d|\n", 12);
    
    printf("|%10.5lf|\n", 1.234567890123);
    
    printf("|%0.5lf|\n", 1.234567890123);
    
    printf("|%15.10s|\n", "Hello, world");
    
    printf("|%5.10s|\n", "Hello, world");

}