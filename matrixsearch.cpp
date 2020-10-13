#include<bits/stdc++.h>
using namespace std;

int search(int a[][10],int n,int m,int x)
{
    int i=0;
    int j=m-1;
    while (i>=0 && i<n && j<m && j>=0)
    {
        if(a[i][j]==x)
        return 1;
        else if(a[i][j]>x)
        {
            j--;
        }
        else
        {
            i--;
        }
    }
    return 0;
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
    cout<<search(a,n,m,x);
    return 0;
}