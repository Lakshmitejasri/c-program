#include<stdio.h>
#include<string.h>
int main()
{
	int i,v=0,c=0;
	char s[100];
	printf("enter string\n");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
			v++;
			else
			c++;
		}
	}
	printf("vowels = %d\n",v);
	printf("consonants = %d",c);
}
