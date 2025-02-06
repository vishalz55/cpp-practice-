#include<iostream>
using namespace std;
int main()
{
    int dividend ,divisor,remainder,quotient;
    cout<<"Enter the dividend";
    cin>>dividend;
    cout<<"Enter the divisor";
    cin>>divisor;
    
    quotient  =  dividend/divisor;
    remainder =  dividend%divisor;
    
    cout<<"THe quotient is"<<quotient<<endl;
    cout<<"THe remainder is"<<remainder<<endl;
    return 0;
}