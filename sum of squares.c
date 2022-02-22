//sum of squares of digits of a number 
#include<stdio.h>
int main()
{
	int n,r,p=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		p=p+r*r;
		n=n/10;
	}
	printf("%d",p);
}
