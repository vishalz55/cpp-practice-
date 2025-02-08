/*Great question! Let’s break down the differences between these two function definitions:

1. int sum(int a, int b)
int sum(int a, int b) {
    return a + b;
}

Parameters: This function takes two parameters, a and b, which are passed to the function when it is called.
Local Variables: a and b are local to the function, meaning they are only accessible within the sum function.
Flexibility: This function can be used to add any two integers provided as arguments when calling the function.
2. int sum()
int sum() {
    return num1 + num2;
}

No Parameters: This function does not take any parameters.
Global Variables: It uses the global variables num1 and num2 to perform the addition.
Dependency: This function depends on the global variables num1 and num2 being defined and assigned values before the function is called.
Key Differences:
Parameters vs. Global Variables:
The first function (int sum(int a, int b)) uses parameters, making it more flexible and reusable with different inputs.
The second function (int sum()) relies on global variables, which can make the code less modular and harder to manage.
Scope:
In the first function, a and b are local to the function.
In the second function, num1 and num2 must be defined globally.
Example Usage:
Using Parameters:
#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Enter the number one: " << endl;
    cin >> num1;
    cout << "Enter the number two: " << endl;
    cin >> num2;

    int result = sum(num1, num2);
    cout << "The sum is: " << result << endl;

    return 0;
}

Using Global Variables:
#include <iostream>
using namespace std;

int num1, num2;

int sum() {
    return num1 + num2;
}

int main() {
    cout << "Enter the number one: " << endl;
    cin >> num1;
    cout << "Enter the number two: " << endl;
    cin >> num2;

    int result = sum();
    cout << "The sum is: " << result << endl;

    return 0;
}

Summary:
Using Parameters: More flexible and modular.
Using Global Variables: Simpler but less flexible and can lead to issues with variable scope and management.
I hope this helps! Let me know if you have any more questions. 😊
*/