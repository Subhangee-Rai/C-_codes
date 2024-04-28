#include <iostream>
using namespace std;
using std::string;

class Employee
{
private:
    string name;
    int id;

public:
    void set()
    {
        cout << "Enter name of employee" << endl;
        cin >> name;
        cout << "Enter id of employee" << endl;
        cin >> id;
    }
    void get()
    {
        cout << "Name of employee is " << name << " and id is " << id << endl;
    }
    friend Employee message();
};
Employee message()
{
    cout << "This is a friend function, HELLO!!" << endl;
}
int main()
{
    Employee array[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        array[i].set();
        array[i].get();
        message();
    }
    return 0;
}