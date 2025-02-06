//user eneter krto thevdi multilicatioj table create krun dakva 
#include<iostream>
using namespace std;
int main()
{
    int num,val;
    cout<<"Enter the no u want to create mulication table"<<endl;
    cin>>num;
    cout<<"upto"<<endl;
    cin>>val;
    int temp;
    
    for(int i =1;i<=val;i++)
    {
        
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
    return 0;
}