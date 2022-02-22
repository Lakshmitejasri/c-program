//Program which takes N integers from keyboard using loop and print their average value on the screen.
#include<stdio.h>
int main()
{
	int n,i=1,sum=0,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		sum=sum+x;
	}
	printf("%d",sum/n);
}
