#include<stdio.h>
int fact(int);
int main()
{
	int a[20],i,n,c=0,b[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=fact(a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	
}
int fact(int n)
{
	int i=1,j,f=1;
	while(i<n)
	{
		f=f*(i+1);
		i++;
	}
		return f;
	}
