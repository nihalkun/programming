#include<bits/stdc++.h>
using namespace std;
#define n 4

int valid(int arr[n][n],int x, int y)
{
    return (x>=0 && x<n && y>=0 && y<n && arr[x][y]==1);
}

int solve(int arr[n][n],int x, int y, int output[n][n])
{
    if(x==n-1 && y==n-1 && arr[x][y]==1)
    {
       output[x][y]=1;
       return 1;        
    }

  if(valid(arr,x,y))
  {
      output[x][y]=1;

      if(solve(arr,x+1,y,output)==1)
      return 1; 
      
      if(solve(arr,x,y+1,output)==1)
      return 1;

      else 
      output[x][y]=0;
      return 0;
  }
  return 0;
    
}

int main()
{
    int arr[n][n]={ { 1, 0, 0, 0 }, 
                       { 1, 1, 0, 1 }, 
                       { 1, 1, 0, 0 }, 
                       { 0, 1, 1, 1 } };
    
    int output[n][n];
    memset(output,0,sizeof(output));
    if(solve(arr,0,0,output)==0)
    {
        cout<<"nothing is there";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<output[i][j]<<" ";
            }
            cout<<endl; 
            
        }
        
    }
    

    return 0; 
}