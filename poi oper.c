#include<stdio.h>
void oper(int*,int*,int*,int*,int*);
int main()
{
	int a,b,c,d,e;
	scanf("%d%d",&a,&b);;
	oper(&a,&b,&c,&d,&e);
	printf("\nthe sum is %d",c);
	printf("\nthe diff is %d",d);
	printf("\nthe prod is %d",e);
}
void oper(int*p,int*q,int*r,int*s,int*t)
{
	*r=*p+*q;
	*s=*p-*q;
	*t=*p**q;
	printf( "the sum is %d",*r);
	printf("the diff is %d",*s);
	printf("the prod is %d",*t);
	
	
}
