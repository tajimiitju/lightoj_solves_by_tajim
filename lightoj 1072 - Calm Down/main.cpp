#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>
#define pi acos(-1)  //it means arc-cos = cos inverse
using namespace std;

int main()
{
    int i,T;
    double n,R,r;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>R;
        cin>>n;
        r=(sin(pi/n)*R)/(sin(pi/n)+1);
        printf("Case %d: %.7lf\n",i,r);
    }
    return 0;
}
