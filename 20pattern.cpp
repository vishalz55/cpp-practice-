#include<iostream>
using namespace std;
//rectangle lakshy bhau
// yat na as grid method ni kryach aste direct lihyach agodar ani nantr hallow to kryach agodar solid to hallow as 
int main(){
    int breath;
    int length;
    cout<<"Enter the value of the breath";
    cin>>breath;
    cout<<"Enter the value of the length";
    cin>>length;

    for(int i =0;i<breath;i++)
    {   //al solid ata vichar kra hallow ks krat yeil smjl ka 
        for(int j=0;j<length;j++)
        if(i==0||i==breath-1||j==0||j==length-1)
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