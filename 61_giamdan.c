#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,t,kq;
    scanf("%d",&n);
    t=n%10;
    n=(n-t)/10;
    kq=0;
    while (n!=0)
    {
        i=n%10;
        if (i<t)
        {
            kq=1;
            break;
        }
        t=i;
        n=(int)(n-i)/10;
    }
    if (kq==0)
    printf("yes");
    else printf("no");
}
