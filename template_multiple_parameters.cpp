#include <iostream>
using namespace std;
using std::string;

template <class T1, class T2>
class Student
{
public:
    T1 roll;
    T2 name;
    Student(T1 r, T2 n)
    {
        roll = r;
        name = n;
    }
    void display()
    {
        cout << "Name: " << name;
        cout << " Roll: " << roll << endl;
    }
};

template <class T1, class T2, class T3> // need to write this for every class
class Sample
{
public:
    T1 data1;
    T2 data2;
    T3 data3;
    Sample(T1 d1, T2 d2, T3 d3)
    {
        data1 = d1;
        data2 = d2;
        data3 = d3;
    }
    void display()
    {
        cout << "Value of data1 is: " << data1 << endl;
        cout << "Value of data2 is: " << data2 << endl;
        cout << "Value of data3 is: " << data3 << endl;
    }
};
int main()
{
    Student<int, string> obj(1, "Somi"), obj1(2, "Shubhi");
    obj.display();
    obj1.display();

    Sample<int, float, char> obj2(1.1, 1.1, 1.1); // output : 1, 1.1, smiling emoji(1.1 string value)
    obj2.display();
    return 0;
}