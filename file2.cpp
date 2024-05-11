#include <iostream>
#include <fstream>
using namespace std;
using std::string;
int main()
{
    ifstream in;
    string st;
    int count = 0;
    in.open("file2.txt");
    if (!in)
    {
        cerr << "Error: Unable to open file!" << endl;
        return 1;
    }
    while (in.eof() == 0)
    {
        in >> st;
        count++;
    }
    cout << "Number of words in string is: " << count << endl;
    in.close();
    return 0;
}