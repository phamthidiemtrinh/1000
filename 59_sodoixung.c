#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,s,n1;
    scanf("%d",&n);
    s=0;n1=n;

    while (n!=0)
    {
        i=n%10;
        s=s*10+i;
        n=(int)(n-i)/10;
    }

    if (s==n1) printf("yes");
    else printf("no");
}
