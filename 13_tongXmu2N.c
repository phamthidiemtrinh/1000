#include <stdio.h>
void main()
{
    int i,n,s,tong,x;
    scanf("%d",&x);
    scanf("%d",&n);
    s=1;tong=0;;;
    for(i=1;i<=n;i++)
    {
        s=s*x*x;
        tong+=s;
    }
    printf("%d",tong);

}
