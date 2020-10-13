#include<bits/stdc++.h>
using namespace std;

void solve(string ip,string op,set<string>&s)
{
   
   
    //vector<string>n;
    if(ip.size()==0)
    {
        
       s.insert(op);
           
        return;
    }

    string op1=op;
    string op2=op;
    
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);

    solve(ip,op1,s);
    solve(ip,op2,s);
}

int main()
{
    string ip;
    string op="";
    cin>>ip;
    set<string>s;
    solve(ip,op,s);
    set<string>:: iterator it;
    for (it=s.begin(); it !=s.end(); it++)
    {
        cout<<*it<<" ";
    }
    
    return 0;
}