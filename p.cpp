#include<bits/stdc++.h>
using namespace std;
#define n 5

int valid(int a[n][n],int x, int y)
{
    return (x>=0 && x<n && y>=0 && y<n && a[x][y]==1);
}

int solve(int a[n][n],int x,int y,int sol[n][n])
{
    if(x==n-1 && y==n-1 && a[x][y]==1)
    {
        sol[x][y]=1;
        return 1;
    }

    if(valid(a,x,y))
    {
        sol[x][y]=1;

        if(solve(a,x+1,y,sol)==1)
        return 1;

        if(solve(a,x,y+1,sol)==1)
        return 1;

        else
        sol[x][y]=0;
        return 0;
    }
    return 0;
}

int main()
{
    int a[n][n]={      { 1, 0, 0, 0 ,0}, 
                       { 1, 1, 0, 1,0 }, 
                       { 0, 1, 1, 0,0 }, 
                       { 0, 0, 1, 1 ,0},
                       { 0, 0, 1, 1, 1},
                                     };


    int sol[n][n];
    memset(sol,0,sizeof(sol));
    if(solve(a,0,0,sol)==0)
    {
        cout<<"No out put"<<endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    

   return 0;              
}
