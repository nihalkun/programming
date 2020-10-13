// Find position of an element in an Infinite Sorted Array
#include<bits/stdc++.h>
using namespace std;

int BS(int a[],int l,int r,int x)
{
    while (l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]>x)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
        
    }
    return -1;
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
    int res=BS(a,l,r,x);
    cout<<res<<endl;
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