#include<bits/stdc++.h>
using namespace std;

void fun(int n,int one,int zero,string op,vector<string>&v)
{
    if(n==0)
    {
       v.push_back(op);
        return;
    }
    
        string op1=op;
        op1.push_back('1');
        fun(n-1,one+1,zero,op1,v);
    
    if(one>zero)
    {
        string op2=op;
        
        op2.push_back('0');
      
        fun(n-1,one,zero+1,op2,v);
    }
    return;
}

int main()
{
    int n,one=0,zero=0;
    cin>>n;
    string op="";
     vector<string>v;
    fun(n,one,zero,op,v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

    
 
    return 0;
}