#include<bits/stdc++.h>
using namespace std;

int BS(int a[],int l,int r)
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

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i< n; i++)
    {
        cin>>a[i];
    }
    cout<<BS(a,0,n-1);
    return 0;
}