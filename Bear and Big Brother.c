#include<stdio.h>
main()
{
    int a,b,years=0;

    scanf("%d %d",&a,&b);

    while(a<=b)
    {
        a = a*3;
        b = b*2;
        years++;
    }
    printf("%d\n",years);
}
