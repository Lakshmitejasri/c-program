// symmmetric
#include<stdio.h>
int main()
{
	int a[10][10],m,n,i,j,T[10][10],flag=0;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			T[j][i]=a[i][j];
		}	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]!=T[i][j])
			flag=0;
		}	
	}
	if(flag==1)
	printf("Symmetric");
	else
	printf("not symmetric");
	}
	
