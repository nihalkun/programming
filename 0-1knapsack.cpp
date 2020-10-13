#include<bits/stdc++.h>
using namespace std;
int dp[100][100];

int solve(int wt[],int val[],int w,int n)
{
    if(n==0 || w==0)
    return 0;

    if(dp[n][w]!=-1)
    return dp[n][w];

    else
    
    if(wt[n-1]<=w)
    return dp[n][w]= max(val[n-1]+solve(wt,val,w-wt[n-1],n-1),solve(wt,val,w,n-1));

    else 
    return dp[n][w]=solve(wt,val,w,n-1);
}

int main()
{
    memset(dp,-1,sizeof(dp));

    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
    
    int n,wt[n],val[n],w;
    cin>>n;
    cin>>w;
    for (int i = 0; i < n; i++)
    {
        cin>>wt[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>val[i];
    }
  cout<<solve(wt,val,w,n);
    }
    return 0;
}
