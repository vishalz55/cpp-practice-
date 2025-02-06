#include<iostream>
using namespace std;

int main()
{   
   //grid
   int n ;
   cin>>n;
   
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<(2*n)-1;j++) 
       
       {
           if(j<n-i-1)
           {
               cout<<" ";
           }
           else if(j<(n+i))//yethe mi else if lavt hoto ans nahi dil
                              //yethe mi (2*i)-1) chy jagi n*1 lhil ans bhetay 
           {
               cout<<"*";
           }
       }
       
        cout<<endl;
    }
    return 0;
}