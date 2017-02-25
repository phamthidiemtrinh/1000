#include <stdio.h>
void main ()
{
    float a,b,c,t;
    scanf("%f%f%f",&a,&b,&c);
    t=a;
    if (a>b) {a=b;b=t;}
    t=b;
    if(b>c){b=c;c=t;}
    printf("%f %f %f",a,b,c);
}
