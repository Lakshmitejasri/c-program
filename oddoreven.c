#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	switch(a%2)
	{
		case 0:printf("even");break;
		case 1:printf("odd");;break;
	default:printf("not even or odd");	
	}
}
