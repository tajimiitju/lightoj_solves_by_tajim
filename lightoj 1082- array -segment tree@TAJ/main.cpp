/// accepted :)
/// lightoj 1082


#include <iostream>
#include <bits/stdc++.h>
#define inf 1e9
using namespace std;

struct node
{
    int L, R;
    int mnRes;
    node *left, *right;
    node(int a, int b)
    {
        L=a, R=b;
        mnRes=inf;
        left=NULL, right=NULL;
    }
};

void Insert(node *cur,int index, int val)
{
    if(cur->L==cur->R)
    {
        cur->mnRes=val;
        return;
    }
//    l=cur->L;
//    r=cur->R;
    int mid=(cur->L+cur->R)/2;
    if(cur->left==NULL)
    {
        cur->left=new node(cur->L,mid);
    }
    if(cur->right==NULL)
    {
        cur->right=new node(mid+1,cur->R);
    }
    if(index <= mid)
    {
        Insert(cur->left,index,val);
    }
    else
    {
        Insert(cur->right,index,val);
    }
    cur->mnRes=min(cur->left->mnRes,cur->right->mnRes);
}

int Query(node *cur, int l, int r)
{
    if(cur->L==l && cur->R==r)
    {
        return cur->mnRes;
    }
    int mid=(cur->L+cur->R)/2;
    if(cur->left==NULL)
    {
        cur->left=new node(cur->L,mid);
    }
    if(cur->right==NULL)
    {
        cur->right=new node(mid+1,cur->R);
    }
    if(r<=mid)
    {
        return Query(cur->left,l,r);
    }
    else if(mid<l)
    {
        return Query(cur->right,l,r);
    }
    else
    {
        int x=Query(cur->left,l,mid);
        int y=Query(cur->right,mid+1,r);
        return min(x,y);
    }
}

int main()
{
    int n,xi,q,l,r,res,t;
    scanf("%d",&t);
    for(int j=1; j<=t; j++)
    {
        scanf("%d",&n);
        scanf("%d",&q);
        node *root= new node(1,n);
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&xi);
            Insert(root,i,xi);
        }
        //scanf("%d",&q);
        printf("Case %d:\n",j);
        for(int i=1; i<=q; i++)
        {
            scanf("%d",&l);
            scanf("%d",&r);
            res=Query(root,l,r);
            printf("%d\n",res);
        }
    }
    return 0;
}

/*

2
5 3
78 1 22 12 3
1 2
3 5
4 4

1 1
10
1 1

*/
