#include <stdio.h>
int UCLN (int a,int b);
void main ()
{ int a[100],u;
  int i,n,j;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);i=0;
 u=(int)(a[i]*a[i+1])/UCLN(a[i+1],a[i]);
 for (i=2;i<n-1;i++)
    u=(int)(a[i]*u)/UCLN(u,a[i]);
printf("BCNN =%d ",u);
}
int UCLN(int a,int b)
{
    if(a==0||b==0)return (a+b);
    else if(a>b)return (UCLN(a-b,b));
    else return (UCLN(b-a,a));
}
