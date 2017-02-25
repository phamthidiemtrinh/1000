#include <stdio.h>
void main()
{
    int i,n,s;
    scanf("%d",&n);
    s=1;
    for(i=1;i<=n;i++) s=s*i;
    printf("%d",s);

}
