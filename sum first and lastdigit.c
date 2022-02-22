#include<stdio.h>
void main()
{
	int n,sum=0,r1,r2;
	scanf("%d",&n);
	r1=n%10;
	while(n>0)
	{
		r2=n%10;
		n=n/10;
	}
	sum=r1+r2;
	printf("%d",sum);
	
}
