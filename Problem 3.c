#include<stdio.h>
main()
{
    int i,j=0;

    for(i=1000;i>=1;i--)
    {
        printf("%d\t",i);
        j++;
        if(j%5==0)
        {
            printf("\n");
        }
    }
}
