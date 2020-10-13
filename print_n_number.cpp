#include<bits/stdc++.h>
using namespace std;

void fun(int num)
{
    if(num==1)
    {
        cout<<num<<" ";
        return;
    }

    fun(num-1);
    cout<<num<<" ";
}

int main()
{
    int n;
    cin>>n;
    fun(n);
    return 0;
}