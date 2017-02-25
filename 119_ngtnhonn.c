#include <stdio.h>
#include <stdlib.h>
//----------------------------------
void main()
{
    int n,i,j,t;
    scanf("%d",&n);
    for (i=2;i<=n;i++)
    {t=0;
    if (i==2 || i==3 ) printf("%d   ",i);
    if (i>3)
    {

            for (j=2;j<=(int)(sqrt(i));j++)
                if (i%j==0) t=1;
            if (t==0) printf("%d  ",i);


    }
    }
}
