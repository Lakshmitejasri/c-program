#include<stdio.h>
int main()
{
	int a[20][20],m,n,i,j;
	scanf("%d",&m);
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
