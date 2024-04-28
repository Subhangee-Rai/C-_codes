#include <iostream>
using namespace std;
using std::string;

class Base1
{
public:
    int var1 = 10;
    void display1()
    {
        cout << "Value of var1: " << var1 << endl;
    }
};
class Base2
{
public:
    int var2 = 20;
    void display2()
    {
        cout << "Value of var2: " << var2 << endl;
    }
};
class derived : public Base1, public Base2
{
public:
    void display3()
    {
        display1();
        display2();
        cout << "var1 + var2 = " << var1 + var2 << endl;
    }
};
int main()
{
    derived obj;
    obj.display3();
    return 0;
}