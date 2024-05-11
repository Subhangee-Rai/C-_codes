#include <iostream>
#include <fstream>
using namespace std;
using std::string;
int main()
{
    ifstream in;
    ofstream out;
    out.open("destintaion.txt");
    in.open("source.txt");
    string st;

    // method 1
    while (in.eof() == 0)
    {
        getline(in, st);
        out << st;
        out << endl;
    }

    // method 2
    //  while (in >> st)
    //  {
    //      count++;
    //  }

    in.close();
    out.close();
    return 0;
}