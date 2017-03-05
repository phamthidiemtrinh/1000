#include <stdio.h>
void main()
{
    int s;
    FILE *f1;
    f1 = fopen("tep_nguon.txt","rb");
    if (f1== NULL)
        printf("tep khong ton tai ");
    else
    while(!feof(f1))
    {
        fscanf(f1,"%d",&s);
        printf("%d\n",s);
    }

    fclose(f1);
}
