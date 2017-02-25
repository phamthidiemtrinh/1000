#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,d;
    scanf("%d",&n);
    d=1;
    while (n!=0)
    {
        i=n%10;
        if (i%2!=0) d=d*i;
        n=(int)(n-i)/10;
    }
    printf("%d",d);
}
