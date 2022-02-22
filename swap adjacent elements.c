#include<stdio.h>
int main()
{
    int a[100],n,i,z;
    int temp;
    scanf("%d",&n);
    z=n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==1){
    	n=n-1;
	}
    for(i=0;i<n;i+=2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    
    for(i=0;i<z;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}

