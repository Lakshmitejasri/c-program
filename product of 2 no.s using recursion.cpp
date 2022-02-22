 //product of two numbers using recursion
#include<stdio.h>
int product(int a,int b);
int main()
{
	int n1,n2,pro=0;
	printf("Enter a value for n1:");
	scanf("%d",&n1);
	printf("Enter a value for n2:");
	scanf("%d",&n2);
	pro=product(n1,n2);
	printf("%d",pro);
	return 0;
}
int product(int a,int b)
{
	int k=0;
	if(a<b)
	{
	if(b==0)
	return 0;
	else if(b==1)
	return 1;
	else 
	return a+product(a,b-1);
	}
	else
{
	   a=b;
	  b=k;
	  if(b==0)
	return 0;
	else if(b==1)
	return 1;
	else 
	return a+product(a,b-1);	
	}
}

