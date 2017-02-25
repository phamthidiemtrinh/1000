#include <stdio.h>
void main()
{
    float a,b,c,d,e,f ,x,y,d0,d1,d2;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    d0=a*d-b*c;
    d1=c*e-b*f;
    d2=a*f-c*d;
    if(d0=d1=d2)printf("vo so nghiem");
    else if(d0=0&&(d1!=0||d2!=0))printf(" vo nghiem");
        else
    {
        printf("x=%f\n",(float)d1/d0);
        printf("y=%f\n",(float)d2/d0);
    }

}
