#include <iostream>
#include <string.h>
using namespace std;

// Function with use of template
template <typename T>
void display(T value)
{
    cout << "Function with use of template" << endl;
    cout << "Value entered is: " << value << endl;
}

// Function overloading, template used, different number of parameters
template <typename T>
void display(T value1, T value2)
{
    cout << "Function overloading, template used, different number of parameters" << endl;
    cout << "Values entered are: " << value1 << ", " << value2 << endl;
}

// Non-template overloaded function
void display(int value)
{
    cout << "Non-template overloaded function" << endl;
    cout << "Value entered is: " << value << endl;
}

// Non-template overloaded function
void display(char value)
{
    cout << "Non-template overloaded function" << endl;
    cout << "Value entered is: " << value << endl;
}
int main()
{
    display(32);       // Calls the non-template overloaded function
    display(3.2);      // Function with use of template
    display('A');      // Non-template overloaded function
    display(1, 2);     // Function overloading, template used, different number of parameters
    display('A', 'B'); // Function overloading, template used, different number of parameters
    return 0;
}
