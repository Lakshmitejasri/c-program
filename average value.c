#include<stdio.h>
int main()
{
	int n,i,avg,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum+=n;
		avg=sum/n;
	}

	printf("%d",avg);
}
