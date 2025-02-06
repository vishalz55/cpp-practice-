#include<iostream>
using namespace std;
// yat na as grid method ni kryach aste direct lihyach agodar ani nantr hallow to kryach agodar solid to hallow as 
int main(){
    int n;
    cout<<"Enter the value of the n";
    cin>>n;
    for(int i =0;i<n;i++)
    {   //al solid ata vichar kra hallow ks krat yeil smjl ka 
        for(int j=0;j<n;j++)
        if(i==0||i==n-1||j==0||j==n-1)
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        cout<<endl;
    }
    // pn ha tr square zala mla rectangle pahije 
    return 0;

}