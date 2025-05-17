#include <stdio.h>
void cbase(int num, int base)
{

    if(num==0)
        return;

    cbase( num/base , base);
    
    printf("%d", num%base);


    

}


int main()
{
    int decimal;
    scanf("%d", &decimal);

    if(decimal == 0)
    {
        printf("0");
        return 0;
    }

    cbase(decimal, 8);


}