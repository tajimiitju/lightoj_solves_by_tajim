// Accepted :)

#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int even;
    int n,T;
    cin >> T;
    for(int p = 1; p <= T; p++)
    {
        cin >> n;
        even = 0;
        while(n != 0)
        {
            if(n%2 == 1)even++;
            n=n/2;
        }
        //if(even % 2 == 0)cout << "Case " << i << ": even" << endl;
        //else cout << "Case " << i << ": odd" << endl;
        if (even%2!=0)
        {
            printf("Case %d: odd\n",p);
        }
        else
        {
            printf("Case %d: even\n",p);
        }
    }
    return 0;
}
