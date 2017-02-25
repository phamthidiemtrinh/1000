#include<stdio.h>
#include<math.h>
float can(int n);
int gt(int n);
void main()
{
    int n;
    scanf("%d",&n);

    printf("%f", can(n));
}
int gt(int n)
{
    if (n==1) return(1);
         else return(n*gt(n-1));
}
float can(int n)
{
    if (n==2) return(1);
      else return(pow(gt(n)+can(n-1),(float)1/n));

}
