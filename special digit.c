//special digit
#include<stdio.h>
int main()
{
int n,a,b,sum,product;
printf("enter speial two digit no.");
scanf("%d",&n);
a=n/10;
b=n%10;
sum=a+b;
product=a*b;
if((sum+product)==n)
{
	printf("special digit");
}
else
{
printf("not a special digit");
}
}
