//solid  square increment
//two times drop while decrement 
// its sauare ok not confuse about rectangle 
#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        for(int j= 0;j<n-2*i;j++){
            cout<<"* ";
        }

          cout<<endl;
    }
}