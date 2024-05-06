#include <iostream>
using namespace std;
#include <string.h>
using std::string;

class Message
{
protected:
    string text;
    string name;

public:
    Message(string t, string n)
    {
        text = t;
        name = n;
    }
    virtual void display() = 0;
};
class Formal : public Message
{
    string company;

public:
    Formal(string t, string n, string com) : Message(t, n) { company = com; }
    void display()
    {
        cout << text << " " << company << " " << name << endl;
    }
};
class InFormal : public Message
{
    string group;

public:
    InFormal(string t, string n, string g) : Message(t, n) { group = g; }
    void display()
    {
        cout << text << " " << group << " " << name << endl;
    }
};
int main()
{
    Formal obj("Hello, you are welcomed in", "TCS", "Sudhir");
    InFormal obj1("Whats up! welcome to ", "party group", "Sudhir");
    Message *ptr[2] = {&obj, &obj1};
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}