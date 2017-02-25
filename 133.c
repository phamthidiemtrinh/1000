#include <stdio.h>
void vt(float a[],int n);
void main ()
{ float a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%f",&a[i]);
  printf("am \n");
    vt(a,n);

}
void vt(float a[],int n)
{
    int i;
    for (i=0;i<n;i++)
        if (a[i]<0) printf("%d  ",i);
}
