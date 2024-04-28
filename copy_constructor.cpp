#include <iostream>
using namespace std;
using std::string;

class Interest
{
    float principal_amount;
    int years;

public:
    Interest(float p, int y) : principal_amount(p), years(y) {}

    // this is a copy constructor
    Interest(Interest &obj)
    {
        cout << "Copy constructor called!!" << endl;
        cout << "Value = " << obj.principal_amount << endl;
    }
    void simple_interest(int rate)
    {
        float amount;
        amount = ((principal_amount * rate * years) / 100) + principal_amount;
        cout << "Amount with interest after " << years << " years is Rs " << amount << endl;
    }
};
int main()
{
    Interest obj1(10000, 4);
    obj1.simple_interest(3);
    Interest obj2 = obj1;
    return 0;
}