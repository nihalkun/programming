#include<bits/stdc++.h>
using namespace std;

int maxsum(int a[],int n)
{
    int final_sum=a[0];
    int curr_sum=a[0];

    for (int i = 1; i < n; i++)
    {
      curr_sum=max(a[i],curr_sum+a[i]);
      final_sum=max(final_sum,curr_sum);   
    }
     return final_sum;
}

int main()
{
    int T,N;
    cin>>T;

    for (int i = 0; i < T; i++)
    {
        cin>>N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin>>a[i];
        }
       cout<<maxsum(a,N)<<endl;
    }
    return 0;
}