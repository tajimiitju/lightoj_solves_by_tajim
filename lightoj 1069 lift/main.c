#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,t,a,b,A;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&a,&b);
        if(a<=100 && b<=100 && a>0)
        {
            if(b>=a)
            {
                A=b*4+19;
                printf("Case %d: %d\n", i, A);
            }
            else
            {
                A=a*4+19+(a-b)*4;
                printf("Case %d: %d\n", i, A);
            }
        }
    }
    return 0;
}
