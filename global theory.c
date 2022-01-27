#include<stdio.h>
int x=89;
void f1();
int main()
{
	int b=55;
	printf("%d",b);
	f1();
	f1();
	x=234;
	f1();
	
}
void f1()
{
	printf("%d",x);
	x++;
}

