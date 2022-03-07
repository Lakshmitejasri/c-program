#include<stdio.h>
int main()
{
	int a[50],key,n,i,f=0;
	scanf("%d",&n);
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		}	
		for(i=0;i<n;i++)
		{
			if(a[i]==key)
			{
				f++;
			}
		}
		printf("%d",f);
}
