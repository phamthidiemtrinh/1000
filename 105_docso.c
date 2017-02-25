#include <stdio.h>
void main ()
{  typedef char a[5];
    a b[10]={"","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
    int n,c,dv;
    scanf("%d",&n);
    dv=n%10;
    c=(n-dv)/10;
    if (n<=19) printf("muoi %s",b[dv]);
    else
    printf("%s muoi %s",b[c],b[dv]);
}




