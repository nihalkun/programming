#include<bits/stdc++.h>
using namespace std;

int substring(string x[],string y[],int n,int m)
{
    int dp[n+1][m+1];
    for (int i = 0; i < m+1; i++)
    {
        dp[0][i]=0;
    }
    for (int i = 0; i < n+1; i++)
    {
        dp[i][0]=0;
    }
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            if(x[n-1]==y[m-1])
            dp[i][j]=1+d[i-1][j-1];
            else
            {
                dp[i][j]=0;
            }
            
        }
        
    }
    return 0;
}

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    string x[n],y[m];
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>m[i];
    }
    cin>>substring(x,y,n,m);

    return 0;
}


   