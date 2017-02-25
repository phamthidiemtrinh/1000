#include <stdio.h>
void main()
{
    int n,i,s;
    scanf("%d",&n);
    s=1;;
    for (i=n-1;i!=0;i--)
        if ((n%i==0) && (i%2!=0))
        {

        printf("%d ",i);
        break;
        }
}
