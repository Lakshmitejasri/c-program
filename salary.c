#include<stdio.h>
int main()
 {
 	int b,h1,h2,h3,d1,d2,d3,g1,g2,g3;
 	scanf("%d",&b);
 	h1=(20*b)/100;
 	d1=(80*b)/100;
 	g1=b+h1+d1;
 	h2=(80*b)/100;
 	d2=(90*b)/100;
 	g2=b+h2+d2;
 	h3=(30*b)/100;
 	d3=(95*b)/100;
 	g3=b+h3+d3;
 	if(b<=10000)
 	{
 		printf("%d",g1);
	 }
 	else if(b<=20000)
 	{
 	printf("%d",g2);	
	 }
	 else if(b>20000)
 	{
 	printf("%d",g3);
 }
}
	 
 	
