#include <stdio.h>
void main()
{
    int i,n;
    float s;
    scanf("%d",&n);
    s=0;
    for(i=0;i<=n;i++) s+=(float)1/(2*i+1);
    printf("%f",s);

}
