/// Accepted :)
/// ei code e cin, cout use korle tle ase. printf scanf use korle asena :)

#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
//freopen("out.txt", "w", stdout);
//freopen("input.txt", "r", stdin);
    int t, i, j, k, m, n, ans;
    scanf("%d", &t);
    //cin>>t;
    for(i = 1; i <= t; i++)
    {
        scanf("%d %d", &m, &n);
        //cin>>m>>n;
        if(m == 1) ans = n;
        else if(n == 1) ans = m;
        else if(n == 2)
        {
            ans = (m / 4) * 4;
            if(m % 4 == 1) ans += 2;
            else if(m % 4 > 1) ans += 4;
        }
        else if(m == 2)
        {
            ans = (n / 4) * 4;
            if(n % 4 == 1) ans += 2;
            else if(n % 4 > 1) ans += 4;
        }
        else ans = ((m * n) + 1) / 2;
        //cout<<"Case "<<i<<": "<<ans<<"\n";
        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}
