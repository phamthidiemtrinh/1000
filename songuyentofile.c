#include <stdio.h>
int nguyento(int n);
void main()
{
    int a[225];
    int i,n;
    char c;
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
   for (i=0;i<=n;i++)
    if (nguyento(a[i])==1)
    fprintf(f2,"%d ",a[i]);
    fclose(f1);
    fclose(f2);
}
int nguyento(int n)
{
if(n<2) return 0;
if(n==2) return 1;
int i=2;
while ((i<=(int)sqrt(n)) && (n%i!=0)) i++;
if(n%i!=0) return 1;
else return 0;
}
