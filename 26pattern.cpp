//without k ni kam kryach ok 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Outer loop for rows
    for (int i = 0; i < n; i++) 
    {
        // Inner loop for spaces and stars
        for (int j = 0; j < (2 * n) - 1; j++)
        {
            // Condition to print spaces before the stars
            if (j < n - i - 1)
            {
                cout << " ";
            }
            // Condition to print stars
            else if (j < n + i)
            {
                cout << "*";
            }
            // No need for an 'else' condition here for spaces after the stars
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
