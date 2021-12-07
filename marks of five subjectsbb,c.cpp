#include<stdio.h>
main()
{
	int a,b,c,d,e,p;
	int A,B,C,D,E;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	p=((a+b+c+d+e)*100)/5;
	if(p>90)

	 {
	 	printf("A");
	 }
	 else if(p>80)
	 {
	 		printf("B");
		 }
		 else if(p>70)
		 {
		 		printf("C");
			 }
			 else if(p>40)
			 {
			 		printf("D");
				 }
				 else
				 {
				 	printf("E");
				 }
			 
	 
		
}
