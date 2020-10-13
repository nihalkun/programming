#include<bits/stdc++.h>
using namespace std;

bool solve(int wt[],int n, int sum)
{
    bool dp[n+1][sum+1];

    for (int i = 0; i < sum+1; i++)
        {    
             dp[0][i]=0;     
              }  

        for (int i = 0; i < n+1; i++)
        {    
             dp[i][0]=1;    
               }  

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < sum+1; j++)
        {
            
            if(wt[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j-wt[i-1]] || dp[i-1][j];
            }
            else 
                dp[i][j]=dp[i-1][j];
           
        }
        
    }
  
    return dp[n][sum];
}

int main()
{
    int n,wt[n],sum;
    cin>>n;
    cin>>sum;
    for (int i = 0; i < n; i++)
    {
        cin>>wt[i];
    }
    
    if(solve(wt,n,sum)==true)
    cout<<"subset exist";
else
{
    cout<<"Does not exist";
}

    return 0;
}