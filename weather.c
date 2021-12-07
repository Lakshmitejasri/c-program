 #include<stdio.h>
 main()
 {
 	int t;
 	scanf("%d",&t);
 	if(t<0)
 	{
 		printf("freezing weather");
 		}
 		else if(t<10)
 		{
 			printf("very cold weather");
 			 }
 			 else if(t<20)
 			 {
 			 	printf("cold weather");
			  }
			   else if(t<30)
			   {
			   	printf("normal weather");
			   }
			   else if(t<40)
			   {
			   	printf("hot");
			   }
			   else
			   {
			   	printf("very hot");
			   }
		}
