#include <stdio.h>
void  main()
{
    int n,i,s;
    s=0;
    n=0;
    while (s<10000)
    {
        n++;
        s+=n;;
    }
    printf("%d",n);;

}
