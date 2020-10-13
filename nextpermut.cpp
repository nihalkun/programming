#include<bits/stdc++.h>
using namespace std;



void solve(vector<int> A) {

    int n = A.size();
    int mx=INT_MIN;
    int hole,count=1;
    int value;
    
    for(int i=0;i<n-1;i++)
    {
        if(A[i]>=A[i+1])
        {
            count++;
        }
    }

      if(count==n)
            {
                sort(A.begin(),A.end());
                for (size_t i = 0; i < n; i++)
                {
                    cout<<A[i]<<" ";
                }
                
            }
    
    for(int i=n-1;i>=0;i--)
    {
        mx=max(mx,A[i]);
        if(mx>A[i])
        {
            value=A[i];
            hole=i;
            break;
        }
    }
    int k,maxvalue=INT_MIN;
    for(int i=hole+1;i<n;i++)
    {
        if(A[hole]<A[i])
        {
            maxvalue=min(A[i],maxvalue);
            k=i;
        }
    }
     swap(A[hole],A[k]);
     sort(A.begin()+(hole+1),A.end());
      for (size_t i = 0; i < n; i++)
      {
        cout<<A[i]<<" ";
      }
}


int main()
{
    int n,x;
    cin>>n;
    vector<int>A;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        A.push_back(x);
    }
    
    solve(A);
    return 0;
}