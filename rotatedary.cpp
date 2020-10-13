//Number of Times a Sorted array is Rotated
#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int l,int r)
{
    
    int N = r + 1;
    while(l<=r)
    {
        if(arr[l]<arr[r])return l;
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
        else 
        {
            r = mid -1;
        }
        
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<solve(arr,0,n-1);
    return 0;
    
}