#include <stdio.h>
void main ()
{ int a[100];
  int i,n;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n-1;i++)
    if (a[i]<abs(a[i+1])&&a[i]>abs(a[i-1])) printf("%d ",a[i]);
}
