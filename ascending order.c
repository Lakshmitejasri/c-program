#include<stdio.h>
void main()
{
	int a[20],x,i,n,temp,j;
	printf("enter size of an array\n");
	scanf("%d",&n);
	printf("enter elements to an array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

