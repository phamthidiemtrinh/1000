#include <stdio.h>
void main ()
{ float a[100],x;
  int i,n;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%f",&a[i]);
x=-1;
for(i=0;i<n;i++)
    if(a[i]>x&&a[i]%2==0) x=a[i];
for(i=0;i<n;i++)
    if(a[i]==x) printf("%d  ",i);

}
