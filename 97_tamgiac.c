#include <stdio.h>
#include <math.h>
void main ()
{
    float a,b,c,t;
    scanf("%f%f%f",&a,&b,&c);
    t=a;
    if (a>b) {a=b;b=t;}
    t=b;
    if(b>c){b=c;c=t;}
    if (c==sqrt(a*a+b*b)) { printf("vuong"); t=0;}
    if(a==b)
    {
        if(b==c) printf("deu");
        else printf("can");
        t=0;
    }
    if (t!=0) printf("thuong");
}
