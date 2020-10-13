#include<bits/stdc++.h>
using namespace std;

int solve(int ar[] , int l , int r , int x)
{
    while (l <= r)
    {
        int mid = l + (r - l)/2;

        if(x == ar[mid])
        {
            return mid;
        }
        else if(x < ar[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, x;
    cin >> n;
    cin >> x;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    cout << solve(ar , 0 , n-1 , x) << endl;
    
    return 0;
    
}