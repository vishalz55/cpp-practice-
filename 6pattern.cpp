//solid  square increment
//recatamgle
#include<iostream>

using namespace std;
int main(){
    int n,m;
    cout<<"Enter length"<<endl;
    cin>>n;
    cout<<"Enter breadth"<<endl;
    cin>>m;


    for(int i = 0;i<m;i++)
    {
        for(int j= 0;j<n;j++){   //ith ult zal hot m and n madhe
            cout<<"* ";
        }

          cout<<endl;
    }
}