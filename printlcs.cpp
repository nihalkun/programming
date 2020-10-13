#include<bits/stdc++.h>
using namespace std;

void printstring(string x,string y, int n, int m)
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
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
            
        }
        
    }
  cout<<dp[n][m]<<endl;

 for (int i = 0; i < n+1; i++)
 {
     for (int j = 0; j < m+1; j++)
     {
         cout<<dp[i][j]<<" ";
     }
     cout<<endl;
 }
 

    int index=dp[n][m];
    int t=0;
    int i=n,j=m;
    char s;
    char ch[t],st[index];
    while (i>0 && j>0)   
    {
        if(x.at(i-1)==y.at(j-1))
        {
            s=x.at(i-1);
            i--;
            j--;
            st[index-1]=s;
            index--;
            ch[t]=st[index];
            t++;
            cout<<st[index];
        }
        else if(dp[i][j-1]>dp[i-1][j])
        {
            j--;            
        }
        else
        {
            i--;
        }      
    }
    cout<<endl;
    for (int i = t; i >=0; i--)
    {
        cout<<ch[i];
    }
    
}

int main ()
{
    string x,y;
    cin>>x;
    cin>>y;
    int n=x.length();
    int m=y.length();
    printstring(x,y,n,m);
    return 0;
}