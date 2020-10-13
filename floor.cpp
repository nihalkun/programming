//Find Floor of an element in a Sorted Array
#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int l,int r,int x)
{
    int res=-1;
    while (l<=r)
    {
       int mid=l+(r-l)/2;
       if(x==a[mid])
       {
           return mid;
       } 
       if(a[mid]>x)
       {
           r=mid-1;
       }
       else 
       {
           res=a[mid];
           l=mid+1;
       }
       
    }
    return res;
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