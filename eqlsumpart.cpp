#include<bits/stdc++.h>
using namespace std;

bool subsetsum(int arr[],int n, int sum)
{
    int dp[n+1][sum+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            if(i==0)
            dp[i][j]=false;
            if(j==0)
            dp[i][j]=true;

            else if(arr[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
            else
                dp[i][j]=dp[i-1][j];        
        }
        
    }
    return dp[n][sum];
}

bool equalsum(int arr[],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
  
     if(sum%2!=0)
    {
         return false; 
    }
    else
    
        return subsetsum(arr,n,sum/2);
    
    
       
}

int main()
{
    int n;
    cin>>n;
     int arr[n];
    for (int i = 0; i < n; i++)
    {
       
        cin>>arr[i];
    }
    cout<<equalsum(arr,n);
    
    return 0;
}