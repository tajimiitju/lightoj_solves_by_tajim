#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,t;
    double a,b,c,d,h,A,x,k;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        if(a>=0 && b>=0 && c>=0 && d>=0)
        {
            k=a-c;
            x=(b*b-d*d+k*k)/(2*k);
            if(b>x)
            {
                h=sqrt(b*b-x*x);
                A=.5*(a+c)*h;
                printf("Case %d: %.7lf\n", i, A);
            }
        }
    }
    return 0;
}
