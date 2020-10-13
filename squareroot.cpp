#include<bits/stdc++.h>
using namespace std;

int solve(int x)
{
    int ans=0;
    int l= 1;
    int r= x;
    if(x==0 || x==1)
    return x;

    while (l<=r)
    {
        int mid=l+(r-l)/2;
        if(mid*mid==x)
        return mid;

        if(mid*mid>x)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
            ans=mid;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<solve(n);
    return 0 ;
}