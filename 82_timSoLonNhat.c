#include <stdio.h>
void main()
{
    float a,b,c,max;
    scanf("%f%f%f",&a,&b,&c);
    max=a;
    if (a<b) max=b;
    if (max<c) max=c;
    printf("Max=%f",max);
}
