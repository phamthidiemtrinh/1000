#include <stdio.h>
void main()
{
    int s;
    FILE *f1,*f2;
    f1=fopen("tep_nguon.txt","rb");
    if (f1== NULL)
        printf("tep khong ton tai ");
    f2=fopen("tep_dich.txt","wb");
    while((s=getc(f1))!=EOF)
    putc(s,f2);
    fclose(f1);
    fclose(f2);
}
