#include <stdio.h>
void le(int a[],int n);
void main ()
{ int a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    le(a,n);

}
void le(int a[],int n)
{
    int i;
    int m;
    m=0;
    for (i=0;i<n;i++)
        {
            int t=a[i];
            int s=0;
            while (t!=0)
            { s=(t%10);
            if (s%2==0) break;
              t=(int)(t-s)/10;
             }
            if (t==0  && s%2!=0 ) printf("%d   ",a[i]);
        }
}
