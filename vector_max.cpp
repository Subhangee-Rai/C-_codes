// Write a program to create a vector of integers. Insert five integers into the vector and print them.
// Write a function to find the maximum element in a vector of integers.

#include <iostream>
#include <vector>
using namespace std;
using std::string;

void display(vector<int> &v)
{
    vector<int>::iterator it;
    cout << "Elements in the vector are: " << endl;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}
void max(vector<int> &v)
{
    int max = 0, i;
    for (i = 0; i < v.size(); i++)
    {
        if (v.at(i) > max)
        {
            max = v.at(i);
        }
    }
    cout << "Maximum element in the vector is: " << max << endl;
}
int main()
{
    vector<int> vec;
    int i, element;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter element: ";
        cin >> element;
        vec.push_back(element);
    }
    display(vec);
    max(vec);
    return 0;
}