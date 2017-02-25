#include <stdio.h>
void main()
{
    int i,n;
    float s;
    scanf("%d",&n);
    s=0;
    for(i=0;i<=n;i++) s+=(float)(2*i+1)/(2*i+2);
    printf("%f",s);

}
