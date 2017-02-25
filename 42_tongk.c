#include <stdio.h>
void main()
{
    int n,k,s;
    scanf("%d",&n);
    s=0;k=0;
    while (s<n)
    {
        k++;
        s+=k;
    }
    k--;
    printf("\n%d",k);
}
