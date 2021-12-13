#include<stdio.h>
int main()
{
	int a,b,x;
	char operator;
	scanf("%d %c %d",&a,&operator,&b);
	switch(operator)
	{
	case '+':printf("a+b");break;
	case '-':printf("a-b");break;
	case '*':printf("a*b");break;
	case '/':printf("a/b");break;
	default:printf("not valid");
}
}