#include <stdio.h>
void main()
{
    int i,n;
    float s;
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++) s+=(float)1/(2*i);
    printf("%f",s);

}
