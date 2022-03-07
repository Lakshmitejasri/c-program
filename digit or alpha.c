#include<stdio.h>
int main()
{
	char s;
	scanf("%c",&s);
	if((s>=65&&s<=90)||(s>=97&&s<=122))
	printf("Alphabet");
	else if(s>=48 && s<=57)
	printf("Digit");
	else
	printf("Invalid");
	
}
	
