//Painter's Partition Problem
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

int solve(int a[],int n,int x,int sum,int y)
{
    
    for (int i = 0; i < n; i++)
    {
        a[i]=a[i]*y;
    }
    

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
    int n,x,y,sum=0;
    cin>>n;
    cin>>x;
    cin>>y;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i]*y;
    }
    cout<<solve(a,n,x,sum,y);
    return 0;
}