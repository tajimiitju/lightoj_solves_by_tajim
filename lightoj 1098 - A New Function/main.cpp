/// Accepted :)

///* *** TAJIM *** */
///* **IIT_JU43** */
/// uva 10830= lightoj 1098
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
ll cs[MAX],pf[MAX];
//ll sum_of_divisors(ll n)
//{
//  ll sum = 1;
//
//  for(ll k = 2; k * k <= n; ++k)
//  {
//      ll p = 1;
//      while(n % k == 0)
//      {
//          p = p * k + 1;
//          n /= k;
//      }
//
//      sum *= p;
//  }
//
//  if(n > 1)
//      sum *= 1 + n;
//
//  return sum;
//}
//void cumsod()
//{
//    //cs[0]=0;
//    for(ll l=1;l<=MAX;l++)
//    {
//        cs[l]=cs[l-1]+sum_of_divisors(l);
//    }
//}
ll cumulative_SOD(ll n)
{
    ll ans = 0;
    for (ll i = 2; i * i <= n; ++i)
    {
        ll j = n / i;
        ans += (i + j) * (j - i + 1) / 2;
        ans += i * (j - i);
    }
    return ans;
}

int main()
{
    //cumsod();
    ll n,t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cin>>n;
        cout<<"Case "<<i<<": "<<cumulative_SOD(n)<<endl;
    }
    return 0;
}
