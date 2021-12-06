#include<stdio.h>
main()
{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("the person is elible for voting %d",age);
	}
	else
	{
		printf("not elgible");
	}
}
