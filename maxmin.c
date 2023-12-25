//max and min
//Now let's find out the maximum value and the minimum value
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
 
