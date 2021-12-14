#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	switch (a>b)
	{
	case 0:printf("a is not greater than b");break;
	case 1:printf("a is greater than b");break;
	default:printf("not valid");
	}
	
}
