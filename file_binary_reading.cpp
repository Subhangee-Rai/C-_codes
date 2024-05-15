#include <iostream>
#include <fstream>
using namespace std;
using std::string;
int main()
{
    ifstream in;
    in.open("binary.bin");
    string st;
    if (!in)
    {
        cout << "Error opening the file" << endl;
        return 1;
    }
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    return 0;
}