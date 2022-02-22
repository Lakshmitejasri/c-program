// copy one array to other
#include<stdio.h>
void main()
{
	int a[20],b[20],i,n;
	printf("enter the values to array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
}
