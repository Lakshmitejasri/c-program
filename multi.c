#include<stdio.h>
int main()
{
	int i,s,m;
	scanf("%d",&m);
	i=1;
	while(i<21)
	{
		s=i*m;
		printf("\n%d*%d=%d",i,m,s);
		i++;
	}
}
