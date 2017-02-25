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
    if (n==2) return(sqrt(2));
      else return(pow(n+can(n-1),(float)1/n));

}
