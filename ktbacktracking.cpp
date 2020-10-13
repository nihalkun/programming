#include<bits/stdc++.h>
using namespace std;
#define N 8

int valid(int nx,int ny,int arr[N][N])
{
    return (nx>=0 && nx<N && ny>=0 && ny<N && arr[nx][ny]==-1);
    
}

/*int valid(int x, int y, int arr[N][N]) 
{ 
	return (x >= 0 && x < N && y >= 0 && 
			y < N && arr[x][y] == -1); 
} 
*/
/*void printSolution(int arr[N][N]) 
{ 
	for (int x = 0; x < N; x++) 
	{ 
		for (int y = 0; y < N; y++) 
			cout << " " << setw(2) 
						<< arr[x][y] << " "; 
		cout << endl; 
	} 
} */

/*int solve(int arr[N][N],int x, int y, int mv, int dx[N],
        int dy[N])
{
  int k, nx, ny;

  if (mv == N*N)
    return 1;

  for (k = 0; k < 8; k++)
  {
       nx = x + dx[k];
       ny = x + dy[k];
      if (valid(nx,ny,arr))
      {
          arr[nx][ny]=mv;
          if (solve(arr,nx, ny,
                 mv + 1, dx, dy) == 1)
          return 1;
          else

          arr[nx][ny] = -1;    
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
			if (solve(arr,nx, ny, 
							mv + 1,dx, dy) == 1) 
				return 1; 
			else
		
				arr[nx][ny] = -1; 
		} 
	} 
	return 0; 
} 

/*int solveprob()
{
int arr[N][N];

 memset(arr,-1,sizeof(arr));

  int dx[8]={2,1,-1,-2,-2,-1,1,2};       
  int dy[8]={1,2,2,1,-1,-2,-2,-1};

arr[0][0]=0;
  if(solve(arr,0,0,1,dx,dy)==0);
  {
    cout<<"not";
    return 0;
  }
  
  printSolution(arr);
  
  
  return 1;
}*/

int main() 
{ 
	int arr[N][N]; 

			memset(arr,-1,sizeof(arr));

	int dx[N] = { 2, 1, -1, -2, -2, -1, 1, 2 }; 
	int dy[N] = { 1, 2, 2, 1, -1, -2, -2, -1 }; 

	arr[0][0] = 0; 

	if (solve(arr,0, 0, 1, dx, dy) == 0) 
	{ 
		cout << "Solution does not exist"; 
		return 0; 
	} 
	else
		/*printSolution(arr);*/
    for (int x = 0; x < N; x++) 
	{ 
		for (int y = 0; y < N; y++) 
			cout << " " << setw(2) 
						<< arr[x][y] << " "; 
		cout << endl; 
	}  

    return 1;

   return 0;  
} 


/*int main()
{
  solveprob();
  
  return 0;
}*/