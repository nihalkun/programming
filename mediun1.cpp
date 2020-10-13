#include<bits/stdc++.h>
using namespace std;

int search(int a[][10],int n,int m)
{
    int mn=INT_MAX;
    int mx=INT_MIN;
  for (int i = 0; i < n; i++)
  {
      if(a[i][0]<mn)
      mn=a[i][0];
  }
  for (int i = 0; i < m; i++)
  {
      if(a[i][m-1]>mx)
      mx=a[i][m-1];
  }
 
  int desire=(m*n+1)/2;
 
  while (mn<mx)
  {
      int mid=mn+(mx-mn)/2;
       int count=0;
      for (int i = 0; i < n; i++)
      {
           count+=upper_bound(a[i],a[i]+m,mid)-a[i]; 
      }
      if(count>=desire)
      {
          mx=mid;
      }
      else
      {
          mn=mid+1;
      } 
  }
  return mn;
}

int main()
{
    int n,m,x;
    cin>>n;
    cin>>m;
    int a[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }  
    }
    cout<<search(a,n,m);
    return 0;
}