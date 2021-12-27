#include <stdio.h>
int main()
 {
  int n,r=0,c=0;
  int d=2;
  scanf("%d",&n);
  while(d<=(n/2))
  {
  	r=n%d;
    if(r==0)
	c++;
    d++;
  }
  if(c==0)
  printf("\nit is a prime number");
  else
  printf("\nit is not a prime number");
}
