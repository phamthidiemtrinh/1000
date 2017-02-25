#include <stdio.h>
void main ()
{ float a[100],x;
  int i,n;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%f",&a[i]);
x=a[0];
for(i=0;i<n;i++)
    if(a[i]>x) x=a[i];
for(i=0;i<n;i++)
    if(a[i]==x) printf("%d  ",i);

}
