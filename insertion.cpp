#include<bits/stdc++.h>
using namespace std;

void sorti(int a[],int n)
{
    for (int i = 1; i < n; i++)
    {
        int value=a[i];
        int hole=i;
        while(hole>0 && a[hole-1]>value)
        {
            a[hole]=a[hole-1];
            hole--;
        }
        a[hole]=value;
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
    sorti(a,n);
    return 0;
}