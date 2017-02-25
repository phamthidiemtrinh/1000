#include <stdio.h>
int ht(int a[],int n);
void main ()
{ int a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("ht dau  tien %d",ht(a,n));


}
int ht(int a[],int n)
{
    int i,j,s;
    int m;
    m=-1;
    for (i=0;i<n;i++)
    {   s=0;
    for (j=1;j<a[i];j++)
         if (a[i]%j==0)s+=j;
    if (s==a[i]) {m=a[i];break;}
     }
     return(m);
}
