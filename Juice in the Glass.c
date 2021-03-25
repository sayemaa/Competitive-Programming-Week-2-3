#include<stdio.h>
main()
{
    int T,i;
    double r1,r2,R,h,p,volume,pi=acos(-1);

    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);

        R = r2+((r1-r2)*(p/h));

        volume = ((pi*((R*R)+(R*r2)+(r2*r2))*p)/3);

        printf("Case %d: %lf\n",i,volume);
    }
}
