#include <iostream>
using namespace std;
using std::string;

class Calculator; // forward declaration
class Complex
{
    int a, b;
    friend class Calculate; // to tell that calculate class is a friend of complex class
public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void get()
    {
        cout << "Complex number is:" << a << " + i" << b << endl;
    }
};
class Calculate
{
public:
    void sum(Complex o1, Complex o2)
    {
        cout << "Sum of complex number:" << endl;
        cout << o1.a << " +i " << o1.b << " + " << o2.a << "+ i" << o2.b << " = " << (o1.a + o2.a) << " +i" << (o1.b + o2.b) << endl;
    }
};
int main()
{
    Complex o1(2, 3), o2(4, 5);
    o1.get();
    o2.get();
    Calculate calc; // to access its member function, making an object of this class is necessary
    calc.sum(o1, o2);
    return 0;
}