#include <stdio.h>
#include <math.h>
void main ()
{
    int n,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    if (sqrt(i)==(int)sqrt(i))  printf  ("%d  ",i);
}
