#include <iostream>
using namespace std;

class Base
{
protected:
    float balance;

public:
    void setb(float b)
    {
        balance = b;
    }
    void get()
    {
        cout << "Balance (base class): " << balance << endl;
    }
};

class Derived : public Base
{
    float increment;

public:
    void increment_sal()
    {
        increment = balance * 0.10;
        cout << "Increment given is: " << increment << endl;
    }
    void total_sal()
    {
        cout << "Salary after increment: " << (balance + increment) << endl;
    }
    void get()
    {
        cout << "Derived class: Balance = " << balance << ", Increment = " << increment << endl;
    }
};

int main()
{
    Base *base_ptr = new Derived; // Creating base class pointer pointing to derived class object
    base_ptr->setb(60000);
    base_ptr->get(); // Early binding here - calls Base::get()
    
    // Call Derived class functions using Base class pointer (early binding)
    // base_ptr->increment_sal(); // Error: increment_sal() is not a member of Base
    // base_ptr->total_sal(); // Error: total_sal() is not a member of Base
    // base_ptr->get(); // Early binding here - calls Base::get()

    delete base_ptr;

    return 0;
}
