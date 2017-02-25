#include <stdio.h>
int nho(int a[],int n);
void main ()
{ int a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("ngto nho hon 100 %d",nho(a,n));


}
int nho(int a[],int n)
{
    int i,j,t;
    int m;
    m=0;
    for (i=0;i<n;i++)
        if (a[i]<100 && a[i]%2!=0)
        {if (a[i]==2) m++;
    else if (a[i]>2)
    {
        for (j=2;j<=(int)sqrt(a[i]);j++)
                 if (a[i]%j==0)break;
        if (a[i] % ((int)sqrt(a[i])+1)!=0) m++;
      }

        }
    return(m);
}

