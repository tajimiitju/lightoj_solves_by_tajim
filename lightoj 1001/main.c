#include <stdio.h>
int main()
{
    int t,a,b,i,c;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&a);
        b=a/2;
        c=a-b;
        printf("%d %d\n",b,c);
    }
    return 0;
}
