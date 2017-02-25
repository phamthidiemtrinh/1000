#include<stdio.h>
void main()
{
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    if  (a==0)
    {
        if (b==0) printf("vo so nghiem");
        else printf("vo nghiem");
    }
    else printf("x=%f",(float)-b/a);
}
