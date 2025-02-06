//check the give no is even or odd 

#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Enter the no to check"<<endl;
    cin>>num1;
    
    if(num1%2==0)
    {
        cout<<"The no is even";
    }
    else
    {
        cout<<"odd no";
    }
    return 0;
}