#include<stdio.h>
void max(int*,int*,int*);
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b,&c);
	max(&a,&b,&c);

}
void max(int*x,int*y,int*z)
{
	if(*x>*y&&*x>*z)
	{
		printf("max is %d",*x);
	}
	else if(*y>*z&&*y>*x)
	{
		printf("max is %d",*y);
	}
	else
	{
		prntf("max is %d",*z);
	}
}
