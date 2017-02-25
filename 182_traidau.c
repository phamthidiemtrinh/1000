#include <stdio.h>
void main ()
{ float a[100];
  int i,n;
  scanf("%d",&n);
 for(i=1;i<=n;i++)
scanf("%f",&a[i]);
a[0]=0;
a[n+1]=0;
for(i=1;i<=n;i++)
    if (a[i]*a[i+1]>0||a[i]*a[i-1]>0) printf("%f ",a[i]);
}

