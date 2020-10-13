/*#include<bits/stdc++.h>
using namespace std;

void recursion(int n)
{
    if(n==1)
    {                   //base condition
    cout<<n<<" ";
    return ;

    }
    cout<<n<<" ";  //induction
    recursion(n-1); //hypothesis
   
}

int main()
{
    int num;
    cin>>num;
    recursion(num);
     
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int callfac(int n)
{
    if(n>=1)
    return n*callfac(n-1);
  
    else
    
        return 1;
    
    

    

}

int main()
{
    int num;
    cin>>num;
    callfac(num);
    cout<<callfac(num)<<" ";
    return 0;
}