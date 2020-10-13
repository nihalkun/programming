#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N;

    cin>>T;

    for (int i = 0; i < T; i++)
    {
        cin>>N;
        int arr[N];
        for (int j = 0; j < N; j++)
        {
            cin>>arr[j];
        }
        
        sort(arr,arr+N);

        int max_value=0;
        for (int k = 0; k < N; k++)
        {
            max_value=max(max_value,arr[k]);
        }
        int frequency[max_value+1]={0};
        for (int l = 0; l < N; l++)
        {
            frequency[arr[l]]++;
        }
                  

         int ans=0;
         ans+=frequency[0]*(frequency[0]-1)*(frequency[0]-2)/6;  //case1: 0,0,0

         for (int i = 1; i <= max_value; i++)//case2:0,x,x
         {
            ans+=frequency[0]*frequency[i]*(frequency[i]-1)/2;
         }

         for (int i = 1; 2*i <= max_value; i++)//case3:x,x,2x
         {
             ans+=frequency[2*i]*frequency[i]*(frequency[i]-1)/2;
         }

         for (int i = 0; i < max_value; i++)
         {
             for (int j = i+1; i+j <=max_value; j++)
             {
                ans+=frequency[i]*frequency[j]*frequency[i+j];
             }    
         }
         if(ans>0)
         {
          cout<<ans<<endl;
         }
         else
         {
             cout<<"-1";
         }
         
         
    }
    return 0;
}