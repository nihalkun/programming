//Minimum Difference Element in a Sorted Array
#include<bits/stdc++.h>
using namespace std;

void BS(int a[],int l,int r,int x)
{
    while (l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==x)
        {
           cout<<a[mid];
        }
        else if(x>a[mid])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        
    }

    int d1=abs(x-a[l]);
    int d2=abs(x-a[r]);
    int mn=min(d1,d2);
    cout<<mn;
}

int main()
{
    int n,x;
    cin>>n;
    cin>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    BS(a,0,n-1,x);
    return 0;
}