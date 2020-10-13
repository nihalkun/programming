#include<bits/stdc++.h>
using namespace std;

void agrevstack(stack<int>&s,int temp)
{
    if(s.size()==0)
    {
        s.push(temp);
        return;
    }

    int val=s.top();
    s.pop();
    agrevstack(s,temp);
    s.push(val);
    return;
}

void revstack(stack<int>&s)
{
    if(s.size()==1)
    return;

    int temp=s.top();
    s.pop();
    revstack(s);
    agrevstack(s,temp);
    return;
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
    revstack(s);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}