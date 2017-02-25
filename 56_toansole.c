#include<stdio.h>
#include<math.h>
void main()
{
    int n,i;
    int a[10];
    scanf("%d",&n);
    for(i=0;i<10;i++)a[i]=0;
    while (n!=0)
    {
        i=n%10;
        a[i]++;
        n=(int)(n-i)/10;
    }
    for (i=0;i<10;i++)
        if(a[i]!=0 && i%2==0)
    {
    printf("no");
    break;
    }
    if (i==10) printf("yes");
}

