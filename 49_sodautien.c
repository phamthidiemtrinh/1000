#include<stdio.h>
#include<math.h>
void main()
{
    int n,i;
    scanf("%d",&n);

    while (n>=10)
    {
        i=n%10;
        n=(int)(n-i)/10;
    }
    printf("%d",n);
}
