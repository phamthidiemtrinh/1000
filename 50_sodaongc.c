#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,s;
    scanf("%d",&n);
    s=0;

    while (n!=0)
    {
        i=n%10;
        s=s*10+i;
        n=(int)(n-i)/10;
    }
    printf("%d",s);
}
