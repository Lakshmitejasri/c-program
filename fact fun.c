#include<stdio.h>
// func declaration
int fact(int y);  
//func call    
int main(void)
{
	int a;
	scanf("%d",&a);
	printf("factorial is %d",fact(a));
	return 0;
}
//func definition
int fact(int y)
{
	int i,f=1;
	for(i=1;i<=y;i++)
	{
		f=f*i;
		
}
return f;}
