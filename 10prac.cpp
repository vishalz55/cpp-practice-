#include<iostream>
using namespace std;
//sum of the natural no
int main()
{
    int num;
    cout<<"enter the sum upto no "<<endl;
    cin>>num;
     int sum;
    
    for(int i =0;i<=num;i++)
    {
        sum = sum +i;
    }
    cout<<"the sum is"<<sum;
    
    return 0;
}