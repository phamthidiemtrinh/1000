#include <stdio.h>
void  quicksort (int a[],int d,int c);
void main ()
{ int a[100],x;
  int i,n,j;
  scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
quicksort(a,0,n-1);
int t=a[n-1]+1;
int nt;
nt=0;
while (nt=0)
{
     if (t==2) {nt=t;break;}
    else if (t>2&& t%2!=0)
    {
        for ( j=2;j<=(int)sqrt(t);j++)
                 if (t%j==0)break;
        if (t % ((int)sqrt(t)+1) !=0) {nt=t;break;}
        t++;
      }
}
printf("---->%d ",nt);

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
