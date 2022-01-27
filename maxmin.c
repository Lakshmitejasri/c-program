//max and min
#include<stdio.h>
void maxmin(int*,int*,int*,int*);
void main()
{
	int a,b,max,min;
	scanf("%d%d",&a,&b);
	maxmin(&a,&b,&max,&min);
	printf("%d%d",max,min);
}
void maxmin(int*c,int*d,int*e,int*f)
{
	if(*c>*d)
	{
		*e=*c;
		*f=*d;
	}
	else{
		*e=*d;
		*f=*c;
		
	}
}
 
