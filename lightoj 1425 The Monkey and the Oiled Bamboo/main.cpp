// Accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 19999999
#define ll long long
using namespace std;

int main()
{
    ll i=1,t,k,k1,k2,b,a[100009];
    cin>>t;
    while(t--)
    {
        cin>>k;
        k2=0;
        k1=-1;
        a[0]=0;
        for(ll b=1;b<=k;b++)
        {
            cin>>a[b];
        }
        for(ll j=1;j<=k;j++)
        {
            ll df=abs(a[j]-a[j-1]);
            k1=max(k1,df);
        }
        k2=k1;
        for(ll j=1;j<=k;j++)
        {
            ll df=abs(a[j]-a[j-1]);
            if(df==k1) k1--;
            else if (df>k1)
            {
                k2++;
                break;
            }
        }
        cout<<"Case "<<i++<<": "<<k2<<endl;
    }
    return 0;
}
