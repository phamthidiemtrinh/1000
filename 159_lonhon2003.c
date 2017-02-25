#include <stdio.h>
void main ()
{ float a[100];
  int i,n,vt;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%f",&a[i]);
vt=-1;
for(i=0;i<n;i++)
if (a[i]>2003) {vt=i;break;}
printf("%d",vt);
}


