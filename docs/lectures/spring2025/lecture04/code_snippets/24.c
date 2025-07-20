#include <stdio.h>
int main()
{
    char c = 'A', ch;
    int i;
    c++;
    printf("c = %d, c = %c\n", c, c);
    ch = c;
    ch +=3;
    printf("ch = %d, ch = %c\n", ch, ch);
    i = c - ch + 'X' - 'Z';
    printf("%d", i);

}