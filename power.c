#include<stdio.h>
int main()
{
	int x,y,i,p=1;
	
	scanf("%d%d",&x,&y);
	for(i=1;i<=y;i++)
		p=p*x;
		printf("%d",p);
}
