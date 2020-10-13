#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int l, int r, int x)
{
        if(x == arr[0])
        {
            cout <<" array of size 1" << endl ;
            
        }
        else if(arr[0] < arr[1])
        {
            cout << "sorted in ascending order"<< endl ;
        
        }
        else
        {
            cout << "sorted in decending order"<< endl ;
            
        }

}

int main()
{
    int n , x ;
    cin >> n;
    cin >> x ;
    int arr[n] ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    solve(arr, 0, n-1, x);
    return 0;
    
}