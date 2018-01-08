#include<stdio.h>
int main()
{
    long long n,m,b,k;
    int t,cse=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        printf("Case %d: %lld\n",cse++,(n*m)/2);
    }
    return 0;
}
