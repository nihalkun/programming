#include <iostream>
using namespace std;



int main() {
	//code
	int T,N,S;
	
	cin>>T;
	
	for(int i=0;i<T;i++)
	{
	    cin>>N>>S;
	    
	    int num[N],m=0;
	 
	    for(int j=0;j<N;j++)
	    {
	        cin>>num[j];
	    }
	    
	    int cur_sum=0;
    
        for(int k=0;k<N;k++)
        {
            cur_sum=num[k];
        
            for(int l=k+1;l<=N;l++)
            {
               
              if(cur_sum==S)
               {
                  m++;
                  if(m==1)
                  {
                     cout<<k+1<<" "<<l<<"\n";
                  break;
                  }
                 
               }
            
             if(cur_sum>S || l==N)
             {
                break;
             }
             
             
            cur_sum+=num[l];
           }
        }
	
	}

	return 0;
}