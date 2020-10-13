#include<bits/stdc++.h>
using namespace std;

int solve(string x,string y, int n,int m)
{
    int dp[n+1][m+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
        }
        
    }

     for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            if(x[i-1]==y[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
            
        }
        
    }
    return dp[n][m];
}

bool print(string x, string y)
{
    int n=x.length();
    int m=y.length();

    int len = solve(x,y,n,m);
    //cout<<len<<endl;
    int minimum=min(n,m);
    if(len==minimum)
    {
        return true;
    }
    else
    {
        return false;
    }
    
       
    
}

int main()
{
    string x,y;
    cin>>x;
    cin>>y;
    cout<<print(x,y)<<endl;
    return 0;
}