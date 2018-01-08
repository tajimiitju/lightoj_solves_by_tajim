#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
int main()
{
    int i,t;
    double r,A,C,S;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf",&r);
        C=pi*r*r;
        S=4*r*r;
        A=S-C;
        printf("Case %d: %.2lf\n", i, A);
    }
    return 0;
}

