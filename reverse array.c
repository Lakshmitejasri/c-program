#include<stdio.h>
int main()
{
	int a[30],n,i;
	scanf("%d",&n);
	if(n>30)
	{
		printf("nubers in order");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
		printf("reverse");
		for(i=n-1;i>=0;i--)
		{
		printf("%d",a[i]);
		return 0;
			
			
		}
	}
}
