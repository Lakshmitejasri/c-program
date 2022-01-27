#include<stdio.h>
int gcd(int,int);
main()
{
	printf("%d",gcd(45,6));
}
int gcd(int a,int b)
{
if(a%b==0)
return b;
else
return gcd(b,a%b);
}
