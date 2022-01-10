#include<stdio.h>
 void even(int a)
 {
 	if (a%2==0)
 	{
	printf("even");
	}
	else
	{
		printf("not even");
	}
 }
 int main()
 {
 	int x;
 	scanf("%d",&x);
 	even(x);
 	return 0;
 }
