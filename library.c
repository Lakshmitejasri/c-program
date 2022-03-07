//library
#include<stdio.h>
int main()
{
	int n;
	double s=0.0;
	scanf("%d",&n);
	if(n<=5)
	s=0.40*n;
	else if(n>=6&&n<=10)
	s=0.65*n;
	else
	s=0.80*n;
	
	printf("%lf",s);
}
