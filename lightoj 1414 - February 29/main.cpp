/// accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */

// uva 12439 - February 29
// lightoj 1414 - February 29
#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN (-2147483648)
#define pi acos(-1.0)
#define MAX 1000000
#define ll long long
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

using namespace std;

//bool isleap(ll year)
//{
//    if(((year%4==0)&&(year%100!=0))||(year%400==0)) return true;
//    return false;
//}

int mas_no(char monthS[])
{
    if (strcmp(monthS, "January") == 0)
        return 1;
    if (strcmp(monthS, "February") == 0)
        return 2;
    if (strcmp(monthS, "March") == 0)
        return 3;
    if (strcmp(monthS, "April") == 0)
        return 4;
    if (strcmp(monthS, "May") == 0)
        return 5;
    if (strcmp(monthS, "June") == 0)
        return 6;
    if (strcmp(monthS, "July") == 0)
        return 7;
    if (strcmp(monthS, "August") == 0)
        return 8;
    if (strcmp(monthS, "September") == 0)
        return 9;
    if (strcmp(monthS, "October") == 0)
        return 10;
    if (strcmp(monthS, "November") == 0)
        return 11;
    if (strcmp(monthS, "December") == 0)
        return 12;
}
int main()
{
    ll t, ans=0;
    cin>>t;
    int m1, d1, y1, m2, d2, y2;
    char mas1[20],mas2[20];
    for(ll ii=1;ii<=t;ii++)
    {
        scanf("%s %d, %d", mas1, &d1, &y1);
        m1 = mas_no(mas1);
        scanf("%s %d, %d", mas2, &d2, &y2);
        m2 = mas_no(mas2);
        if (m1 > 2) y1++;
        if (m2 < 2 || (m2 == 2 && d2 < 29)) y2--;
        ans = y2 / 4 - (y1 - 1) / 4;
        ans -= y2 / 100 - (y1 - 1) / 100;
        ans += y2 / 400 - (y1 - 1) / 400;
        printf("Case %lld: %lld\n",ii,ans);
        ans=0;
    }
    return 0;
}
