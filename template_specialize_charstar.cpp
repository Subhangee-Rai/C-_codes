// Create a class template DataHolder that holds a value. Specialize this template for char* to handle C-style strings properly.
#include <iostream>
using namespace std;

// Primary template for DataHolder
template <class T>
class DataHolder
{
    T value;

public:
    DataHolder(T v) : value(v) {}
    void display()
    {
        cout << "Value is: " << value << endl;
    }
};

// Specialization for DataHolder with char*
template <>
class DataHolder<char *>
{
    char *value;

public:
    DataHolder(char *s) : value(s) {}
    void display()
    {
        cout << "Value of string is: " << value << endl;
    }
};

int main()
{
    DataHolder<int> obj(28);
    DataHolder<const char *> obj1("hello");
    obj.display();
    obj1.display();
    return 0;
}
