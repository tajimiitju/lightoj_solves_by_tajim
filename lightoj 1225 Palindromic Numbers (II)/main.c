#include<stdio.h>
#include<string.h>
int main()
{
    char T[20];
    int l,i,t,j;
    scanf("%d", &t);
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(T);
        l=strlen(T);
        if(l==1)
        {
            printf("Case %d: Yes\n", i);
        }
        else if(l==2)
        {
            if(T[0]==T[1])
                printf("Case %d: Yes\n", i);
            else
                printf("Case %d: No\n", i);
        }
        else
        {
            for(j=0; j<(l/2)+1; j++)
                if(T[j]!=T[l-(j+1)])
                {
                    printf("Case %d: No\n", i);
                    goto zz;
                }
            printf("Case %d: Yes\n", i);
        }
zz:
        ;
    }
    return 0;
}
