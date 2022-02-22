//program to display all the numbers which are divisible by 13 but not by 3 between 100 and 200
#include<stdio.h>
int main()
{
	int i;
	for(i=100;i<=200;i++)
	{
		if(i%13==0&&i%3!=0)
		printf("%d\t",i);
	}
}
