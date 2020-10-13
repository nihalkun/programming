//find element in rotated array
#include<bits/stdc++.h>
using namespace std;


int solve(int arr[],int l,int r)
{
    int N = r + 1;
    while(l<=r)
    {
        if(arr[l]<=arr[r])return l;
        int mid=l + (r-l)/2;
        int next= ( mid + 1 ) % N;
        int prev= (mid + N - 1)%N;
        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
        {
            return mid;
        }
        else if(arr[l]<=arr[mid])
        {
            l=mid+1;
        }
        else if(arr[mid]<=arr[r])
        {
            r = mid -1;
        }
        
    }
    return 0;
}

int BS1(int arr[],int l,int r,int x)
{
   while(l<=r)
   {
       int mid=l+(r-l)/2;
       if(arr[mid]==x)
       {
           return mid;
       }
       else if(x<arr[mid])
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
int BS2(int arr[],int l,int r,int x)
{
   while(l<=r)
   {
       int mid=l+(r-l)/2;
       if(arr[mid]==x)
       {
           return mid;
       }
       else if(x<arr[mid])
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

void find(int arr[],int l,int r,int x)
{
    int index = solve(arr,l,r);
    int m=BS1(arr,l,index-1,x);
    int n=BS2(arr,index,r,x);
    if(m!=-1)
    {
        cout<<m;
    }
    else
    {
        cout<<n;
    }
 }   


int main()
{
    int n,x;
    cin>>n;
    cin>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    find(arr,0,n-1,x);
    return 0; 
}
