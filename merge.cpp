#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> a,vector<int> l,vector<int> r)
{
    int n=l.size();
    int m=r.size();
    int i=0,j=0,k=0;
    while (i<n && j<m)
    {
        if(l[i]<=r[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=r[j];
            j++;
            k++;
        }
    }

    while(i<n)
    {
        a[k]=l[i];
        i++;
        k++;
    }
    
     while(j<n)
    {
        a[k]=r[j];
        j++;
        k++;
    }
    return a;
    
}
int mergesort(vector<int> a)
{
    int n=a.size();
    if(n<2)return;
    int mid=n/2;
    vector<int> left;
    vector<int> right;
    for (int i = 0; i < mid; i++)
    {
        left[i]=a[i];
    }
    for (int i = mid; i < n; i++)
    {
        right[i-mid]=a[i];
    }
    mergesort(left);
    mergesort(right);
    merge(a,left,right);
}

int main()
{
    int n,x;
    cin>>n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    int v[] =mergesort(a);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}