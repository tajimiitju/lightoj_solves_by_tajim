#include<stdio.h>
int main()
 {
 int M,x1,y1,x2,y2,x,y,cow,l=0;
 scanf("%d",&M);
 while(M--)
 {
 printf("Case %d:\n",++l);
 scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&cow);
 while(cow--)
 {
 scanf("%d%d",&x,&y);
 if(x>=x1&&x<=x2)
 if(y>=y1&&y<=y2)
 printf("Yes\n");
 else printf("No\n");
 else printf("No\n");
 }
 }
 return 0;
 }
