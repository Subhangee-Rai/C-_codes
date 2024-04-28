#include <iostream>
using namespace std;
using std::string;

class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base ::setdata()
{
    data1 = 10;
    data2 = 20;
}
int Base ::getdata1()
{
    return data1;
}
int Base ::getdata2()
{
    return data2;
}

class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
};
void Derived ::process()
{
    data3 = data2 * getdata1();
}
void Derived ::display()
{
    cout << "Value of data 1: " << getdata1() << endl;
    cout << "Value of data 2: " << data2 << endl;
    cout << "Value of data 3: " << data3 << endl;
}
int main()
{
    Derived obj;
    obj.setdata();
    obj.process();
    obj.display();
    return 0;
}