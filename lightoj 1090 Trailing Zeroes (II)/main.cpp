// Accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 19999999
#define INF 1000111222
#define ll long long
using namespace std;

int no_of_2,no_of_5;

int  no_of_n1_in_fact_n(int  n,int n1)
{
    int  number=0;
    while(n>0)
    {
        number+=n/n1;
        n/=n1;
    }
    return number;
}
//int prime_factorize(int n,int n1)
int no_of_n1_in_n(int n,int n1)
{
    int no=0;
    while( n>0 && !(n%n1) )
    {
            n=n/n1;
            ++no;
    }
    return no;
}


void  calculate_25(int  n,int  r)
{
    int n2,n5,r2,r5,c2,c5; // c=n-r
    n2 = no_of_n1_in_fact_n(n,2);
    n5 = no_of_n1_in_fact_n(n,5);
    r2 = no_of_n1_in_fact_n(r,2);
    r5 = no_of_n1_in_fact_n(r,5);
    c2 = no_of_n1_in_fact_n(n-r,2);
    c5 = no_of_n1_in_fact_n(n-r,5);
    // nCr = n!/(r!*(n-r)!)
    no_of_2=n2-(r2+c2);
    no_of_5=n5-(r5+c5);
}


int  main()
{
    int i,test,n,r,p,q,n0;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        cin>>n>>r>>p>>q;

        calculate_25(n,r);

        no_of_2+=no_of_n1_in_n(p,2)*q;

        no_of_5+=no_of_n1_in_n(p,5)*q;

        n0=0;
        n0=min(no_of_2,no_of_5);

        cout<<"Case "<<i<<": "<<n0<<endl;
        no_of_2 = 0;
        no_of_5 = 0;
    }
    return 0;
}
