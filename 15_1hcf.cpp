#include<iostream>
using namespace   std;
int main()
{
    int n1,n2,hcf;
    cout<<"ENter the first no"<<endl;n
    cin>>n1;
    cout<<"ENter the second no"<<endl;
    cin>>n2;
    
    //if n2>n1 then 
    if(n2>n1)
    {
        int temp = n2;
        n2= n1;
        n1 = temp;
    } 
        for(int i =1;i<=n2;i++)                         //for(int i =0;i<=n2;i++)
    {                                      //Floating point exception
        if(n1%i==0 && n2%i==0)   //e.g 4%2==0 yete          //as yetay
        {                         //pn 4%0==kay yete mahiti nahi as                           //rahte 
            hcf = i;
        }
    }
    
    cout<<"hcf is"<<hcf;
   
    
    return 0;
}