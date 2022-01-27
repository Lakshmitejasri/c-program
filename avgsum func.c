//sum and average
#include<stdio.h>
void avgsum(int*,int*);
void main()
{
	int b,c,*su,*a;
	avgsum(&b,&c);
	printf("the average is%d",*a);
	printf("the sum is %d",*su);
}
void avgsum(int*average,int*sum)
{
    int *v,i,n,s=0;
    scanf("%d",&n);
	i=1;
	while (i<=n)
	{
  	s=s+i;
	printf("%d",i);
	i++;
}
 *v=s/n;		
}
 
