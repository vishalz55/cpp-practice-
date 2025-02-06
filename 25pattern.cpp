#include<iostream>
using namespace std;
//right code 
int main()
{
    int n;
    cout<<"Enter the value of the n";
    cin>>n;
    for(int i =0;i<n;i++)
    {   //here we created a grid
        int k =0;
        for(int j=0;j<((2*n)-1);j++)  //are nana yethe ka br k taktoy ka he k<((2*n)-1);j++) 
        {
            //for the space 
            if(j<n-i-1)  // yeth j chy jagi ka br k lihilas
            {
                cout<<" ";
            }
            else if (k<2*i+1) //(k<2*i+1||i==n-1) i think yethe na garj nahi bhava
                                        //smjl ka i==n-1 chi 
                                        
            {
                cout<<"*";
                k++;
            }    // he khali ka br lihila hotas 
            else
            {
                cout<<" ";
            }
            

        }
        cout<<endl;
    }
}