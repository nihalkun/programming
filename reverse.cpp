#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        string str;
        cin>>str;

     
        string a="";
        string b="";
       for (int i = str.size()-1; i >=0 ; i--)
       {
           if(str[i]!='.')
           {
              a=a+str[i];
               
           }
           else
           {
               b="."+a+b;
               a="";
           }
           
       }
       

        cout<<str;
    }
    
    return 0;
}

