#include <stdio.h>
int mu(int a[],int n);
void main ()
{ int a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
         mu(a,n);


}
int mu(int a[],int n)
{
    int i;
    for (i=0;i<n;i++)
        {  int t=1;
            while (t<a[i]) t=t*3;
            if (t==a[i]) printf("%d    ",a[i]);
        }
}
