#include <stdio.h>
void main()
{
    int s;
    FILE *f1,*f2;
    f1=fopen("tep_nguon.txt","r");
    if (f1== NULL)
        printf("tep khong ton tai ");
    f2=fopen("tep_dich.txt","w");
     while((s=getc(f1))!=EOF)
    {
    if (s>=97) s-=32;
    fprintf(f2,"%c",s);
    }
    fclose(f1);
    fclose(f2);
}
