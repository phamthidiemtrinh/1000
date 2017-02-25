#include <stdio.h>
void main ()
{
    int ng,t,n,c;
    scanf("%d%d%d",&ng,&t,&n);
    c=0;

   if (ng==1)
   {
       if (t==4||t==6||t==9|| t==11|| t==2||t==8||t==1) ng=31;
      else if (t==5||t==7||t==10||t==12) ng=30;
      else if (t==3)
       {
           if (n%4==0&&n%100!=0) ng=29;
           else ng=28;
       }
       c=1;
   }

    else ng--;
    if (c==1&&t==1) t=12; else t--;
    if (t==12)  n--;


    printf ("%d/%d/%d",ng,t,n);
}



