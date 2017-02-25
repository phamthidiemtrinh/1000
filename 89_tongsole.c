#include <stdio.h>
void main()
{
    int i,n,s;
    scanf("%d",&n);
    s=0;
    for (i=1;i<=n;i++)
        if (i%2!=0)
        s+=i;
        printf("%d  ",s);
}
