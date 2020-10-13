#include<bits/stdc++.h>
using namespace std;

string printlcs(string x, string y, int n, int m)
{
    int dp[n+1][m+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
            if(i == 0 || j == 0)
            dp[i][j] = 0;
        }
        
    }

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            if(x[i-1] == y[j-1])
            {
               dp[i][j] = 1 + dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
            
        }
        
    }

    string s;
    int i = n , j = m ;

    while (i > 0 && j > 0)
    {
        if(x[i-1] == y[j-1])
        {
            s.push_back(x[i-1]);
            i--;
            j--;
        }
        else if(dp[i][j-1] > dp[i-1][j])
        {
            j--;
        }
        else
        {
            i--;
        }
        
    }
    
    reverse(s.begin(),s.end());
    return s;
    
}

int main()
{
    string x ,y ;
    cin >> x;
    cin >> y;

    int n = x.length();
    int m = y.length();

    cout<<printlcs(x,y,n,m)<<endl;
    return 0;
}