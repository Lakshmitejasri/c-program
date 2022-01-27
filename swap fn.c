//swapping 
#include<stdio.h>
void swap(int*,int*);
void main()
 {
 int x,y;
 x=20;
 y=30;
int *p=&x;
int *q=&y;
swap(&x,&y);
printf("%d",*p+*q);}
void swap(int *a,int *b)
{
	int *p,*q,c;
 c=*a;
 *a=*b;
 *b=c;
}

