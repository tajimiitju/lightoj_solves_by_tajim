#include <stdio.h>
int main()
{
    int i=0,j=0,t,u,v;
    long int w;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        w=0;
        scanf("%d",&u);
        for(j=1; j<=u; j++)
        {
            scanf("%d",&v);
            if(v>=1 && v<100)
            {
                w=w+v;
            }
        }
        printf("Case %d: %ld\n", i, w);
    }
    return 0;
}
