/// accepted :)

///* *** TAJIM *** */
///* **IIT_JU43** */

#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 1000000
#define ll long long
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

using namespace std;
ll to_dec(ll n)
{
    ll s1=0,p=0;
    while(n)
    {
        s1=s1+((n%10)*pow(2,p));
        n=n/10;
        p++;
    }
    return s1;
}
int main()
{
    ll a,b,c,d,t,aa,bb,cc,dd,a1,b1,c1,d1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        scanf("%lld.%lld.%lld.%lld",&a,&b,&c,&d);
        scanf("%lld.%lld.%lld.%lld",&a1,&b1,&c1,&d1);
        if(to_dec(a1)==a&&to_dec(b1)==b&&to_dec(c1)==c&&to_dec(d1)==d)
        {
            printf("Case %d: Yes\n",i);
        }
        else
        {
            printf("Case %d: No\n",i);
        }
    }

    return 0;
}
