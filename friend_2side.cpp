#include <iostream>
using namespace std;
using std::string;

class c2;
class c1
{
    int val1;

public:
    c1(int a) { val1 = a; }
    void dis1()
    {
        cout << val1;
    }
    friend void exchange(c1 &, c2 &);
};
class c2
{
    int val2;

public:
    c2(int a) { val2 = a; }
    void dis2() { cout << val2; }
    friend void exchange(c1 &, c2 &);
};

// call by refernce is necessary
void exchange(c1 &o1, c2 &o2)
{
    int temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}
int main()
{
    c1 o1(24);
    c2 o2(33);
    cout << "Before exchanging value of o1 is ";
    o1.dis1();
    cout << " and o2 is ";
    o2.dis2();
    cout << endl;
    exchange(o1, o2);
    cout << "After exchaning value of o1 is ";
    o1.dis1();
    cout << " and o2 is ";
    o2.dis2();
    cout << endl;
    return 0;
}