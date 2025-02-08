#include <iostream>
using namespace std;
int num1,num2,summ;
cout<<"enter the number one "<<endl;
cin>>num1;
cout<<"Enter the number two"<<endl;
cin>>num2;

int sum()
{
   summ = num1+num2;
};
int main()
{
    return 0;
}

/*Got it! If you want to use cout outside of any function, 
it won’t work because cout needs to be inside a function to execute. In C++,
 all executable code must be inside a function. Here’s why:

Scope and Execution: Code outside of functions is not executed in the normal flow of the program. Only 
code inside functions, like main(), is executed when the program runs.
Syntax Rules: C++ requires that all statements that perform actions (like cout) be inside functions.

#include <iostream>
using namespace std;

cout << "This won't work!" << endl; // This is outside any function

int main() {
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    cout << "This will work!" << endl; // This is inside the main function
    return 0;
}

*/

