//count the number of subset with a given difference and this problem is same for target sum
#include<bits/stdc++.h>
using namespace std;

 int countsum(int arr[],int n,int sum)
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
             {
                dp[i][j]=dp[i-1][j-arr[i-1]] + dp[i-1][j];
             }
             else
             {
                 dp[i][j]=dp[i-1][j];
             }
             
         }
         
     }
     
    
     return dp[n][sum];
 }

void sum(int a[], int n,int diff)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    int s1;
/*
      s1+s2=sum and s1-s2=diff now we have two equations add them and get s1=(sum+diff)/2
      we get sum of one of the subset s1 and check how may subset are possible to get sum s1  
*/
    s1=(diff+sum)/2;
    cout<<countsum(a,n,s1);
}

int main()
{
    int n,diff;
    cin>>n;
    cin>>diff;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    sum(arr,n,diff);

    return 0;
}

