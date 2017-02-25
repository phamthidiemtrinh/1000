#include <stdio.h>
void main()
{
    int i,n,t,k;
    float s;
    scanf("%d",&n);
    t=0; s=0;k=-1;
    for(i=1;i<=n;i++)
    {t=t+i;
    k=-k;
    s+=(float)k/t;
    }
    printf(" %f",s);
}
