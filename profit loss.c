// cost price and selling price
#include<stdio.h>
void main()
{
	int cp,sp,p;
	scanf("%d%d",&cp,&sp);
	p=(sp-cp)*100/cp;
	printf("%d",p);
}
