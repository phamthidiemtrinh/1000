
#include <stdio.h>
void main()
{
    int i,n,s,x,gt;
    float tong;
    scanf("%d",&n);
    scanf("%d",&x);
    gt=1;
    s=x;tong=x;
    for(i=2;i<=n;i++)
    {
        gt=gt*i;;
        s=s*x;
      if (i%2!=0)  tong+=(float)s/x;
    }
    printf("%f",tong);

}
