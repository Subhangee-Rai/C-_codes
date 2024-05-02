#include <iostream>
using namespace std;
using std::string;

class A
{
    int a, b;

public:
    A(int a1, int b1) : a(a1), b(b1) {}
    void display()
    {
        cout << "a= " << a << ", b= " << b << endl;
    }
};
class B : public A
{
    int c, d;

public:
    B(int a1, int b1, int c1, int d1) : A(a1, b1), c(c1), d(d1) {}
    void displayb()
    {
        display();
        cout << "c= " << c << ", d= " << d << endl;
    }
};
int main()
{
    B obj(1, 2, 3, 4);
    obj.displayb();
    return 0;
}