#include <stdio.h>
void main ()
{ float a[100],x,y;
  int i,n;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%f",&a[i]);
printf("x,y\n");
scanf("%f%f",&x,&y);
for(i=0;i<n;i++)
    if (a[i]>x && a[i]<y) printf("%f ",a[i]);
}
