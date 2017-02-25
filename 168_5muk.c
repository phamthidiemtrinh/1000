#include <stdio.h>
int mu(int a[],int n);
void main ()
{ int a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("so 5^k max %d",mu(a,n));


}
int mu(int a[],int n)
{
    int i;
    int m;
    m=0;
    for (i=0;i<n;i++)
        {  int t=1;
            while (t<a[i]) t=t*5;
            if (t==a[i]&&a[i]>m) m=a[i];
        }
    return(m);
}
