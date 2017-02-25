#include <stdio.h>
void main()
{
    int i,n,s,x;
    float tong;
    scanf("%d",&n);
    s=0;tong=0;
    for(i=1;i<=n;i++)
    {
        s=s+i;
        tong+=(float)1/s;
    }
    printf("%f",tong);

}
