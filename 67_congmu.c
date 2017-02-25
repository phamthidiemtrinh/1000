#include<stdio.h>
void main()
{
    int n,x,i,s,t;
    scanf("%d%d",&n,&x);
    s=x;t=x;
    for(i=2;i<=n;i++)
    {
        t=t*x;
        if (i%2==0) s+=t;
        else s-=t;
    }

    printf("%d",s);
}


