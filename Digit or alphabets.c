// alphabet or digit
#include<stdio.h>
int main()
{
	int c;
	scanf("%d",&c);
	if(c>=65&&c<=90||c>=97&&c<=122)
	{
		printf("Alphabet");
	}
	else if(c<65&&c>90&&c<97&&c>122)
	{
		printf("Digit");
	}
	else
	{
	printf("invalid input");
	}
}
