#include<bits/stdc++.h>
using namespace std;

void mergarray(int a[],int b[],int m, int n)
{
    int res[m+n];
    for (int i = n-1; i >=0; i--)
    {
       int last=a[m-1];
       int j=m-2;

       while (j>=0 && a[j]>b[i])
       {
           a[j+1]=a[j];
           j--;
       }
       if(j!=m-2 || last>b[i])
       {
           a[j+1]=b[i];
           b[i]=last;
       }
               
    }
   return a+b;
    
    
}

int main()
{
    int T,m,n;
    cin>>T;

    for (int i = 0; i < T; i++)
    {
        cin>>m>>n;
        int a[m],b[n];
        for (int i = 0; i < m; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
       int merg= mergarray(a,b,m,n);
        cout<<merg<<endl;
    }
    

    return 0;
}