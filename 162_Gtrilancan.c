#include <stdio.h>
void main ()
{ float a[100];
  int i,n,m;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%f",&a[i]);
m=-1;
for(i=1;i<n-1;i++)
    if (a[i-1]*a[i+1]==a[i]) m=a[i];
printf("%d ",m);
}
