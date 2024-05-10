#include<iostream>
using namespace std;
using std::string;
#include<fstream>

int main()
{
    //To write into a file
    // string st="Welcome to C++ codes";
    // ofstream out("file_basics.txt");
    // out<<st;

    //To read from a file
    string st2;
    ifstream in("file_basics.txt");
    // in>>st2;    // will print only the first word
    getline(in,st2);
    cout<<st2<<endl;

    return 0;
}