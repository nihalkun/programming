#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,m,n;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        cin>>m>>n;
        int arr[m+n],arr1[m],arr2[n];
        for (int i = 0; i < m+n; i++)
        {
            cin>>arr[i];
        }
        
        sort(arr,arr+m+n);
        for (int i = 0; i < m+n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
}