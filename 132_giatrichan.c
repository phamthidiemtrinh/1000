#include <stdio.h>
int nho(int a[],int n);
void main ()
{ int a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("chan %d",chan(a,n));


}
int chan(int a[],int n)
{
    int i;
    int m;
    m=0;
    for (i=0;i<n;i++)
        if (a[i]%2==0) m++;
    return(m);
}
