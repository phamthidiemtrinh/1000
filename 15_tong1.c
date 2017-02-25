#include <stdio.h>
void main()
{
    int i,n,s,x,tong;
    scanf("%d",&n);
    s=0;tong=0;
    for(i=1;i<=n;i++)
    {
        s=s+i;
        tong+=s;
    }
    printf("%d",tong);

}
