#include<bits/stdc++.h>
using namespace std;

void solve(int s, int d, int h,int n, int count)
{
    if(n==1)
    {
      return;
    }

    solve(s,h,d,n-1,count);
    count=count+1;
  
    solve(h,d,s,n-1,count);
    
    return;
}

int main()
{
    int n;
    cin>>n;

    int s=1,h=2,d=3,count=0;
    solve(s,d,h,n,count);

    return 0;
}