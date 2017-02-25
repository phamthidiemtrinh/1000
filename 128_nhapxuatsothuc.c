#include <stdio.h>
#include <stdlib.h>
void nhap(float*p,int n);
void xuat(float*p, int n);
//----------------------------------
void main()
{
    int n;
    float*p;
    scanf("%d",&n);
    p=(float*)malloc(n*sizeof(float));
    nhap(p,n);
    xuat(p,n);

    free(p);
}
//---------------------------------
void nhap(float*p,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
       printf ("nhap a[%d]=",i);
       scanf("%f",(p+i));

    }
}
//---------------------------------
void xuat(float*p,int n)
{  int i;

    for (i=0;i<n;i++)
        printf ("%f  ",*( p+i));
}
