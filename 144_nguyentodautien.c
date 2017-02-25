#include <stdio.h>
int ngto(int a[],int n);
void main ()
{ int a[100];
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("ngto dau tien %d",ngto(a,n));


}
int ngto(int a[],int n)
{
    int i,j;
    int m;
    m=-1;
    for (i=0;i<n;i++)
{
    if (a[i]==2) {return(2);break;}
    else if (a[i]>2)
    {
        for (j=2;j<=(int)sqrt(a[i]);j++)
                 if (a[i]%j==0)break;
        if (a[i] % ((int)sqrt(a[i])+1)!=0) {m=a[i];break;}
      }
    return(m);
}
}
