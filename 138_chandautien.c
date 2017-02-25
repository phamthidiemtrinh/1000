#include <stdio.h>
int chan(int a[],int n);
void main ()
{ int a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("chan cuoi cung %d",chan(a,n));


}
int chan(int a[],int n)
{
    int i;
    int m;
    m=-1;
    for (i=n-1;i>=0;i--)
        if (a[i]%2==0) {m=a[i];break;};
    return(m);
}
