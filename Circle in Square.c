#include<stdio.h>
main()
{
    int T,i;
    double r,d,pi,square,circle,result;
    pi = acos(-1);
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        scanf("%lf",&r);
        circle = pi*(r*r);
        d = 2*r;
        square = (d*d);
        result = (square - circle)+(pow(10,-9));
        printf("Case %d: %.2f\n",i,result);
    }
}
