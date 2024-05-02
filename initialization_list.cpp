#include <iostream>
using namespace std;
using std::string;
class Base
{
    int a, b;

public:
    // Default constructor
    Base() {}

    // Default constructor to initialize default values
    // Base()
    // {
    //     a = 0;
    //     b = 0;
    // }

    // Parameteized constructor

    // Case 1
    //  Base(int i,int j):a(i),b(j){
    //      cout<<"Base constructor {Case 1} is called"<<endl;
    //      cout<<"Value of a is: "<<a<<endl;
    //      cout<<"Value of b is: "<<b<<endl;
    //  }

    // Case 2 --> arithmetic operator used while initializing
    // Base(int i, int j) : a(i * j), b(i + j)
    // {
    //     cout << "Base constructor {Case 2} is called" << endl;
    //     cout << "Value of a is: " << a << endl;
    //     cout << "Value of b is: " << b << endl;
    // }

    // Case 3 --> value of first variable used to initialize value of second variable
    // Base(int i, int j) : a(i * j), b(a * 2)
    // {
    //     cout << "Base constructor {Case 3} is called" << endl;
    //     cout << "Value of a is: " << a << endl;
    //     cout << "Value of b is: " << b << endl;
    // }

    // Case 4 --> value of first variable used to initialize value of second variable
    Base(int i, int j) : b(j), a(b * 2)
    {
        cout << "Base constructor {Case 4} is called" << endl;
        cout << "Value of a is: " << a << endl; // will give a garbage value because the variable which is declared first should be initialized first also
        cout << "Value of b is: " << b << endl;
    }
};
int main()
{
    Base obj(3, 4);
    return 0;
}