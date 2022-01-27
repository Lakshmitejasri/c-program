#include<stdio.h>
int main()
{
	int a=20;
	//a memory location= 1234
	printf("%d%d%d%d",a,&a,*(&a));
	return 0;
}
