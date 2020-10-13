#include<bits/stdc++.h>
using namespace std;

void printscs(string x,string y,int n,int m)
{
    int dp[n+1][m+1];
    for (int i = 0; i < m+1; i++)
    {
        dp[0][i]=0;
    }
    for (int i = 0; i < n+1; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            if(x[i-1] == y[j-1])
            {
               dp[i][j] = 1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
            
        }
        
    }
    
    int index = dp[n][m];
    int i = n,j = m;
    string s;

    while(i > 0 && j > 0)
    {
        if(x[i-1] == y[j-1])
        {
            s.push_back(x[i-1]);
            i--;
            j--;
            index--;
        }
        else if(dp[i][j-1] > dp[i-1][j])
        {
            s.push_back(y[j-1]);
            j--;
            index--;
        }
        else
        {
           s.push_back(x[i-1]);
           i--;
           index--;  
        }
        
    }

    while(i > 0)
    {
        s.push_back(x[i-1]);
        i--;
        index--;
    }
    while(j > 0)
    {
        s.push_back(y[j-1]);
        j--;
        index--;
    }

    reverse(s.begin(),s.end());
    cout <<s << endl;
    
}
int main()
{
    string x ,y ;
    cin >> x;
    cin >> y;  
    int n = x.length();
    int m = y.length();
    printscs(x,y,n,m);

    return 0;
}