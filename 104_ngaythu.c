#include <stdio.h>
void main ()
{
    int ng,t,n,i;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d%d%d",&ng,&t,&n);
    for (i=1;i<t;i++) ng+=a[i];
    if(t>2&&n%4==0&&n%100!=0) ng--;
    printf("%d",ng);
}



