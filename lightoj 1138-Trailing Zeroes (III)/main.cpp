// Accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 19999999
#define ll long long
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
using namespace std;


ll  no_of_n1_in_fact_n(ll  n,ll n1)
{
    ll number=0;
    while(n>0)
    {
        number+=n/n1;
        n/=n1;
    }
    return number;
}
ll get0(ll nn)
{
    return min(no_of_n1_in_fact_n(nn, 2),no_of_n1_in_fact_n(nn, 5));
}
int  main()
{
    ll test,n;
    cin>>test;
    for(ll i=1; i<=test; i++)
    {
        cin>>n;
        ll lo = 0, hi = 2333333333, ans = INF;
        while (lo <= hi)
        {
            ll mid = (lo + hi)/2;
            ll m0=get0(mid);
            if (m0 >= n)
            {
                hi = mid - 1;
                if (m0 == n) ans = min(ans,mid);
            }
            else lo = mid + 1;
        }
        if(ans!=INF)
        {
            cout<<"Case "<<i<<": "<<ans<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": impossible"<<endl;
        }
    }
    return 0;
}
