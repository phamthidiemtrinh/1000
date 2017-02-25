#include <stdio.h>
float s(float a[],int n);
void main ()
{ float a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%f",&a[i]);
  printf("tong am  = %f",s(a,n));


}
float s(float a[],int n)
{
    int i;
    float m;
    m=0;
    for (i=0;i<n;i++)
        if (a[i]<0) m+=a[i];
    return(m);
}
