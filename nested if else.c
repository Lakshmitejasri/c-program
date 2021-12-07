#include <stdio.h>
main()
{
	 int a,A,B,C,D,E;
	 scanf("%d",&a);
	 if(a>90)
	 {
	 	printf("A");
	 }
	 else
	 {
	 	if(a>80)
	 	{
	 		printf("B");
		 }
		 else
		 {
		 	if(a>70)
		 	{
		 		printf("C");
			 }
			 else
			 {
			 	if(a>60)
			 	{
			 		printf("C");
				 }
				 else
				 {
				 	printf("E");
				 }
			 }
		 }
	 }
	 
}
