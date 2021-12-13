#include<stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	switch(x)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("vowel");break;
		default:printf("not a vowel");
	}
}