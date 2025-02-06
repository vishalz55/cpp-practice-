//largest no amonng three 

#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    
    cout<<"Enter the first no n1"<<endl;
    cin>>n1;
    cout<<"Enter the first no n2"<<endl;
    cin>>n2;
    cout<<"Enter the first no n3"<<endl;
    cin>>n3;
    
    if(n1>=n2&&n1>=n3)
    {
        cout<<"the n1 is graeter"<<n1;
    }
    
    else if (n2>=n3&&n2>=n1)
    {
        cout<<"the n2 is graeter   "<<n2;
    }
    else
    {
        cout<<"the n3 greatest  "<<n3;
    }
    
    
    
    return 0;
}