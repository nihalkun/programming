// Next Alphabetical Element
#include<bits/stdc++.h>
using namespace std;

void solve(char a[],int l,int r,char x)
{

    while (l<r && a[r]>x)
    {
        int mid=l+(r-l)/2;
        
        if(a[mid]>x)
        {
            r=mid-1;
        }
        else 
        {
            l=mid+1;
        }
    }
    cout<<a[l];
}

int main()
{
    int n;
    char x;
    cin>>n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    solve(a,0,n-1,x);
    return 0;
}