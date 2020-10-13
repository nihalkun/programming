#include<bits/stdc++.h>
using namespace std;

int search(int a[][10],int n,int m,int x)
{
    int i=0;
    int j=m-1;
    while (i>=0 && j>=0 && i<n && j<m )
    {
        if(a[i][j]==x)
        {
            cout<<"("<<i<<","<<j<<")"<<endl;
            return 1;
        }
        else if(a[i][j]>x)
        {
            j--;
        }
        else if(a[i][j]<x)
        {
            i++;
        }
    }
    return -1;
}

int main()
{
    int n,m,x;
    cin>>n;
    cin>>m;
    cin>>x;
    int a[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }  
    }
    search(a,n,m,x);
    return 0;
}