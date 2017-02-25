#include <stdio.h>
int UCLN(int a, int b);
void main ()
{
    int UC,BCNN,a,b,i,t;
    scanf("%d%d",&a,&b);

    if (a==0 || b==0) printf("0");
    else
    printf("bCNN  : %d\n",a*b/UCLN(a,b));
}
int UCLN(int a, int b)
{    if (a==b) return(a);
     if (a>b) return (UCLN(a-b,b));
     else return (UCLN(a,b-a));
}
