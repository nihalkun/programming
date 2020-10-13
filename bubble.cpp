#include<bits/stdc++.h>
using namespace std;

void sortb(int a[],int n)
{
    for (int i = 1; i < n; i++)
    {
        int flag=0;
        for (int j = 0; j < n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag++;
            }
        }
        if(flag==0)break;
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
    sortb(a,n);
    return 0;
}