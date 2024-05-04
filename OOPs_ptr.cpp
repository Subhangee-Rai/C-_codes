#include <iostream>
using namespace std;
using std::string;

class Number
{
    int a, b;

public:
    void set(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void get()
    {
        cout << "Value of a is: " << a << endl;
        cout << "Value of b is: " << b << endl;
    }
};
int main()
{
    // Method 1
    Number obj1;
    Number *ptr = &obj1;
    (*ptr).set(1, 2);
    (*ptr).get();

    // Method 2
    Number *ptr2 = new Number;
    (*ptr2).set(3, 4);
    (*ptr2).get();

    // Method 3
    ptr2->set(5, 6);
    ptr2->get();

    // Array of objects
    Number *ptr3 = new Number[3];
    ptr3->set(10, 20);
    ptr3->get();
    (ptr3 + 1)->set(30, 40);
    (ptr3 + 1)->get();
    (ptr3 + 2)->set(50, 60);
    (ptr3 + 2)->get();
    return 0;
}