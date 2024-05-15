// Write a program to read lines from a text file named "input.txt" and write alternate lines to two different output files named "output1.txt" and "output2.txt".
#include <iostream>
#include <fstream>
using namespace std;
using std::string;
int main()
{
    ofstream out1, out2;
    string st;
    ifstream in;
    in.open("inputa.txt");
    out1.open("output1.txt");
    out2.open("output2.txt");
    if (!in && !out1 && !out2)
    {
        cout << "Error openoing the file" << endl;
        return 1;
    }
    while (in.eof() == 0)
    {
        getline(in, st);
        out1 << st << endl;
        getline(in, st);
        out2 << st << endl;
    }
    cout << "Exit" << endl;
    in.close();
    out1.close();
    out2.close();
    return 0;
}