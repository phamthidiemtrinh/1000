#include <stdio.h>
void main ()
{ float a[100];
  int i,n;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%f",&a[i]);
for(i=1;i<n-1;i++)
    if (a[i]<0)
{
    printf("vt %d",i);
    break;
}
}
