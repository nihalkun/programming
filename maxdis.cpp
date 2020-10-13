#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,mx=INT_MIN;
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
  
    if(n<2)
    {
        cout<<0;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(A[i]<=A[j])
            {
                mx=max(mx,j-i);
            }
        }
    }
    cout<<mx;

    return 0;
}