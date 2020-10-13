#include<bits/stdc++.h>
using namespace std;

void insertstack(stack<int>&st,int temp)
{
    if(st.size()==0 || (st.top())<=temp)
    {
        st.push(temp);
        return;
    }

    int val=st.top();
    st.pop();
    insertstack(st,temp);
    st.push(val);
    return;
}

void sortstack(stack<int>&st)
{
    if(st.size()==1)
    return;

    int temp=st.top();
    st.pop();
    sortstack(st);
    insertstack(st,temp);
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
    
    sortstack(s);
   while (!s.empty()) 
    {
       cout << '\t' << s.top();
      s.pop();  
    }
     cout << '\n'; 
    return 0;
}