#include <stdio.h>
void main ()
{
    int t,n;
    scanf("%d%d",&t,&n);
    if (t==2)
    {
        if (n%4==0 && n%100!=0) printf("29");
        else printf("28");
    }
    else if(t==4||t==6||t==9|| t==11) printf("30");
    else printf("31");
}
