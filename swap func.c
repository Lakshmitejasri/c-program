#include<stdio.h>
void swap(int a,int b)
{
	int c=a;
	    a=b;
	    b=c;
	    printf("\n%d",a);
	    printf("\n%d",b);
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	swap(a,b);
}
