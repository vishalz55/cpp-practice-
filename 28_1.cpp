#include<iostream>
using namespace std;
// mnje mi jr as kel tri chuktay 
//1)400 nantr 4 lihila na 100 lihit
//dusra poinyt % jagi / kel used
int main(){
    int year;
    cout<<"enter the year"<<endl;
    cin>>year;
    
    if(year%400==0)
    {
        cout<<"leap year"<<endl;
    }
    else if(year%4==0)
    {
        cout<<" leap year"<<endl;
    }
    else if(year%100==0)
    {
        cout<<"not leap year"<<endl;
    }
  
    else
    {
        cout<<"not leap year"<<endl;
    }
    
    return 0;
}