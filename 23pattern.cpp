#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of the n";
    cin>>n;
    for(int i =0;i<n;i++)
    {   //here we created a grid
        for(int j=0;j<2*n-1;j++)
        {
            //for the space 
            if(j<n-i-1)
            {
                cout<<" ";
            }
            else if (j<2*i+1||i==n-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<endl;
    }
}