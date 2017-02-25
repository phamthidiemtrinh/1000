#include <stdio.h>
void main ()
{
    int ng,t,n;
    scanf("%d%d%d",&ng,&t,&n);
    if (ng==28 && t==2)
             {  if (n%4==0 && n%100!=0) ng++;
                     else ng=1;
             }
    else
    if (ng==29 && t==2) ng=1;
    else
    if ((ng==30)&& (t==4||t==6||t==9|| t==11)) ng=1 ;
    else
        if (ng==31) ng=1;
    else ng++;

    if (ng==1) t++;
    if (t==13) t=1;
    if (t==1)  n++;
    printf ("%d/%d/%d",ng,t,n);
}



