#include<iostream>
using namespace std;
//love bhau method
int main()
{   
    
    int length ;
    int breath ;
    cout<<"Enter the value of the length"<<endl;
    cin>>length;
    cout<<"Enter the value of the breath"<<endl;
    cin>>breath;
  
    for(int i =0;i<breath;i++)
    {  
        if(i ==0||i==breath-1)
        {
        for(int j=0;j<length;j++)
        {
            cout<<"*";
        }
        }
        else 
    {
        cout<<"*";
        for(int j =1;j<length-1;j++)
        {
            cout<<" ";
        }
         cout<<"*";    
        
    }
     cout<<endl;
    }
    return 0;
}