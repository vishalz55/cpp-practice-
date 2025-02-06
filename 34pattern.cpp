#include<iostream>
using namespace std;

int main()
{   
   // grid size
   int n;
   cin >> n;
   
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < (2 * n) - 1; j++) 
        {
            // print spaces on the left side
            if(j < n - i - 1)
            {
                cout << " ";
            }
            // print stars within the proper range
            else if(j <= n + i - 1)
            {
                cout << "*";
            }
        }
       
        // move to the next line after each row
        cout << endl;
    }
    return 0;
}
