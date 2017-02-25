#include <stdio.h>
void  quicksort (int a[],int d,int c);
void main ()
{ int a[100];
  int i,n,s,vt,min,t;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
quicksort(a,0,n-1);
t=a[0];
s=a[0];min=n;
vt=0;
for (i=0;i++;i<n)
      if (a[i]==t) vt++;
      else
      { t=a[i];
        if (vt<min){s=a[i];min=vt;}
        vt=1;
      }

printf("xuat hien it nhat %d ",s);
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
