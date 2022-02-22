#include<stdio.h>
int main()
{
	int a[20],i,n,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		a[i]=1;
		else
		a[i]=0;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
