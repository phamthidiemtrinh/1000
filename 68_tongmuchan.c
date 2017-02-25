#include<stdio.h>
void main()
{
    int n,x,i,s,t;
    scanf("%d%d",&n,&x);
    s=-x*x;t=-x*x;
    for(i=2;i<=n;i+=2)
    {
        t=-t*x*x;
        s+=t;

    }

    printf("%d",s);
}


