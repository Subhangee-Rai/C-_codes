#include <iostream>
using namespace std;
using std::string;
class A
{
    int pri = 10;

protected:
    int pro = 20;

public:
    int pub = 30;
    void display()
    {
        cout << "Private member value is: " << pri << endl;
        cout << "Protected member value is: " << pro << endl;
        cout << "Public member value is: " << pub << endl;
    }
};

// public derivation of A
class B : public A
{
public:
    void displayb()
    {
        // cout<<"Private member value is: "<<pri<<endl;        //can't do because private members are never derived
        cout << "Protected member value is: " << pro << endl;
        cout << "Public member value is: " << pub << endl;
    }
};

// private derivation of A
class C : private A
{
public:
    void displayc()
    {
        // cout<<"Private member value is: "<<pri<<endl;
        cout << "Protected member value is: " << pro << endl;
        cout << "Public member value is: " << pub << endl;
    }
};

// protected derivation of A
class D : protected A
{
public:
    void displayd()
    {
        // cout<<"Private member value is: "<<pri<<endl;
        cout << "Protected member value is: " << pro << endl;
        cout << "Public member value is: " << pub << endl;
    }
};

int main()
{
    cout << "Accessing through object" << endl;
    A obj;
    cout << "BASE CLASS" << endl;
    // cout<<"Private member value is: "<<obj.pri<<endl;     //can't access private members through object of class, it should be accessed through member function
    // cout<<"Protected member value is: "<<obj.pro<<endl;   //same
    cout << "Public member value is: " << obj.pub << endl
         << endl;

    cout << "CLASS B: PUBLIC" << endl;
    B obj1;
    // cout<<"Private member value is: "<<obj1.pri<<endl;
    // cout<<"Protected member value is: "<<obj1.pro<<endl;
    cout << "Public memberv= value is: " << obj1.pub << endl
         << endl;

    cout << "CLASS C: PRIVATE" << endl;
    C obj2;
    // cout<<"Private member value is: "<<obj2.pri<<endl;
    // cout<<"Protected member value is: "<<obj2.pro<<endl;
    // cout<<"Public memberv= value is: "<<obj2.pub<<endl<<endl;

    cout << "CLASS D: PROTECTED" << endl;
    D obj3;
    // cout<<"Private member value is: "<<obj3.pri<<endl;
    // cout<<"Protected member value is: "<<obj3.pro<<endl;
    // cout<<"Public memberv= value is: "<<obj3.pub<<endl<<endl;

    cout << endl
         << endl;
    cout << "Accessing through member function" << endl;

    cout << "BASE CLASS" << endl;
    obj.display();

    cout << "CLASS B: PUBLIC" << endl;
    obj1.displayb();

    cout << "CLASS C: PRIVATE" << endl;
    obj2.displayc();

    cout << "CLASS D: PROTECTED" << endl;
    obj3.displayd();
    return 0;
}