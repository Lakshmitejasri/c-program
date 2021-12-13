#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	switch(x)
	{
    case 1:printf("x is positive");break;
	case -2:printf("x is negative");break;
	case 0:printf("x is zero");break;
	case 5:printf("x is positive");break;
	case -10:printf("x is negative");break;
	default:printf("not valid");
}
}
