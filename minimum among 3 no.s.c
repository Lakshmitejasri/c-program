// minimum among 3
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a<c)
	{
		printf("a is minimum");
	}
	else if(b<a&&b<c)
	{
		printf("b is minimum");
	}
     else 
	{
		printf("c is minimum");
	}
}
