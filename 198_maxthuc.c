#include <stdio.h>
float Max(float a[],int n);
void main ()
{ float a[100];
  int i,n,t;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%f",&a[i]);
  t= Max(a,n);

        for(i=0;i<n;i++)
            if (a[i]==t) printf("%d   ",i);
}
float Max(float a[],int n)
{
    int i;
    float m;
    m=a[0];
    for (i=0;i<n;i++)
        if (a[i]>m) m=a[i];
    return(m);
}
