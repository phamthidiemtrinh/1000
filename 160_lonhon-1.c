#include <stdio.h>
void  quicksort (float a[],int d,int c);
void main ()
{ float a[100],x;
  int i,n;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%f",&a[i]);

quicksort(a,0,n-1);
x=-1;
for(i=0;i<n;i++)
    if (a[i]>=0) break;
if (a[i-1]>-1) x=a[i-1];
printf("%f ",x);
}
void quicksort( float a[],int d,int c)
{
     if(d>=c) return;
     int i=d;
     int j=c;
     float x;
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
