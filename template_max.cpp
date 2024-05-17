// Write a function template maxValue that takes two arguments of the same type and returns the larger of the two.

#include <iostream>
using namespace std;
using std::string;
template <typename t>
void findmax(const t &val1, const t &val2)
{
    if (val1 > val2)
    {
        cout << val1 << " is greater" << endl;
    }
    else if (val1 < val2)
    {
        cout << val2 << " is greater" << endl;
    }
    else if (val1 == val2)
    {
        cout << "Both are equal" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
}
int main()
{
    findmax(20, 30);
    return 0;
}