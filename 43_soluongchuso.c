#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,d;
    scanf("%d",&n);
    d=0;
    while (n!=0)
    {
        i=n%10;
        d++;
        n=(int)(n-i)/10;
    }
    printf("%d",d);
}
