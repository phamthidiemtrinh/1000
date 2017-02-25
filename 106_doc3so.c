#include <stdio.h>
void main ()
{  typedef char a[5];
    a b[10]={"","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
    int n,c,dv,t;
    scanf("%d",&n);
    dv = n%10;
    n=(n-dv)/10;
    c=n%10;
    t=(n-c)/10;
    printf ("%s tram ",b[t]);
    if (c==0)
    {  if (dv!=0) printf ("le ");
    }
    else if (c==1) printf("muoi");
    else printf ("%s muoi ",b[c]);
    printf("%s",b[dv]);
}




