//hallow rectangle without generic
//je prinyt kryach te zal shevti
#include<iostream>
using namespace std;

int main()
{
    // for(int i =0;i==0||i==2;i++)
    // {
    //       for(int j =0;j<5;j++)
    //       {
    //          cout<<"*";
    //       }
    //     cout<<endl;
    // }
     
    //  int i =0;
    //  while(i==0||i==2){
    //      for(int j =0;j<5;j++)
    //      {
    //         cout<<"*";
    //      }
    //      cout<<endl;
    //      i++;
    //  }


    for(int i =0;i<3;i++)
    {
        if(i==0||i==2){
          for(int j =0;j<5;j++)
          {
             cout<<"*";
          }
        }
        cout<<endl;  //cout<<endl is also imp in this case
    }



    return 0;
}