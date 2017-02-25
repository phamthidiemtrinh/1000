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
    if (n==1) return(sqrt(2));
      else return(sqrt(2+can(n-1)));

}
