// reverse of an array
#include<stdio.h>
int main()
{
	int a[20];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
