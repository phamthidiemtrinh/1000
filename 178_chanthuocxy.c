#include <stdio.h>
void main ()
{ int a[100],x,y;
  int i,n;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("x,y\n");
scanf("%d%d",&x,&y);
for(i=0;i<n;i++)
    if (a[i]>x && a[i]<y&&a[i]%2==0) printf("%d ",a[i]);
}
