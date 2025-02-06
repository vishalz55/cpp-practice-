#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    
    int fac = 1;
    for (int i = num; i >= 1; i--)
    {
        fac = fac * i;
    }
    
    cout << "The factorial is " << fac << endl;
    
    return 0;
}
