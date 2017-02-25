#include <stdio.h>
float Max(float a[],int n);
void main ()
{ float a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%f",&a[i]);
  printf("duong dau tien= %f",Max(a,n));


}
float Max(float a[],int n)
{
    int i;
    float m;
    m=-1;
    for (i=0;i<n;i++)
        if (a[i]>0) {m=a[i]; break;}
    return(m);
}
