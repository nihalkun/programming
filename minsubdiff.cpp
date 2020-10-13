#include<bits/stdc++.h>
using namespace std;

int subsetsum(int arr[],int n,int sum)
{
    int dp[n+1][sum+1];
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
            if(arr[i-1]<=j)
                dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
            else
                dp[i][j]=dp[i-1][j];
        }
        
    }
    
    vector<int>v;
    int mn=INT_MAX;
    
    for (int i = 0; i <=sum/2; i++)
    {
        if(dp[n][i]==1)
        {           
           v.push_back(i);
        }    
    }
    for (int i = 0; i<=v.size() ; i++)
    {
        
        mn=min(mn,sum-2*v[i]);
    }
    return mn;

    /*for (int i = 0; i < sum+1; i++)
    {
        cout<<dp[n][i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }*/

    //we can do that without storing value a in vector 
   /* for (int j=sum/2; j>=0; j--) 
    { 
        // Find the  
        if (dp[n][j] == 1) 
        { 
            mn = min(mn,sum-2*j); 
           
        } 
    } 
    return mn; */
    
    
}

int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    
    cout<<subsetsum(arr,n,sum);

    return 0;
}