#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int l,int r,int x)
{
    int result = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if(x == arr[mid])
        {
           result = mid;
           r = mid - 1;
        }
        else if(x < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        
        
    }
    return result;
}

int main()
{
    int n , x ;
    cin >> n;
    cin >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(arr ,0 , n-1, x);
    return 0;
}