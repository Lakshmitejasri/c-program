#include<stdio.h>
void temp(float f)
{
	float c=((f-32)*5)/9;
	printf("%f",c);
}
float main(void)
{
	float f;
	scanf("%f",&f);
	temp(f);
	return 0;
}
