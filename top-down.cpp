#include<bits/stdc++.h>
using namespace std;


int solve(int wt[],int val[],int w,int n)
{
     int dp[n+1][w+1];

    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < w+1; j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }

           else if(wt[i-1]<=j)
            {
                dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }
            else 
                dp[i][j]=dp[i-1][j];
        }
        
    }
        
    return dp[n][w];
    
}

int main()
{
     
    int n,w,wt[n],val[n];
  
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
    
    

    return 0;
}