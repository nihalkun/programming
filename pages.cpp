//Allocate Minimum Number Of Pages
#include<bits/stdc++.h>
using namespace std;

bool valid(int a[],int n,int x,int max)
{
  int student=1;
  int sum=0;
  for (int i = 0; i< n; i++)
  {
     
      sum=sum+a[i];
      if(sum>max)
      {
          student++;
          sum=a[i];
      }
      if(student>x)
      {
          return false;
      }
  }
  return true;  
}

int solve(int a[],int n,int x,int sum)
{
    if(x>n)
    return -1;
    
    int res=-1;
    int l=*max_element(a,a+n);
    int r=sum;
    while (l<=r)
    {
        int mid=l+(r-l)/2;
        if(valid(a,n,x,mid)==true)
        {
            res=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
        
    }
    return res;  
}

int main()
{
    int n,x,sum=0;
    cin>>n;
    cin>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    cout<<solve(a,n,x,sum);
    return 0;
}