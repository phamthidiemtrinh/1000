#include <stdio.h>
void  quicksort (int a[],int d,int c);
void main ()
{ int a[100];
  int i,n,j,t,b,c;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
quicksort(a,0,n-1);
t=a[n-1]-a[0];
for (i=0;i<n-1;i++)
    for (j=i+1;j<n;j++)
        if (a[j]-a[i]<t)
    {
        t=a[i]-a[j];
        b=a[i];
        c=a[j];
    }
      printf("\n %d--%d ",b,c);
}
void quicksort( int a[],int d,int c)
{
     if(d>=c) return;
     int i=d;
     int j=c;
     int x;
     x=a[(d+c)/2];
     while(i<=j)
     {
        while(a[i]<x) i++;
        while(a[j]>x) j--;
        if(i<=j)
      {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;j--;
      }
     }
     quicksort(a,d,j);
     quicksort(a,i,c);

}
