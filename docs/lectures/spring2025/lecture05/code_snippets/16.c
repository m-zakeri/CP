#include <stdio.h>
int main()
{
    printf("|%.4d|\n", 1);
    printf("|%.4d|\n", 12345);
    printf("|%.4d|\n", -12345);
    printf("|%.4f|\n", 1234.0f);
    printf("|%.8f|\n", 234.0f);
    printf("|%.4s|\n", "ABC");
    printf("|%.4s|\n", "ABCDEF");
}