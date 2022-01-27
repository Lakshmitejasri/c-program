#include<stdio.h>
void interest(float p,float t,float r)
{
	float s=(p*t*r)/100;
	printf("%d",s);
}
int main()
{
	float x,y,z,r;
	scanf("%d%d%d",&x,&y,&z);
	interest(x,y,z);
	printf("%d",r);
	return 0;
}
