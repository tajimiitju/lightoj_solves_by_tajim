// Accepted :)

#include <stdio.h>
int main()
{
    int n,i,a[999],c,t,j,k,swp;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        c=0;
        scanf("%d",&t);
        for(j=1; j<=t; j++)
            scanf("%d",&a[j]);
        for(k=1; k<=t; k++)
            if(a[k]!=k)
            {
                for(j=k+1; j<=t; j++)
                    if(a[j]==k)
                    {
                        swp=a[j];
                        a[j]=a[k];
                        a[k]=swp;
                        c++;
                    }
            }
        printf("Case %d: %d\n",i,c);
    }
    return 0;
}
