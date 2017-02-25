#include <stdio.h>
void  main()
{
    int n,i,s;
    s=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        s=s+i*i*i;
    printf("%d",s);

}
