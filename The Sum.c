#include<stdio.h>
main()
{
    int i,K,S=0,F1=1,F2=1,nextTerm;

    scanf("%d",&K);
    for(i=0;i<K;i++)
    {
        S = S+F1;
        nextTerm = F1+F2;
        F1=F2;
        F2=nextTerm;
    }

    printf("%d\n",S);
}
