//swap program
#include<iostream>
using namespace std;
int main()
{
    int var1,var2,temp;
    cout<<"Enter the no u want to swap"<<endl;
    cin>>var1;
    cin>>var2;
    
    cout<<"BEfore swapping"<<var1<<"and"<<var2<<endl;
    temp = var1;
    var1=var2;
    var2=temp;
    
    cout<<"After swapping "<<var1<<"and"<<var2<<endl;
    
    return 0;
}