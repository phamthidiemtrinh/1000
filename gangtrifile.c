
#include <stdio.h>
void main()
{
    int a[225];
    int i,n,t,b,c,j;
    FILE *f1,*f2;
    f1=fopen("tep_nguon.txt","r");
    if (f1== NULL)
        printf("tep khong ton tai ");
    f2=fopen("tep_dich.txt","w");
    n=-1;
    while (!feof(f1))
           {
               n++;
               fscanf(f1,"%d",&a[n]);
           }
    quicksort(a,0,n);
    t=a[n-1]-a[0];
    b=a[n-1];c=a[0];
for (i=0;i<n-1;i++)
    for (j=i+1;j<n;j++)
        if (a[j]-a[i]<t)
    {
        t=a[i]-a[j];
        b=a[i];
        c=a[j];
    }
    fprintf(f2,"%d---%d ",b,c);
    fclose(f1);
    fclose(f2);

}
void quicksort( int a[],int d,int c)
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
