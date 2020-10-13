#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T,N;
  cin>>T;

  for(int l=0;l<T;l++)
  {

  cin>>N;
  int arr[N];
  for(int p=0;p<N;p++)
  {
   cin>>arr[p];
  }
  sort(arr,arr+N);
  long int m=0;
  for(int i=N-1;i>=0;i--)
  {
   int j=0;
   int k=i-1;
  
     
  while(j<k)
  {
	  if(arr[j]+arr[k]==arr[i])
	  {
		  m++,j++,k--;
		 
	  }
	  else if(arr[j]+arr[k]<arr[i])
	  {
		  j++;
	  }
	  else
		  k--;
  }
  }
 
  if(m>0)
  {
     cout<<m<<endl;
  }
  else
  {
	  cout<<"-1";
  }
  

  }
	return 0;
}