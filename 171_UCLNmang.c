#include <stdio.h>
int UCLN (int a,int b);
void main ()
{ int a[100],u;
  int i,n,j;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
u=a[0];
for (i=1;i<n;i++)
    u=UCLN(u,a[i]);
printf("UCLN =%d ",u);
}
int UCLN(int a,int b)
{
    if(a==0||b==0)return (a+b);
    else if(a>b)return (UCLN(a-b,b));
    else return (UCLN(b-a,a));
}
