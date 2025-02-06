//write a cpp program to check the given character is vowel or cosnaolnat

#include<iostream>
using namespace std;
int main()
{
    char var;
    cout<<"enter char"<<endl;
    cin>>var;
    
    if(var=='a'||var=='e'||var=='i'||var=='o'||var=='u')
    {
        cout<<"char is vowels"<<endl;
    }
    else
    {
        cout<<"char is consonent"<<endl;
    }
    
    return 0;
}
