#include <stdio.h>
void main()
{
    int n,i,s;
    scanf("%d",&n);
    s=0;;
    for (i=1;i<=n;i++)
        if ((n%i==0) && (i%2!=0)) s++;
        printf("%d ",s);
}
