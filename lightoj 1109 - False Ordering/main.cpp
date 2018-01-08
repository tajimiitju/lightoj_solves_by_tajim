/// accepted :)
// lightoj 1109 - False Ordering

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
struct ans
{
    ll x,y; // x= divisors , y = that number :)
};
bool cmp(ans a, ans b) // ans type 2 variables a & b :)
{
    if(a.x==b.x)
    {
        return a.y>b.y; // big number will be returned
    }
    else return a.x<b.x; // small divisors will be returned
}
ll divisors(ll n) // divisor function :)
{
    ll d = 0, i =1;
    while(i<=n)
    {
        if(n%i==0)
            d += 1;
        i++;
    }
    return d;
}
int main()
{
    ll t;
    ans ans1[1001]; // structure ans type another variable ans1 :)
    for(ll i=1; i<=1000; i++)
    {
        ans1[i].x=divisors(i); // storing all divisors in x
        ans1[i].y=i; // storing the numbers in y
    }
    sort(ans1,ans1+1001,cmp);  // structure sort
    cin>>t;
    ll n;
    for(ll ii=1; ii<=t; ii++)
    {
        cin>>n;
        printf("Case %lld: %lld\n",ii,ans1[n].y);
    }
    return 0;
}
