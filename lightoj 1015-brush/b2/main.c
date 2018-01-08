#include<stdio.h>
int main()
{
    int t,i,j,a,n;
    long int sum;
    scanf("%d", &t);
    for(i=1; i<=t; i++) {
     //   printf("\n");
    sum=0;
    scanf("%d", &n);
    for(j=0; j<n; j++)
    {scanf("%d", &a);
    if(a>=0 && a<100)
    sum=sum+a;}
    printf("Case %d: %ld\n", i,sum);
}

return 0;
}
