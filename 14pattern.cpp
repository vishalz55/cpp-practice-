//inverted full pyramid
#include<iostream>
using namespace std;



int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
       for(int j =0;j<i;j++)
       {
        cout<<" ";
       }
      
       for(int j =0;j<n-i;j++)
       {               //same for this  also
        cout<<"* " ;  //are nana kay he sadh mi as lihili "*" tr purn chukich dil bnvaun kay bolav ata 
                    //ts chagpt ch ans mi lihil khali ok 
       }            



          cout<<endl;
    }
}