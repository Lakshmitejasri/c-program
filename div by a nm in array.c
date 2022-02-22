#include<stdio.h>
int main()
{
	int a[20],i,n,z,c=0;
	scanf("%d%d",&n,&z);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%z==0)
		c++;
	}
	printf("%d",c);
}
