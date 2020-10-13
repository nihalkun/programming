//Index of First 1 in a Binary Sorted Infinite Array
#include<bits/stdc++.h>
using namespace std;

int BS(int a[],int l,int r,int x)
{
    int res=-1;
    while (l<=r)
    {
        int mid=l+(r-l)/2;
        if(x==a[mid])
        {
            res=mid;
            r=mid-1;
        }
        else if(x>a[mid])
        {
             l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        
    }
    return res;
}

void solve(int a[],int x)
{
    int l=0;
    int r=1;
    while (x>a[r])
    {
        l=r;
        r=r*2;
    }
    cout<<BS(a,l,r,x);
    
}

int main()
{
    int n,x;
    cin>>n;
    cin>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    solve(a,x);
    return 0;
}