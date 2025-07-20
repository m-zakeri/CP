#include <stdio.h>
int main()
{
    printf("|%4d|\n", 1);
    printf("|%4d|\n", 12345);
    printf("|%4d|\n", -12345); 
    printf("|%4f|\n", 1234.0f); 
    printf("|%15f|\n", 1234.0f); 
    printf("|%4c|\n", 'A'); 
    printf("|%-4c|\n", 'A'); 
    printf("|%4s|\n", "ABC"); 
    printf("|%4s|\n", "ABCDE"); 
    printf("|%6d|\n", 1234); 
    printf("|%-6d|\n", 1234);
}