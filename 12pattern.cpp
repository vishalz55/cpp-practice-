////inverted half pyramid numeric
////ani no pn ulte kele apn 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        for(int j= 0;j<n-i;j++)
        {
            cout<<n-j<<" ";   
        }

          cout<<endl;
    }
}