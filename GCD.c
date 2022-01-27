#include<stdio.h>
int gcd(int a, int b);

int main()
{
  int a,b,c,d;
  scanf("%d %d",&c,&d);
  int r = gcd(a,b);
  printf("The GCD of %d and %d = %d", c , d , r);
return 0;
}
int gcd(int a, int b)
{
  int i, hcf;
  for(i=1; i<=a && i<=b; i++)
  {
    if(a%i==0 && b%i==0)
    {
      hcf = i;
    }
  }
  return hcf;
}
