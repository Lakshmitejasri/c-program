//sum of all elementss in a array
#include<stdio.h>
void main()
{
	int a[10][10],m,n,i,j,sum=0;
	printf("enter size of rows and columns of A\n");
	scanf("%d%d",&m,&n);
	printf("enter eliments of a\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	{
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("sum of all elements =%d",sum);
	}	
	}
	
