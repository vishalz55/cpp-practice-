#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enteh the no"<<endl;
    cin>>num;
    int fac=1; // 0 * something 0 start with 1
    for(num;num>=1;num--)
    {
        fac = fac*num;
    }
    cout<<"the factorial is"<<fac<<endl;
    
    return 0;
}