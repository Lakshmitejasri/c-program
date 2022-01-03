#include <stdio.h>
int main()
{
   int n=20;
   int *p;
   p=&n;
   printf("%p",p);
   printf("\n%d",*p);
}
