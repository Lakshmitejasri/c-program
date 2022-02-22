//add 10 to array
#include<stdio.h>
int main()
{
	int a[20],i,n,s=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		
		a[i]=a[i]+10;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
