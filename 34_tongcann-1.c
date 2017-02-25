#include<stdio.h>
#include<math.h>
float can(int n);
void main()
{
    int n;
    scanf("%d",&n);

    printf("%f", can(n));
}
float can(int n)
{
    if (n==1) return(1);
      else return(sqrt(n+can(n-1)));

}
