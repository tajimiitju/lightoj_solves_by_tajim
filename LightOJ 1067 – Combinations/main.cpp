/// accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN (-2147483648)
#define pi acos(-1.0)
#define MAX 1000000
#define ll long long
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

using namespace std;
ll mm=1000003;
ll f[1000005];
ll nCr_mod(ll n,ll r)
{
    if(r==1)
        return n;
    if(r%2==1)
        return(nCr_mod(n,r-1)*n)%mm;
    else
    {
        ll res=nCr_mod(n,r/2);
        return (res*res)%mm;
    }
}
int main()
{
    ll t,n,r,s,res;
    cin>>t;
    f[1]=1;
    for(ll i=2;i<1000001;i++) f[i]=(i*f[i-1])%mm;
    for(ll ii=1;ii<=t;ii++)
    {
        scanf("%lld%lld",&n,&r);
            if(n<r)
            {
                 printf("Case %d: 0\n",ii);
                 continue;
            }
            else if(n==r||r==0)
            {
                printf("Case %d: 1\n",ii);
                continue;
            }
        s=((f[n-r]%mm)*(f[r]%mm))%mm;
        printf("Case %lld: %lld\n",ii,(f[n]*nCr_mod(s,mm-2))%mm);
    }
    return 0;
}
