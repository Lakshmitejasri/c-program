#include<stdio.h>
int main()
{
	int a[50],i,key,n,find=0;
	scanf("%d",&n);
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++)
	{
		if(a[i]==key)
		{
			find=3;
			break;
		}
		if(find==3)
		{
			printf("found");
		}
		else
		{
			printf("not found");
		}
	}
}
