#include<stdio.h>
void main()
{
    int n,x,i,s,t;
    scanf("%d%d",&n,&x);
    s=x;t=x;
    for(i=3;i<=n;i+=2)
    {
        t=-t*x*x;
        s+=t;

    }

    printf("%d",s);
}


