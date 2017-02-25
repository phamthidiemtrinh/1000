#include <stdio.h>
void main()
{
    int i,n,x,s;
    scanf("%d",&x);
    scanf("%d",&n);
    s=x;
    for(i=2;i<=n;i++) s=s*x;
    printf("%d",s);

}
