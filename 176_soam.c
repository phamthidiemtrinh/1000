#include <stdio.h>
void main ()
{ float a[100];
  int i,n;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%f",&a[i]);
for(i=0;i<n;i++)
    if (a[i]<0) printf("%f ",a[i]);
}
