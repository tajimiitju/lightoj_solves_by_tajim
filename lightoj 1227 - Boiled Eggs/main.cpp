/// Accepted :)
/// uva 11900 Boiled Eggs = lightoj 1227
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,n,p,q,res,ans,a[99];
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cin>>n>>p>>q;
        ans=0;
        res=0;
        //for(ll i=1;i<=n && i<=p;i++)
        for(ll j=1;j<=n;j++)
        {
            cin>>a[j];
        }
        for(ll j=1;j<=n;j++)
        {
            res+=a[j];
            if(res>q || ans>=p) break;
            ans++;
        }
        printf("Case %lld: %lld\n",i,ans);
    }
    return 0;
}
