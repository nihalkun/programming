#include<bits/stdc++.h>
using namespace std;
#define N 8

int valid(int nx, int ny, int sol[N][N])
{
    return (nx>=0 && nx<N && ny>=0 && ny<N && sol[nx][ny]==-1);
}

/*int solve(int sol[N][N],int x, int y, int mv, int dx[N],int dy[N])
{
    if(mv==N*N)
      return 1;

      for (int i = 0; i < N; i++)
      {
          int nx=x+dx[i];
          int ny=y+dy[i];
          if(valid(nx,ny,sol))
          {
              sol[nx][ny]=mv;
              if(solve(sol,x,y,mv+1,dx,dy)==1)
              return 1;
              else
              
              sol[nx][ny]=-1;
          }
      }
      return 0;
}*/

int solve(int arr[N][N],int x, int y, int mv, int dx[N], 
				int dy[N]) 
{ 
	int k, nx, ny; 
	if (mv == N*N) 
		return 1; 
	
	for (k = 0; k < 8; k++) 
	{ 
		nx = x + dx[k]; 
		ny = y + dy[k]; 
		if (valid(nx,ny, arr)) 
		{ 
			arr[nx][ny] = mv; 
			if (solve(arr,nx, ny,mv + 1,dx, dy) == 1) 
				return 1; 
			else
		
				arr[nx][ny] = -1; 
		} 
	} 
	return 0; 
} 

int main()
{
  int sol[N][N];
  memset(sol,-1,sizeof(sol));
  int dx[N]={2,1,-1,-2,-2,-1,1,2};                
  int dy[N]={1,2,2,1,-1,-2,-2,-1}; 

  sol[0][0]=0;
  if(solve(sol,0,0,1,dx,dy)==0)
  {
    cout<<"solution does not exist";
    return 0;
  }
  else
    /*printSolution(arr);*/
   /* for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout<<" "<<setw(2)<<sol[i][j]<<" ";
            cout<<endl;
        }
        
    }*/
     for (int i = 0; i < N; i++) 
	{ 
		for (int j = 0; j < N; j++) 
			cout<<" "<<setw(2)<<sol[i][j]<<" "; 
		cout<<endl; 
	}  
     
    
    return 1;

  return 0;
}