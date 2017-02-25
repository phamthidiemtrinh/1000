#include<stdio.h>
#include<math.h>
float can(int n);
void main()
{
    int n;
    scanf("%d",&n);

    printf("%f", can(n+1));
}

float can(int n)
{
    if (n==2) return(1);
      else return(pow(n-1+can(n-2),(float)1/n));

}
