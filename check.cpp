#include<bits/stdc++.h>
using namespace std;

int substring(char x[],char y[],int n,int m)
{
    int dp[n+1][m+1];
    int result=0;
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
            if(x[i-1]==y[j-1])
            {
                dp[i][j]= 1 + dp[i-1][j-1];
                result=max(result,dp[i][j]);    
            }
           
            else
            {
                dp[i][j]=0;
            }
            
        }
        
    }
 return result;
   /* for (int i = 0; i < n+1; i++)
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
    char x[n],y[m];
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>y[i];
    }
    cout<<substring(x,y,n,m);

    return 0;
}


   