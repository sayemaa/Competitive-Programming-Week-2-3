#include<stdio.h>
main()
{
    int T,i,N,rem,sum=0;

    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);

        rem = N%10;
        N = N/10000;
        sum = N + rem;

        printf("Sum = %d\n",sum);
    }
}
