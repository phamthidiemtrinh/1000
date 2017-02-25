
#include <stdio.h>
void main ()
{ int a[100],u;
  int i,n,j;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
for (i=0;i<n;i++)
    if (a[i]>1)
{   u=1;
    for(j=2;j<(int)sqrt(a[i])+1;j++)
          if(a[i]%j==0) {u=2;break;}
    if (u==1) printf("%d  ",i);
}
}
