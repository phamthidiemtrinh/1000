#include <stdio.h>
int ganh(int a[],int n);
void main ()
{ int a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("so ganh %d",ganh(a,n));


}
int ganh(int a[],int n)
{
    int i;
    int m;
    m=-1;
    for (i=0;i<n;i++)
        {
            int t=a[i];
            int s=0;
            while (t!=0)
            { s=s*10+(t%10);
              t=(int)(t-s)/10;
            }
            if (s==a[i]) {m=a[i];break;}
        }
    return(m);
}
