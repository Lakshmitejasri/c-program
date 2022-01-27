#include<stdio.h>
void lcm(int a,int b)
{
	int i;
	for(i=1;i<=a*b;i++)
	{
		if(i%a==0&&i%b==0)
	   {
	   printf("lcm is %d",i);
	   break;
	}
	}
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	lcm(a,b);
	return 0;
}
