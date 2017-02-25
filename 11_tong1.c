#include <stdio.h>
void main()
{
    int i,n,s,tong;
    scanf("%d",&n);
    s=1;tong=1;
    for(i=2;i<=n;i++)
    {
        s=s*i;
        tong+=s;
    }
    printf("%d",tong);

}
