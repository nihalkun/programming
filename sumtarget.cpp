#inlcude<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,add=0;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
     cin>>nums[i];   
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            add=nums[i]+nums[j];
            if(add==t)
                cout<<i<<j<<endl;
                break;
        }
    }
    return 0;
}