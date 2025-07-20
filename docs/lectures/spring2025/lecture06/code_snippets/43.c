#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool b;
    int x, y;
    scanf("%d %d", &x, &y);

    switch(x)
    {
        case 0:
            b=0;
            break;
        case 1:
            switch(y)
            {
                case 0:
                    b=0;
                    break;
                case 1:
                    b=1;
                    break;
            }
    }

    printf("%s\n", b ? "true" : "false");
}