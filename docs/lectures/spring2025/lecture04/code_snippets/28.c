#include <stdio.h>
int main()
{
    int i, j, k, n;
    i=j=k=n=1;
    i = sizeof(int) + sizeof(char) + sizeof 10;

    printf("i:%d\n",i);

    i=j=k=n=1;
    i += j * k++ + sizeof n;
    printf("i:%d j:%d k:%d n:%d\n",i, j , k , n);

    i=j=k=n=2;
    i = j + (k = ++n); 
    printf("i:%d j:%d k:%d n:%d\n",i, j , k , n);

}