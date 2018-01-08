// Accepted :)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,V,x1[333], x2[333], y1[333], y2[333], z1[333], z2[333],n;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        cin>>n;
        for(i = 0; i < n; i++)
        {
            scanf("%d %d %d %d %d %d", &x1[i], &y1[i], &z1[i], &x2[i], &y2[i], &z2[i]);
        }
        int x1mx = 0, y1mx = 0, z1mx = 0;
        int x2mn = 1001, y2mn = 1001, z2mn = 1001;

        for(i = 0; i < n; i++)
        {
            x1mx = max(x1mx, x1[i]);
            x2mn=  min(x2mn, x2[i]);
            y1mx = max(y1mx, y1[i]);
            y2mn = min(y2mn, y2[i]);
            z1mx = max(z1mx, z1[i]);
            z2mn = min(z2mn, z2[i]);
        }

        int V = (x2mn-x1mx) * (y2mn-y1mx) * (z2mn-z1mx);
        if(V>0) cout<<"Case "<<k<<": "<<V<<endl;
        else cout<<"Case "<<k<<": 0"<<endl;
        //printf("Case %d: %d\n", k, V < 0 ? 0 : V); //er mane v jodi 0 theke soto hoy tahole ans 0 else V :)
    }

    return 0;
}
