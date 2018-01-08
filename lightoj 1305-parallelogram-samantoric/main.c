#include <stdio.h>
int main()
{
    int i=0,t,ax,ay,bx,by,cx,cy,dx,dy;
    long int A,B;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy);
        dx=ax+cx-bx;
        dy=ay+cy-by;
        A=.5*(ax*by+bx*cy+cx*dy+dx*ay-ay*bx-by*cx-cy*dx-dy*ax);
        B=abs(A);
        printf("Case %d: %d %d %ld\n", i, dx, dy, B);
    }
    return 0;
}
