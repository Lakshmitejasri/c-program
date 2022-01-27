#include<stdio.h>

int fact(int);
void main()
{
	printf("%d",fact(5));
}
int fact(int x)
{
	if(x==1)
	return 1;
	else
	return x*fact(x-1);
}
