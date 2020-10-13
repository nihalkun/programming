#include<bits/stdc++.h>
using namespace std;

void insertfunc(vector<int>&vec,int temp)
{
    if(vec.size()==0 || vec[vec.size()-1]<= temp)
    {
      vec.push_back(temp);
      return;
    }

    int val=vec[vec.size()-1];
    vec.pop_back();
    insertfunc(vec,temp);
    vec.push_back(val);
    return;

}

void sortfunc(vector<int>&vec)
{
    if(vec.size()==1)
    return;

    int temp=vec[vec.size()-1];
    vec.pop_back();
    sortfunc(vec);
    insertfunc(vec,temp);
}


int main()
{  
    int count;
    cin>>count;
    vector<int>v;
    for (int i = 0; i < count; i++)
    {
        int n;
        cin>>n;
         v.push_back(n);
    }
    
  sortfunc(v);
  for (int i = 0; i < count; i++)
  {
      cout<<v[i]<<" ";
  }
  

 return 0;   
}