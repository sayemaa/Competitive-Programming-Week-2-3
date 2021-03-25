#include<stdio.h>
main()
{
    int T,N,i,j,k;

    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        for(j=1;j<=N;j++)
        {
            for(k=1;k<=N;k++)
            {
                printf("*");
            }
            printf("\n");
        }
        if(i<T)
        {
            printf("\n");
        }
    }
}
