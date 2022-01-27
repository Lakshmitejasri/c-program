#include<stdio.h>
void prime()
{
	int a,f,j,n,i;
	scanf("%d",&a);
	while(i<n)
	{
	f=1;
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			f=0;
		}
		}	
	}
	if(f)
	{
		printf("%d\n",i);
	}
	i++;
 }
 
int main()
{
	prime();
	return 0;
}
 


