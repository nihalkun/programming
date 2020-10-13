#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = l + (r - l)/2;
        if(x == arr[mid])
        {
            return mid;
        }
        else if(x < arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
        
    }
    return -1;
}

int main()
{
    int n , x;
    cin >> n;
    cin >> x;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << solve(arr , 0 , n-1 , x) << endl;
    return 0;
}