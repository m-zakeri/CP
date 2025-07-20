#include <stdio.h>
int main()
{
    float f = 65536;
    double d = 65536;
    short s = 720;

    printf("s=%hu\n",s);
    char c = (char) 65536;
    s = (short) 65536;
    int i = 1.22;
    int j = 1e23;

    printf("f=%.1f\nd=%.1lf\nc=%c\ns=%hu\ni=%d\nj=%d",f,d,c,s,i,j);
}