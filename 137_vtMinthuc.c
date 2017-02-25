#include <stdio.h>
int min(float a[],int n);
void main ()
{ float a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%f",&a[i]);
  printf("vtmin= %d",min(a,n));


}
int min(float a[],int n)
{
    int i,vt;
    float m;
    m=a[0];vt=0;
    for (i=0;i<n;i++)
        if (a[i]<m) {m=a[i]; vt=i;}
    return(vt);
}
