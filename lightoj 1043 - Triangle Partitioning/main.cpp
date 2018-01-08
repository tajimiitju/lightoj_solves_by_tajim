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
    int i,T;
    double AB,BC,CA,AD,DE,r;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>AB>>CA>>BC>>r;
        double r1 = r/(r+1);
        // r=m/n [need m/(m+n)] => 1/r=n/m => (1/r) +1 = (n/m) +1 => (r+1)/r = (n+m)/m => m/(m+n) = r/(r+1) ; :)
        AD = AB*sqrt(r1);
        printf("Case %d: %.7lf\n",i,AD);
    }
    return 0;
}
