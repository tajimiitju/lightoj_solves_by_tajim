/// Accepted :)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int t;
long long a,b,x,y;
int main()
{
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a;
        b=ceil(sqrt(double(a)));
        if(b*b-a<b)x=b,y=b*b-a+1;
        else x=-b*b+2*b+a-1,y=b;
        if(b&1)swap(x,y);
        cout<<"Case "<<i<<": "<<x<<" "<<y<<"\n";
    }
    return 0;
}
