
#include <stdio.h>
void main()
{
    int a[225];
    int i,n,t,max;
    FILE *f1,*f2;
    f1=fopen("tep_nguon.txt","r");
    if (f1== NULL)
        printf("tep khong ton tai ");
    f2=fopen("tep_dich.txt","w");
    n=-1;
    while (!feof(f1))
           {
               n++;
               fscanf(f1,"%d",&a[n]);
           }
max=a[0];
for (i=0;i<n;i++) if (a[i]>max ) max=a[i];

    fprintf(f2,"%d",max);
    fclose(f1);
    fclose(f2);

}
