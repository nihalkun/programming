#include<bits/stdc++.h>
using namespace std;

int lcs(string X[],string Y[],int n,int m)
{
    if(n==0 || m==0)
    {
        return 0;
    }

    if(X[n-1]==Y[m-1])
    {
        return 1 + lcs(X,Y,n-1,m-1); 
    }
    else
    {
        return max(lcs(X,Y,n,m-1),lcs(X,Y,n-1,m));
    }
    
}

 
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    string X[n],Y[m];
    for (int i = 0; i < n; i++)
    {
        cin>>X[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>Y[i];
    }
    cout<<lcs(X,Y,n,m);

    return 0;
}