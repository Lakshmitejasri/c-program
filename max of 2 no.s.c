#include<stdio.h>
void max(int,int);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	max(a,b);

}
void max(int x,int y)
{
	if(x>y)
	{
		printf("max is %d",x);
	}
	else
	{
		printf("max is %d",y);
	}
}
