
#include <stdio.h>
void main()
{
    float a[225];
    int i,n;
    float t=0;
    FILE *f1,*f2;
    f1=fopen("tep_nguon.txt","r");
    if (f1== NULL)
        printf("tep khong ton tai ");
    f2=fopen("tep_dich.txt","w");
    n=-1;
    while (!feof(f1))
           {
               n++;
               fscanf(f1,"%f",&a[n]);
           }
for (i=0;i<n;i++) t+=a[i];

    fprintf(f2,"%f",t);
    fclose(f1);
    fclose(f2);

}
