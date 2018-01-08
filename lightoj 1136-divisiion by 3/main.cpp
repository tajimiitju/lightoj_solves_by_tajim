#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int ans(int n)
{
    if (!n) return 0;
    int res = (n / 3) * 2;
    if (n % 3 == 2) res++;
    return res;
}
int main()
{
    long long t,b,c,e,k;
//    long long t,a[100000],b,c,d,y,e;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>b>>c;
        e=0;
        /*
        for(int j=1;j<=c;j++)
        {
            y=0;
            for(int j1=1;j1<=j;j1++)
            {
                y+=j1;
            }
            if(y%3==0) a[j]=-1;

        }
        for(int k=b;k<=c;k++)
        {
            if(a[k]==-1)
            {
                e++;
            }
        }
        */
        /*
        for(k=b;k<=c;k++)
        {
            long long k2 =0;
            //k2=(k*(k+1)/2);
            for(long long k3=1;k3<=k;k3++)
            {
                k2+=k3;
            }
            if(k2%3==0)
            {
                e++;
            }
        }
        */
        e=ans(c)-ans(b-1);
        cout<<"Case "<<i<<": "<<e<<endl;
    }

    return 0;
}
