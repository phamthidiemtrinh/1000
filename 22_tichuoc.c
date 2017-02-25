#include <stdio.h>
void main()
{
    int n,i,s;
    scanf("%d",&n);
    s=1;;
    for (i=1;i<=n;i++)
        if (n%i==0) s=s*i;
        printf("%d ",s);
}
