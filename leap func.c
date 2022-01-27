#include<stdio.h>
void leap(int a);
int main()
{
	int a;
	scanf("%d",&a);
	leap(a);
	return 0;
}
void leap(int a)
{
	if(a%4==0)
	{
		printf("leap year");
	}
else
{
	printf("not a leap year");
}}
