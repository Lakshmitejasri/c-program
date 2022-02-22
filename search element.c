//search element
#include<stdio.h>
void main()
{
	int a[20],x,i,n,flag=0;
	printf("enter size of an array\n");
	scanf("%d",&n);
	printf("enter elements to an array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to be searched\n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("element found");
	else
	printf("element not found");
}
