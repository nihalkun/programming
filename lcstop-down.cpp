#include<bits/stdc++.h>
using namespace std;

int solvedp(string X[],string Y[],int n,int m)
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
            if(X[i-1]==Y[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]= max(dp[i][j-1],dp[i-1][j]);
            }
            
        }
        
    }
    return dp[n][m];

/*for (int i = 0; i < n+1; i++)
{
    for (int j = 0; j < m+1; j++)
    {
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
}*/


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
    cout<<solvedp(X,Y,n,m);
    return 0;
    
}