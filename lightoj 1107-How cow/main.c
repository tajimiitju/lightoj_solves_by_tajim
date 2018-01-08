#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{int t,i,x1,y1,x2,y2,x,y,u,M;
scanf("%d",&t);
for(i=1;i<=t;i++)
{printf("Case %d:\n",i);
scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&M);
for(u=1;u<=M;u++)
{scanf("%d%d",&x,&y);
if(x>=x1&&x<=x2)
if(y>=y1&&y<=y2)
printf("Yes\n");
else
printf("No\n");
else printf("No\n");}
}
return 0;
}
