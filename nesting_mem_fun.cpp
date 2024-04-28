#include <iostream>
using namespace std;
#include <string>
using std::string;

// checking if the entered number is a binary number or not using a nested member functions functionality
class binary_number
{
    string s;

public:
    void read();
    void check();
};

void binary_number::read()
{
    cout << "Enter the binary number:" << endl;
    cin >> s;
    check();
}

void binary_number::check()
{
    if (s.empty())
    {
        cout << "Empty string entered. Not a binary number." << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "Not a binary number" << endl;
            return;
        }
    }
    cout << "Binary number" << endl;
}

int main()
{
    binary_number obj1;
    obj1.read();
    return 0;
}
