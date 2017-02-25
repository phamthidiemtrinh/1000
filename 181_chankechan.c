#include <stdio.h>
void main ()
{ int a[100];
  int i,n;
  scanf("%d",&n);
 for(i=1;i<=n;i++)
scanf("%d",&a[i]);
a[0]=1;
a[n+1]=1;
for(i=1;i<=n;i++)
    if (a[i]%2==0&&(a[i+1]%2==0||a[i-1]%2==0)) printf("%d ",a[i]);
}
