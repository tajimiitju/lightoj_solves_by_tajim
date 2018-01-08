/// accepted :)
// 18 bar submission er por manuser ta :(

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define ll unsigned long long
#define MAX 5000011

using namespace std;

ll phi[MAX];
bool isprime[MAX];
void sieve_NOD_NOPf_phi()
{
    for(ll l=0; l<MAX; l++)
    {
        isprime[l]=true;
        phi[l] = l;
    }
    for (ll i = 2; i < MAX; i++)
    {
        if (isprime[i])
        {
            for (int j = i; j < MAX; j += i)
            {
                isprime[j] = false;
                phi[j] *= i - 1;
                phi[j] /= i;
            }
        }
    }
    phi[1] = 0;
    for(ll i=2; i<MAX; i++) phi[i] = phi[i - 1] + phi[i] * phi[i];
}

int main()
{
    sieve_NOD_NOPf_phi();
    int a,b,t;
    scanf("%d", &t);
    for (ll i=1; i<=t; i++)
    {
        scanf("%d %d", &a, &b);
        if (a > b) swap(a, b);
        printf("Case %llu: %llu\n",i,  phi[b] - phi[a - 1]);
    }
    return 0;
}
