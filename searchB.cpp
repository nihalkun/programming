#include<bits/stdc++.h>
using namespace std;

int peak(int a[],int l,int r)
{
    int N=r+1;
    while (l<=r)
    {
        int mid=l+(r-l)/2;
        if(mid>0 && mid<N-1)
        {
            if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
            {
                return mid;
            }
            else if(a[mid]<a[mid+1])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        else if(mid==0)
        {
            if(a[0]>a[1])
            {
                return 0;
            }
            else
            {
                return 1;
            }
            
        }
        else if(mid==N-1)
        {
            if(a[N-1]>a[N-2])
            {
                return N-1;
            }
            else
            {
                return N-2;
            }
            
        }
    }
    return -1;
}

int BS1(int a[],int l,int r,int x)
{
  while(l<=r)
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

int BS2(int a[],int l,int r,int x)
{
      while(l<=r)
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

void solve(int a[],int l,int r,int x)
{
    int index=peak(a,l,r);
    int p=BS1(a,l,index,x);
    int q=BS2(a,index+1,r,x);
    if(p>0)
    {
        cout<<p<<endl;
    }
    else
    {
        cout<<q<<endl;
    }
    
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
    solve(a,0,n-1,x);
    return 0;
}