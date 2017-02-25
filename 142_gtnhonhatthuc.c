#include <stdio.h>
float min(float a[],int n);
void main ()
{ float a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%f",&a[i]);
  printf("nho nhat = %f",min(a,n));


}
float min(float a[],int n)
{
    int i;
    float m;
    m=a[0];
    for (i=0;i<n;i++)
        if (a[i]<m) m=a[i];
    return(m);
}
