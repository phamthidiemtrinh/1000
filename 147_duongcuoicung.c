#include <stdio.h>
float duong(float a[],int n);
void main ()
{ float a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%f",&a[i]);
  printf("duong cuoicung = %f",duong(a,n));


}
float duong(float a[],int n)
{
    int i;
    float m;
    m=-1;
    for (i=n-1;i>=0;i--)
        if (a[i]>0) {m=a[i]; break;}
    return(m);
}
