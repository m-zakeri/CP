#include <stdio.h>
int main()
{
    int res, opd1, opd2;
    char opr;
    printf("Operand1 : ");
    scanf("%d", &opd1);
    printf("Operand2 : ");
    scanf("%d", &opd2);
    printf("Operator : ");
    scanf(" %c", &opr);

    switch(opr)
    {
        case '-':
            res = opd1 - opd2;
            break;
        case '+':
            res = opd1 + opd2;
            break;
        case '/':
            res = opd1 / opd2;
            break;
        case '*':
            res = opd1 * opd2;
            break;
        default:
            printf("Invalid operator\n");
            return -1;
    }

    printf("%d %c %d = %d", opd1 , opr, opd2, res);
}