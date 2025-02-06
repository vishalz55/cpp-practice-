#include<iostream>
using namespace std;

//local variables 


int target(int num1,int num2)
{
    int summ;
    summ = num1+num2;
    return summ;
}

int main()
{
    int num1,num2;
   cout<<"enter num1";
   cin>>num1;
   cout<<"enter num2";
   cin>>num2;
   int sum = target(num1,num2);
   
   cout<<"the sum is "<<sum;
    return 0;
}