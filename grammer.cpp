#include<bits/stdc++.h>
using namespace std;

int grammer(int n,int k)
{
    if(n==1 && k==1)
    {
    return 0;
    }
    int mid=pow(2,n-1)/2;
    if(k<=mid)
    {
         return grammer(n-1,k);
    }
    else
    {
        return !grammer(n-1,k-mid);
    }
    
  
}

int main()
{
    
    cout<<grammer(4,3);
    
    return 0;
}