#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of the n";
    cin>>n;
    for(int i =0;i<n;i++)
    {   //here we created a grid
        int k =0;
        for(int j=0;k<2*n-1;j++)
        {
            //for the space 
            if(k<n-i-1)
            {
                cout<<" ";
            }
            else if (k<2*i+1||i==n-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            k++;

        }
        cout<<endl;
    }
}