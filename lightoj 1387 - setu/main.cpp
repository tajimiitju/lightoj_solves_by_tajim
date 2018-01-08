/// Accepted :)
/// same as uva 12403 save setu

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


int main()
{
    ll a=0,t,j,a1,tt;
    string s;
    cin>>tt;
    for(int i=1; i<=tt;i++)
    {
        a=0;
        cin>>t;
        cout<<"Case "<<i<<":"<<endl;
        for(j=0; j<t; j++)
        {
            cin>>s;
            if(s=="donate")
            {
                cin>>a1;
                a+=a1;
            }
            else
                cout<<a<<endl;
        }
    }
    return 0;
}
