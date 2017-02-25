#include <stdio.h>
float am(float a[],int n);
void main ()
{ float a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%f",&a[i]);
  printf("am dau tien= %f",am(a,n));


}
float am(float a[],int n)
{
    int i;
    float m;
    m=-1;
    for (i=0;i<n;i++)
        if (a[i]<0) {m=a[i]; break;}
    return(m);
}
