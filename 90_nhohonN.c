
#include <stdio.h>
void  main()
{
    int n,i,s,m;
    scanf("%d",&m);
    s=0;
    n=0;
    while (s<m)
    {
        n++;
        s+=n;;
    }
    printf("%d",n);;

}
