#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	switch(b*b-4*a*c)
	{
	case 0:printf("real and equal");break;
}
switch(b*b-4*a*c>0)
{
	case 1:printf("real and different");break;
}
switch(b*b-4*a*c<0)
{
	case 1:printf("imaginary");break;
}}
