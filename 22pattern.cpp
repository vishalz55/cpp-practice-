//laksy bhau chi method 
//inverted half pyramid ok 
#include<iostream>
using namespace std;


int main()
{
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) //nana sangitl na approch vegli ahe 
                            //tu kay kela hoyas agodar n-i-1 hi condition yethe lihila hotas 
        {
        //star print kra kadhi 
        if(i==0||j==0||j==n-i-1)
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        }
        
        cout<<endl;
    }
    return 0;
}