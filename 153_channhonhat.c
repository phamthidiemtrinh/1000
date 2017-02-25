#include <stdio.h>
int ht(int a[],int n);
void main ()
{ int a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("chan nho nhat %d",ht(a,n));


}
int ht(int a[],int n)
{
    int i,j,s;
    int m;
    m=-1;
    for (i=n-1;i>=0;i--)
    if (a[i]%2==0){m=a[i];break;}
    if(m==-1) return(-1);
    else
    {
         for (i=n-1;i>=0;i--)
    if (a[i]%2==0&& a[i]<m )m=a[i];
     return(m);
    }
}
