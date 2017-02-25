#include <stdio.h>
void main()
{
    int x,y,z,t;
    t=0;
    for (x=0;x<=20;x++)
        for (y=0;y<=10;y++)
            for (z=0;z<=4;z++)
                if ((x+y*2+z*5)==20) t++;
    printf("%d",t);
}
