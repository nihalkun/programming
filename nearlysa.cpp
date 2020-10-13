//Nearly sorted array
#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int l,int r,int x)
{
    while (l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==x)
        {
            return mid;
        }
       if(mid-1>=l && a[mid-1]==x)
        {
            return mid-1;
        }
        if(mid+1<=r && a[mid+1]==x)
        {
            return mid+1;
        }
        if(x<a[mid])
        {
            r=mid-2;
        }
        else
        {
            l=mid+2;
        }
        
    }
    return -1;
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
    cout<<solve(a,0,n-1,x);
    return 0;
}