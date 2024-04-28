#include <iostream>
using namespace std;
using std::string;

// BASE CLASS
class A
{
    int A_data;

public:
    int data2 = 0;
    A() : A_data(0) {}
    void display1()
    {
        cout << "Base class" << endl;
        cout << "Data Value: " << A_data << endl;
    }
};

// DERIVED CLASS : DEFAULT VISIBILITY-MODE IS "PRIVATE"
class B : A
{
public:
    void display2()
    {
        cout << "Derved class" << endl;
        // cout << "Data Value: " << A_data << endl;    //THIS WILL CAUSE ERROR COZ B CAN'T ACCESS PRIVATE DATA OF A

        // DISPLAY1() CAN BE ACCESSED THROUGH THIS FUNCTION BUT NOT AN OBJECT OF CLASS B
        display1();
    }
};

// DERIVED CLASS : PUBLIC MODE
class C : public A
{
public:
    void display()
    {
        cout << "Derived class C" << endl;
        cout << "Data value: " << data2 << endl;
        // cout<<A_data<<endl;      //CAN'T ACCESS COZ PRIVATE MEMBERS ARE NEVER INHERITED
    }
};
int main()
{
    cout << endl;
    cout << "Class A object" << endl;
    A obj1;
    obj1.display1();

    cout << endl;
    cout << "Class B object" << endl;
    B obj2;
    // obj2.display1();        //CAN'T ACCESS THIS COZ CLASS B INHERITS PRIVATELY FROM A, SO ITS DATA MEMBER & MEMBER FUNCTION IS NOW PRIVATE
    obj2.display2();

    cout << endl;
    cout << "Class C object" << endl;
    C obj3;
    obj3.display1();
    obj3.display();
    return 0;
}