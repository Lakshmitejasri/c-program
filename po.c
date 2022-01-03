#include<stdio.h>
int main()
{
	int a=20;
	float f=5.666;
	char c='v';
	double d=22222.33333;
	int *p;
	float*h;
	char*t;
	double*l;
	p=&a;
	h=&f;
	t=&c;
	l=&d;
	printf("\n%p",p);
	printf("\n%p",h);
	printf("\n%p",t);
	printf("\n%p",l);
	printf("\n%d",*p);
	printf("\n%f",*h);
	printf("\n%c",*t);
	printf("\n%lf",*l);
}
