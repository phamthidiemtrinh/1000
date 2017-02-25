#include <stdio.h>
#include <stdlib.h>
void nhap(float*p,int n);
void xuat(float*p, int n);
void sapxep(float*p,int n);
//----------------------------------
void main()
{
    int n;
    float*p;
    scanf("%d",&n);
    p=(float*)malloc(n*sizeof(float));
    nhap(p,n);
    printf("\nday so vua nhap\n");
    xuat(p,n);
    printf("\nDay so da sap xep\n");
    sapxep(p,n);

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
//----------------------------------
void sapxep(float*p,int n)
{  int i,j;
float t;
   for (i=0;i<n-1;i++)
         for (j=i+1;j<n;j++)
         {
             if (*(p+i)> *(p+j))
             {
                 t=*(p+i);
                 *(p+i)=*(p+j);
                 *(p+j)=t;
             }
         }
    for (i=0;i<n;i++)
        printf("%f   ",*(p+i));
}
