//program to display the number names of the digits 
#include<stdio.h>
int main()
{
	int n=0,x,m,y;
	scanf("%d",&m);
	while(m>0)
	{
		y=m%10;
		n=n*10+y;
		m=m/10;
	}
	while(n>0)
	{
		x=n%10;
	if(x==0)
		{
			printf("zero ");
		}
	else if(x==1)
		{
			printf("one ");
		}
	else if(x==2)
		{
			printf("two ");
		}
   else if(x==3)
		{
			printf("three ");
		}
	else if(x==4)
		{
			printf("four ");
		}
	else if(x==5)
		{
			printf("five ");
		}
	else if(x==6)
		{
			printf("six ");
		}
	else if(x==7)
		{
			printf("seven ");
		}
	else if(x==8)
		{
			printf("eight ");
		}
	else if(x==9)
		{
			printf("nine ");break;
		}	
		n=n/10;
	}
}
