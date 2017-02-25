#include<stdio.h>
#include<math.h>
float can(int n,int x);
int mu(int n,int x);
void main()
{
    int n,x;
    scanf("%d%d",&n,&x);

    printf("%f", can(n,x));
}
int mu(int n,int x)
{
    if (n==1) return(x);
         else return(x*mu(n-1,x));
}
float can(int n,int x)
{
    if (n==2) return(1);
      else return(sqrt(mu(n,x)+can(n-1,x)));

}
