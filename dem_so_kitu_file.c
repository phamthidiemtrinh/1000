#include <stdio.h>
void main()
{
    int s;
    int t=0;
    FILE *f1,*f2;
    f1=fopen("tep_nguon.txt","r");
    if (f1== NULL)
        printf("tep khong ton tai ");
    f2=fopen("tep_dich.txt","w");
     while((s=getc(f1))!=EOF)
    if ( (65<=s&&s <=90)|| (97<=s && s<=122)) t++ ;
    fprintf(f2,"%d",t);
    fclose(f1);
    fclose(f2);
}
