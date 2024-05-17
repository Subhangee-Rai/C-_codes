// Write a function template printType that prints "This is a template function" and create a specialization for the int type that prints "This is a template function specialized for int".

#include <iostream>
using namespace std;
using std::string;
template <typename T>
void prinType()
{
    cout << "This is a template function" << endl;
}
template <>
void prinType<int>()
{
    cout << "This is a specialized function" << endl;
}
int main()
{
    prinType<double>();
    prinType<int>();
    return 0;
}