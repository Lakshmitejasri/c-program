//product of elements in an array
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
		
		s=s*a[i];
	}
	printf("%d",s);
}
