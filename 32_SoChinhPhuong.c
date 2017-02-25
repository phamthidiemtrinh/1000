#include <stdio.h>
#include <math.h>
void main()
{
    int so,kiemTra;
    printf("nhap so \n");
    scanf("%d",&so);
    kiemTra=(int)sqrt(so);
    if (kiemTra*kiemTra==so) printf("%d là so chinh phuong",so);
    else printf("%d khong la so chinh phuong",so);

}
