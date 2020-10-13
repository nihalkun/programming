//search for a range
#include<bits/stdc++.h>
using namespace std;

int BS1(int a[],int l,int r,int x)
{
    int res=-1;
    while (l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==x)
        {
            res=mid;
            r=mid-1;
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
    return res;
}

int BS2(int a[],int l,int r,int x)
{
    int res=-1;
    while (l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==x)
        {
            res=mid;
            l=mid+1;
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
    return res;
}

void range(int a[],int l,int r,int x)
{
    int first=BS1(a,l,r,x);
    int last=BS2(a,l,r,x);
    cout<<"["<<first<<","<<last<<"]";
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
    range(a,0,n-1,x);
}