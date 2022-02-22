#include<stdio.h>
int main()
{
	int a[100][100],n,k,i,j,sum=0;
	printf("Enter the no.of rows you need in the matrix:");
	scanf("%d",&n);
	printf("Enter the no.of cols you need in the matrix:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix with the given requirement is:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			if(i%2!=0)
			{
				sum=sum+a[i][j];
				printf("sum of even row elements is %d\n",sum);
			}
		}
	}
	printf("sum of even row elements is %d",sum);
}
