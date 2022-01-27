#include<stdio.h>
int fib(int n);
int main()
{
	int a;
	for(a=0;a<10;a++)
	{
	printf("%d",fib(a));
}
}
int fib(int n)
{
	if (n==0)
	return 0;
	else if (n==1)
	return 1;
	else 
	return fib(n-1)+fib(n-2);
}
