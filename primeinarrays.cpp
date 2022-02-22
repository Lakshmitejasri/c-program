#include<stdio.h>
int prime(int);
int main()
{
	int a[20],n,z,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		z=prime(a[i]);
		if(z==0)
		{
			printf("%d\t",a[i]);
		}
	}
	
}
int prime(int n)
{
	int i,flag=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		flag=1;
		break;
	}
	if(n==1)
	return 0;
	else if(flag==0)
	return 0;
	else if(n==2)
	return 0;
	else
	return 1;
}
