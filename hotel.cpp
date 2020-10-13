#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back({x,2});
    }
    for (int i = 0; i < n; i++)
    {
        cin>>y;
        v.push_back({y,1});
    }

    sort(v.begin(),v.end());
    for (int i = 0; i < 2*n; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    
 return 0;
}