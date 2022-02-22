#include <stdio.h>
int main()
{
    int i1, i2,j;
    char alpha = 'A';
    scanf("%d",&j);

    for(i1=1; i1 <= j; ++i1)
    {
        for(i2=1;i2<=i1;++i2)
        {
            printf("%c", alpha);
            
        }
         ++alpha;
       

        printf("\n");
    }
    return 0;
}
