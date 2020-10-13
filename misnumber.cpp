#include<bits/stdc++.h>
using namespace std;

int find_miss_sum(int a[],int n)
{
    
  
      int t=n*(n+1)/2;
      for (int i = 0; i < n-1; i++)
      
          t-=a[i];
      
      return t;
      
  
  
}

int main()
{
    int T,N;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        cin>>N;
        int ar[N];
        for (int i = 0; i < N-1; i++)
        {
            cin>>ar[i];
        }
       int miss=find_miss_sum(ar,N);
       cout<<miss<<endl;
    }
    return 0;
}