#include<bits/stdc++.h>
using namespace std;

void sorts(int a[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int imin=i;
        for (int j = i+1; j < n; j++)
        {
            if(a[imin]>a[j])
            {
                imin=j;
            }
        }
        int temp=a[i];
        a[i]=a[imin];
        a[imin]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sorts(a,n);
    return 0;
}