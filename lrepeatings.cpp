#include<bits/stdc++.h>
using namespace std;

void solve(string x, string y,int n)
{
    int m=n;
   int dp[n+1][m+1];
   for (int i = 0; i < n+1; i++)
   {
       for (int j = 0; j < m+1; j++)
       {
           if(i==0 || j==0)
              dp[i][j]=0;
       }
   }

   for (int i = 1; i < n+1; i++)
   {
       for (int j = 1; j < m+1; j++)
       {
           if(x[i-1]==y[j-1] && i!=j)
           {
               dp[i][j]=dp[i-1][j-1]+1;
           }
           else 
           {
               dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
           }
       }
   }
 cout<< dp[n][m] << endl;   

}

int main()
{
    string x;
    cin>>x;
    int n=x.length();
    solve(x,x,n);
    return 0;
}