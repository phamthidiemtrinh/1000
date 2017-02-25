#include <stdio.h>
#include <math.h>
void main ()
{
    int so,i;
    printf("nhap so \n");
    scanf("%d",&so);
    if (so<2) printf("%d khong la so nguyen to",so);
    else if (so==2) printf ("%d là so nguyen to",so);
    else
    {
        for (i=2;i<=(int)sqrt(so);i++)
        {

                 if (so%i==0)
                {
                    printf("khong phai so nguyen to");
                    break;
                }
        }
        if (so % ((int)sqrt(so)+1)!=0) printf("la so nguyen to");
      }
}
