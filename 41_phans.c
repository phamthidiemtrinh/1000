#include<stdio.h>
#include<math.h>
float phan(int n);
void main()
{
    int n;
    scanf("%d",&n);

    printf("%f", phan(n));
}
float phan(int n)
{
    if (n==1) return(1);
      else return(1/(1+ phan(n-1)));

}
