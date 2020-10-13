#include<bits/stdc++.h>
using namespace std;

void popmiddle(stack<int>&s,int k)
{
    if(k==1)
    {
        s.pop();
        return;
    }

    int temp=s.top();
    s.pop();
    
    popmiddle(s,k-1);
    s.push(temp);
}

int main()
{
    int count;
    cin>>count;
    stack<int>s;
    for (int i = 0; i < count; i++)
    {
        int n;
        cin>>n;
        s.push(n);
        
    }
    int k=s.size()/2+1;
    popmiddle(s,k);
    while(!s.empty())
    {
        cout<<" "<<s.top();
        s.pop();
    }
    
    return 0;
}