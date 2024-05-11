// Write a program to read integers from a text file named "numbers.txt" and find the sum of all the integers.

#include <iostream>
#include <fstream>
using namespace std;
using std::string;
int main()
{
    ifstream in;
    in.open("numbers.txt");
    string st;
    int sum = 0;
    while (in >> st)
    {
        sum += stoi(st); // string to integer conversion using stoi()
    }
    cout << "Sum of numbers in the file is: " << sum << endl;
    in.close();
    return 0;
}