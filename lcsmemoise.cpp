#include<bits/stdc++.h>
using namespace std;

int memoise(string X[],string Y[],int n,int m)
{
    int dp[n+1][m+1];
    memset(dp,-1,sizeof(dp));
    if(n==0 || m==0)
    return 0;

    if(dp[n][m]!=-1)
    return dp[n][m];

    else if(X[n-1]==Y[m-1])
    return dp[n][m]= 1+memoise(X,Y,n-1,m-1);

    else
    return dp[n][m]=max(memoise(X,Y,n,m-1),memoise(X,Y,n-1,m));
     
}

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    string X[n],Y[m];
    for (int i = 0; i < n; i++)
    {
        cin>>X[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>Y[i];
    }
    cout<<memoise(X,Y,n,m);
    return 0;
    
}
