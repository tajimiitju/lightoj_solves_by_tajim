#include <stdio.h>
int main()
{
    long long int a,b,c,A,B,C;
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        A=a*a;
        B=b*b;
        C=c*c;
        if(A==B+C || B==C+A || C==A+B)
        {
            printf("Case %d: yes\n", i);
        }
        else
        {
            printf("Case %d: no\n", i);
        }
    }
    return 0;
}
