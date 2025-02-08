#include <iostream>
using namespace std;

int num1, num2, summ;

// Function to calculate the sum
int sum() {
    return num1 + num2; //sadhi ghost function ch kam kay aste input takla ka kahi tri output dete tasch
                        //kahi tri return krte ok
}

int main() {
    cout << "Enter the number one: " << endl;
    cin >> num1;
    cout << "Enter the number two: " << endl;
    cin >> num2;

    // Call the sum function and store the result in summ
    summ = sum(); // yeteh value apn store krto ok 

    // Output the result
    cout << "The sum is: " << summ << endl;

    return 0;
}
