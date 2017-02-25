#include <stdio.h>
int vtMax(int a[],int n);
void main ()
{ int a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("vtMax= %d",vtMax(a,n));


}
int vtMax(int a[],int n)
{
    int i;
    int m,vt;
    m=a[0]; vt=0;
    for (i=0;i<n;i++)
        if (a[i]>m) {m=a[i]; vt=i;}
    return(vt);
}
