#include <stdio.h>
void main()
{
    int s;
    int t=0;
    char c;
    FILE *f1,*f2;
    f1=fopen("tep_nguon.txt","r");
    if (f1== NULL)
        printf("tep khong ton tai ");
    f2=fopen("tep_dich.txt","w");
    do
   {
    c=getc(f1);
    if(c==' '|| c=='\n') t++;
   } while(c!=EOF);
    fprintf(f2,"%d",t);
    fclose(f1);
    fclose(f2);
}
