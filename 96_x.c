#include <stdio.h>
void main ()
{
    int x,f;
    scanf("%d",&x);
    if(x>=5) f=2*x*x+5*x+9;
    else f=-2*x*x +4*x-9;
    printf("%d",f);
}

