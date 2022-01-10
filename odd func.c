#include<stdio.h>
 void odd(int a)
 {
 	if (a%2!=0)
 	{
	printf("odd");
	}
	else
	{
		printf("not odd");
	}
 }
 int main()
 {
 	int x;
 	scanf("%d",&x);
 	odd(x);
 	return 0;
 }
