#include <stdio.h>
void  quicksort (int a[],int d,int c);
void main ()
{ int a[100],x;
  int i,n;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
quicksort(a,0,n-1);
if (a[n-1]%2!=0) printf("------->%d",a[n-1]+1);
else printf("----->%d",a[n-1]+2);

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
