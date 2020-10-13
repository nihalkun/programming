#include<bits/stdc++.h>
using namespace std;

int solve(string x,string y,int n,int m)
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
            if(x.at(i-1)==y.at(j-1))
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
            
        }
          
    }

    return n+m-dp[n][m];  
}

void print(string x,string y)
{
    int n=x.length();
    int m=y.length();
    int len=solve(x,y,n,m);
    cout<<len<<endl;
}

int main()
{

    string x,y;
    cin>>x;
    cin>>y;
    print(x,y);
    
    return 0;
}