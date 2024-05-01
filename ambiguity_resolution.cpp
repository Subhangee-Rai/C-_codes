#include<iostream>
using namespace std;
using std::string;

class A{
    public:
    void greetings()
    {
        cout<<"Hello ";
    }
};
class B{
    public :
    void greetings()
    {
        cout<<"Hi ";
    }
};
class C : public A,public B{
    string name;
    public:
    C(string n):name(n){}
    void display()
    {
        // greetings(); //will create an ambiguity on which greet() to call
        B::greetings();
        //or else function can be overridden to resolve the amibiguity
        cout<<name;
    }
};
int main()
{
    C obj("Somi");
    obj.display();  
    return 0;
}
