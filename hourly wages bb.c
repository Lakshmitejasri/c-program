#include<stdio.h>
main()
{
	float r,h,w,E,e;
	scanf("%f%f%f",&r,&h,&e);
	w=r*h;
	E=(w)+(e*r/2);
	if(h<=40)
	{ 
	
		printf("%f",w);
	}
	else
	{
		printf("%f",E);
	}
}
