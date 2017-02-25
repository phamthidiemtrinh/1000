#include <stdio.h>
void main()
{
    int i,n,t,k,x,m;
    float s;
    scanf("%d%d",&n,&x);
    t=1; s=0;k=1; m=1;
    for(i=1;i<=n;i++)
    {t=t*i;
    k=-k;
    m=m*x;
    s+=(float)k*m/t;
    }
    printf(" %f",s);
}
