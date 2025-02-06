#include<iostream>
using namespace std;
int main()
{
    //user kdun ghe
    int n1,n2,max,lcm;
    cout<<"Enter the value1";
    cin>>n1;
    cout<<"Enter the value2";
    cin>>n2;
    
    //ata na max no ghya
    if(n2>n1)
    {
        max = n2;
        n2=n1;
        n1=max;
    }
    max =n1;
   while(true)
   {
       if(max%n1==0 && max%n2==0)
       {
           lcm = max;
           break;
       }
        max++; // are nana break statement rahil hot 
   }
   cout<<"the lcm is"<<lcm;
   
    return 0;
}