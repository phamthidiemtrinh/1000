#include <stdio.h>
void main ()
{ int a[100];
  int i,n,j;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
for (i=0;i<n;i++)
  if (sqrt(a[i])==(int)sqrt(a[i]))
     printf("vt %d  \n",i);
}

